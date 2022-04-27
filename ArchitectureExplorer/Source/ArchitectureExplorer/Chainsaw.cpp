// Fill out your copyright notice in the Description page of Project Settings.


#include "Chainsaw.h"
#include "Components/BoxComponent.h"
#include "DrawDebugHelpers.h"
#include "Components/SkeletalMeshComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "HandController.h"
#include "Math/UnrealMathUtility.h"
#include "Haptics/HapticFeedbackEffect_Base.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"


AChainsaw::AChainsaw()
{
	AGrabbable::ItemGripSize = 58.f;
	AGrabbable::bTwoHanded = true;
	AGrabbable::ValidOneHandHandHolds.SetNum(1);
	AGrabbable::ValidOneHandHandHolds.Insert(2, 0);
	PrimaryActorTick.bCanEverTick = true;
}

void AChainsaw::BeginPlay()
{
	Super::BeginPlay();

	Player = Cast<AVRCharacter>(UGameplayStatics::GetActorOfClass(GetWorld(), AVRCharacter::StaticClass()));

	UActorComponent * AC = GetComponentByClass(UBoxComponent::StaticClass());
	BladeCollision = Cast<UBoxComponent>(AC);

	if (BladeCollision == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("BladeCollision cast failed in Chainsaw.cpp"));
	}

	// THESE TWO LINES NEED TO BE IN EVERY TWO HANDED GRABBABLE ACTOR
	AGrabbable::HandHold1 = Cast<USceneComponent>(GetComponentsByTag(UActorComponent::StaticClass(), TEXT("1"))[0]);
	AGrabbable::HandHold2 = Cast<USceneComponent>(GetComponentsByTag(UActorComponent::StaticClass(), TEXT("2"))[0]);

	SkeletalMesh = Cast<USkeletalMeshComponent>(GetComponentByClass(USkeletalMeshComponent::StaticClass()));

	EngineAudio = Cast<UAudioComponent>(GetComponentsByTag(UAudioComponent::StaticClass(), FName("rev"))[0]);

	//BladeCollision->OnComponentBeginOverlap.AddDynamic(this, &AChainsaw::BladeBeginOverlap);

}

void AChainsaw::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (b1Held)
	{
		TriggerAxisUpdates(DeltaTime);
		UE_LOG(LogTemp, Warning, TEXT("%f"), CurrentEngineValue);
	}

	//DrawDebugLine(GetWorld(), GetActorLocation(), GetActorLocation() + SkeletalMesh->GetRightVector() * 100.f, FColor::Red, false, 2 * DeltaTime);
	/*
	if (AGrabbable::bInterpToMC)
	{
		InterpToMC(DeltaTime);
	}
	if (AGrabbable::bRotateTwoHand)
	{
		RotateTwoHand(DeltaTime);
	}
	else if (AGrabbable::bRotateOneHand)
	{
		RotateOneHand(DeltaTime);
	}
	*/
}

void AChainsaw::TriggerAxisUpdates(float DeltaTime)
{
	// update pitch of engine
	// update chain rotation speed
	// update shake value
	// update haptic intensity? (maybe not this one)
	const float TriggerAxisValue = (bLeftHandIsControllingTrigger) ? Player->LeftTriggerAxisValue : Player->RightTriggerAxisValue;
	//EngineAudio->SetPitchMultiplier(TriggerAxisValue * 2.f);
	
	
	if (TriggerAxisValue > 0.1f)
	{
		Heat += HeatUpSpeed * (1/Heat) * DeltaTime;
		if (Heat > MaxHeat)	// clamp
		{
			Heat = MaxHeat;
		}
	}
	else
	{
		if (Heat > MaxHeat * 0.5f)
		{
			Heat -= CooldownSpeed * (1 / Heat) * DeltaTime;
		}
		else
		{
			Heat -= CooldownSpeed * Heat * 0.2f * DeltaTime;
		}


		if (Heat < 0) // clamp
		{
			Heat = 0;
		}
	}

	if (TriggerAxisValue > LastTriggerAxisValue || TriggerAxisValue >= 0.9f)
	{
		CurrentEngineValue += HeatUpSpeed * Heat * (1 / TriggerAxisValue);

		if (CurrentEngineValue > MaxEngineValue)
		{
			CurrentEngineValue = MaxEngineValue;
		}

		EngineAudio->SetFloatParameter(FName("TAVP"), CurrentEngineValue);
		EngineAudio->SetFloatParameter(FName("TAVV"), CurrentEngineValue);
		if (CurrentEngineValue > 0.7f)
		{
			EngineAudio->SetVolumeMultiplier(CurrentEngineValue);
		}
	}
	else if(TriggerAxisValue < LastTriggerAxisValue || TriggerAxisValue < 0.9f)
	{
		if (CurrentEngineValue > 0.8f)
		{
			CurrentEngineValue -= CooldownSpeed * CooldownSpeed * CooldownSpeed * (1 / (Heat * CurrentEngineValue)) * 75.f * DeltaTime;
		}
		else
		{
			if (Heat > 0.1f)
			{
				CurrentEngineValue -= CooldownSpeed * Heat * CurrentEngineValue * 0.6f * DeltaTime;
			}
			else
			{
				CurrentEngineValue -= CooldownSpeed * DeltaTime * 0.5f;
			}
			
		}

		if (CurrentEngineValue < 0) // clamp
		{
			CurrentEngineValue = 0;
		}

		if (CurrentEngineValue > 0)
		{
			EngineAudio->SetFloatParameter(FName("TAVP"), CurrentEngineValue);
			EngineAudio->SetFloatParameter(FName("TAVV"), CurrentEngineValue);

			if (CurrentEngineValue > 0.7f)
			{
				EngineAudio->SetVolumeMultiplier(CurrentEngineValue);
			}
			
		}
	}
	
	//UE_LOG(LogTemp, Warning, TEXT("Heat: %f"), Heat);

	LastTriggerAxisValue = TriggerAxisValue;
}

void AChainsaw::RandomShake(float DeltaTime)	//	calling this every frame is not ideal?
{
	float ShakeIntensity = RevShakeMaxIntensity * RevStartupIntensityMultiplier;
	float x = FMath::RandRange(-ShakeIntensity, ShakeIntensity);
	float y =  FMath::RandRange(-ShakeIntensity, ShakeIntensity);
	float z = FMath::RandRange(-ShakeIntensity, ShakeIntensity);
	FRotator ShakeRotator = FRotator(x, y, z);
	SkeletalMesh->AddRelativeRotation(ShakeRotator);
}

void AChainsaw::StopShake()
{
	bRandomShake = false;
	SetActorRelativeRotation(FRotator::ZeroRotator);
}

void AChainsaw::Gripped(int HandHoldNum)
{
	Super::Gripped(HandHoldNum);
	
	if (HandHoldNum == 1)
	{
		const AHandController * HC = Cast<AHandController>(MotionController1);

		if (HC->bLeft)
		{
			bLeftHandIsControllingTrigger = true;
		}
		else
		{
			bLeftHandIsControllingTrigger = false;
		}
	}
}

void AChainsaw::Released(int HandHoldNum)
{
	Super::Released(HandHoldNum);

}

void AChainsaw::InterpToMC(float DeltaTime)
{
	/*
	const FVector AL = GetActorLocation();
	ControllingOffset = GetActorLocation() - ControllingHandHold->GetComponentLocation();
	const FVector TL = AGrabbable::ControllingMC->GetActorLocation() + ControllingOffset;
	SetActorLocation(UKismetMathLibrary::VInterpTo_Constant(AL, TL, DeltaTime, 300.f));
	*/
}

void AChainsaw::RotateOneHand(float DeltaTime)
{
	/*
	// this only works for the chainsaw
	FRotator MCRot = ControllingMC->GetActorRotation();
	MCRot.Roll = (bControllingMCLeft) ? MCRot.Roll - 90.f : MCRot.Roll += 90.f;
	SetActorRotation(UKismetMathLibrary::RLerp(GetActorRotation(), MCRot, 5.f * DeltaTime, true));
	*/
}

void AChainsaw::RotateTwoHand(float DeltaTime)
{

	/*
	const AHandController * HC = Cast<AHandController>(NonControllingMC);
	const FVector CO = HC->ChainsawOffset->GetComponentLocation();
	const FVector MCDif = (CO - ControllingMC->GetActorLocation()).GetSafeNormal();
	FRotator NewRot = MCDif.ToOrientationRotator();
	NewRot.Roll = ControllingMC->GetActorRotation().Roll;

	SetActorRotation(UKismetMathLibrary::RLerp(GetActorRotation(), NewRot, 5.f * DeltaTime, true));

	/*
	const FVector SMFV = SkeletalMesh->GetForwardVector();
	//const FVector MC1L = AGrabbable::MotionController1->GetActorLocation();
	const FVector MC1L = AGrabbable::MC1OffsetComponent->GetComponentLocation();
	const FVector MC2L = AGrabbable::MotionController2->GetActorLocation();
	DrawDebugSphere(GetWorld(), MC1L, 5.f, 10.f, FColor::Cyan, false, 2 * DeltaTime);

	float D = FVector::Distance(MC1L, MC2L);
	if (D > TwoHandDistance + TwoHandDropThreshold || D < TwoHandDistance - TwoHandDropThreshold)
	{
		Cast<AHandController>(AGrabbable::MotionController1)->Release();
		Cast<AHandController>(AGrabbable::MotionController2)->Grip();
		return;
	}

	const FVector MCDif = (MC1L - MC2L).GetSafeNormal();
	const float Angle = FMath::Acos(FVector::DotProduct(SMFV, MCDif));
	const FVector Axis = FVector::CrossProduct(SMFV, MCDif).GetSafeNormal();
	const FQuat DeltaRotation = FQuat(Axis, Angle);
	const FQuat NewRotation = DeltaRotation * GetActorQuat();
	const FQuat SlerpQuat = FQuat::Slerp(GetActorQuat(), NewRotation, 3.5f * DeltaTime);
	SetActorRotation(SlerpQuat);

	 
	const float Angle2 = FMath::FMath::Acos(FVector::DotProduct(SkeletalMesh->GetRightVector(), AGrabbable::MotionController1->GetActorRightVector()));
	const FVector Axis2 = FVector::CrossProduct(SkeletalMesh->GetRightVector(), AGrabbable::MotionController1->GetActorRightVector()).GetSafeNormal();
	const FQuat DeltaRot = FQuat(Axis2, Angle2);
	const FQuat NewRot = DeltaRot * GetActorQuat();
	const FQuat SlerpQuat2 = FQuat::Slerp(GetActorQuat(), NewRot, 3.f * DeltaTime);
	SetActorRotation(SlerpQuat2);
	*/
}

void AChainsaw::BladeBeginOverlap(UPrimitiveComponent * FirstComponent, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	UE_LOG(LogTemp, Warning, TEXT("Overlap Errol!"));
	DrawDebugSphere(GetWorld(), SweepResult.ImpactPoint, 5.f, 10.f, FColor::Cyan, true);
}