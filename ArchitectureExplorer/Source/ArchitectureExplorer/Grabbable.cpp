// Fill out your copyright notice in the Description page of Project Settings.


#include "Grabbable.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "VRCharacter.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"

// Sets default values
AGrabbable::AGrabbable()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AGrabbable::BeginPlay()
{
	Super::BeginPlay();

	
	HandHold1 = Cast<USceneComponent>(GetComponentsByTag(USceneComponent::StaticClass(), TEXT("1"))[0]);
	HandHoldOffset1 = GetActorLocation() - HandHold1->GetComponentLocation();

	if (GetComponentsByTag(USceneComponent::StaticClass(), TEXT("2")).Num() > 0)
	{
		HandHold2 = Cast<USceneComponent>(GetComponentsByTag(USceneComponent::StaticClass(), TEXT("2"))[0]);
	}
	if (HandHold2 != nullptr)
	{
		HandHoldOffset2 = GetActorLocation() - HandHold2->GetComponentLocation();
	}

	AActor* VRChar = UGameplayStatics::GetActorOfClass(GetWorld(), AVRCharacter::StaticClass());
	TArray<UActorComponent*> Meshes;
	Meshes = GetComponentsByClass(UMeshComponent::StaticClass());
	for (auto m : Meshes)
	{
		Cast<UPrimitiveComponent>(m)->MoveIgnoreActors.Push(VRChar);
	}

	Mesh = Cast<UPrimitiveComponent>(GetComponentsByTag(UMeshComponent::StaticClass(), FName("Mesh"))[0]);
}

void AGrabbable::Tick(float DeltaTime)
{
	if (bInterpToMC)
	{
		InterpToMC(DeltaTime);
	}
	if (bRotateTwoHand)
	{
		RotateTwoHand(DeltaTime);
	}
	else if (bRotateOneHand)
	{
		RotateOneHand(DeltaTime);
	}
}

void AGrabbable::Gripped(int HandHoldNum)
{
	if (HandHoldNum == 1)
	{
		b1Held = true;
		if (!b2Held)
		{
			if (ValidOneHandHandHolds.Contains(HandHoldNum))
			{
				ControllingMC = MotionController1;
				NonControllingMC = MotionController2;
				ControllingOffset = HandHoldOffset1;
				ControllingHandHold = HandHold1;
				bInterpToMC = true;
				bRotateOneHand = true;

			}
		}
		else
		{
			// two hand mechanics
			ControllingMC = MotionController1;
			NonControllingMC = MotionController2;
			ControllingOffset = HandHoldOffset1;
			ControllingHandHold = HandHold1;

			bInterpToMC = true;
			bRotateOneHand = false;
			bRotateTwoHand = true;
		}
	}
	else if (HandHoldNum == 2)
	{
		b2Held = true;
		if (!b1Held)
		{
			if (ValidOneHandHandHolds.Contains(HandHoldNum))
			{
				ControllingMC = MotionController2;
				NonControllingMC = MotionController1;
				ControllingOffset = HandHoldOffset2;
				ControllingHandHold = HandHold2;
				bInterpToMC = true;
				bRotateOneHand = true;
			}
		}
		else
		{
			ControllingMC = MotionController1;
			NonControllingMC = MotionController2;
			ControllingOffset = HandHoldOffset1;
			ControllingHandHold = HandHold1;
			bInterpToMC = true;
			bRotateOneHand = false;
			bRotateTwoHand = true;
			// two hand mechanics
		}
	}

	// disable physics
	if (bInterpToMC)
	{
		SetActorTickEnabled(true);
		Mesh->SetSimulatePhysics(false);
		Mesh->SetEnableGravity(false);
	}

	// check if ControllingMC is left or right for different rotations

	if (ControllingMC != nullptr)
	{
		AHandController* HCCast = Cast<AHandController>(ControllingMC);

		if (HCCast->bLeft)
		{
			bControllingMCLeft = true;
		}
		else
		{
			bControllingMCLeft = false;
		}
	}
}

void AGrabbable::Released(int HandHoldNum)
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
				ControllingHandHold = HandHold2;
				bRotateTwoHand = false;
				bRotateOneHand = true;
			}
			else
			{
				SetActorTickEnabled(false);
				bInterpToMC = false;
				bRotateTwoHand = false;
				bRotateOneHand = false;
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
				ControllingHandHold = HandHold1;
				bRotateTwoHand = false;
				bRotateOneHand = true;
			}
			else
			{
				SetActorTickEnabled(false);
				bInterpToMC = false;
				bRotateTwoHand = false;
				bRotateOneHand = false;
			}
		}
	}
}

// Called every frame
/*
void AGrabbable::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//UE_LOG(LogTemp, Warning, TEXT("%s"), *GetName());
}
*/
void AGrabbable::Grab()
{

}

void AGrabbable::InterpToMC(float DeltaTime)
{
	const FVector AL = GetActorLocation();
	ControllingOffset = GetActorLocation() - ControllingHandHold->GetComponentLocation();
	const FVector TL = AGrabbable::ControllingMC->GetActorLocation() + ControllingOffset;
	SetActorLocation(UKismetMathLibrary::VInterpTo_Constant(AL, TL, DeltaTime, 300.f));
}

void AGrabbable::RotateOneHand(float DeltaTime)
{

	// this only works for the chainsaw
	FRotator MCRot = ControllingMC->GetActorRotation();
	MCRot.Roll = (bControllingMCLeft) ? MCRot.Roll - 90.f : MCRot.Roll += 90.f;
	SetActorRotation(UKismetMathLibrary::RLerp(GetActorRotation(), MCRot, 5.f * DeltaTime, true));
}

void AGrabbable::RotateTwoHand(float DeltaTime)
{
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