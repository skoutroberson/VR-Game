// Fill out your copyright notice in the Description page of Project Settings.


#include "Chainsaw.h"
#include "Components/BoxComponent.h"
#include "DrawDebugHelpers.h"
#include "Components/SkeletalMeshComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "HandController.h"

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

	//BladeCollision->OnComponentBeginOverlap.AddDynamic(this, &AChainsaw::BladeBeginOverlap);

}

void AChainsaw::Tick(float DeltaTime)
{
	//DrawDebugLine(GetWorld(), GetActorLocation(), GetActorLocation() + SkeletalMesh->GetRightVector() * 100.f, FColor::Red, false, 2 * DeltaTime);
	
	if (AGrabbable::bInterpToMC)
	{
		InterpToMC(DeltaTime);
	}
	
	if (AGrabbable::bRotateTwoHand)
	{
		RotateTwoHand(DeltaTime);
	}
}

void AChainsaw::Gripped(int HandHoldNum)
{
	if (HandHoldNum == 1)
	{
		b1Held = true;
		if (!b2Held)
		{
			if (AGrabbable::ValidOneHandHandHolds.Contains(HandHoldNum))
			{
				AGrabbable::ControllingMC = AGrabbable::MotionController1;
				ControllingOffset = HandHoldOffset1;
				bInterpToMC = true;
			}
		}
		else
		{

		}
	}
	else if (HandHoldNum == 2)
	{
		b2Held = true;
		if (!b1Held)
		{
			if (AGrabbable::ValidOneHandHandHolds.Contains(HandHoldNum))
			{
				AGrabbable::ControllingMC = AGrabbable::MotionController2;
				ControllingOffset = HandHoldOffset2;
				bInterpToMC = true;
			}
		}
		else
		{

		}
	}

	// disable physics
	if (bInterpToMC)
	{
		SkeletalMesh->SetSimulatePhysics(false);
		SkeletalMesh->SetEnableGravity(false);
	}
}

void AChainsaw::Released(int HandHoldNum)
{
	if (HandHoldNum == 1)
	{
		b1Held = false;
		if (ControllingMC == MotionController1)
		{
			if (b2Held && ValidOneHandHandHolds.Contains(2))
			{
				ControllingMC = MotionController2;
				ControllingOffset = HandHoldOffset2;
			}
			else
			{
				bInterpToMC = false;
			}
		}
	}
	else if (HandHoldNum == 2)
	{
		b2Held = false;
		if (ControllingMC == MotionController2)
		{
			if (b2Held && ValidOneHandHandHolds.Contains(1))
			{
				ControllingMC = MotionController1;
				ControllingOffset = HandHoldOffset1;
			}
			else
			{
				bInterpToMC = false;
			}
		}
	}
}

void AChainsaw::InterpToMC(float DeltaTime)
{
	const FVector AL = GetActorLocation();
	const FVector TL = AGrabbable::ControllingMC->GetActorLocation() + ControllingOffset;
	SetActorLocation(UKismetMathLibrary::VInterpTo_Constant(AL, TL, DeltaTime, 100.f));
}

void AChainsaw::RotateTwoHand(float DeltaTime)
{
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

	/*
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
