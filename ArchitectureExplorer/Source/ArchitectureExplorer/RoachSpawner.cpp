// Fill out your copyright notice in the Description page of Project Settings.


#include "RoachSpawner.h"
#include "Math/UnrealMathUtility.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "Door.h"
#include "Grabbable.h"
#include "Roach.h"
#include "VRCharacter.h"
#include "ErrolCharacter.h"
#include "HandController.h"
#include "DrawDebugHelpers.h"

// Sets default values
ARoachSpawner::ARoachSpawner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ARoachSpawner::BeginPlay()
{
	Super::BeginPlay();
	SetActorTickEnabled(false);

	World = GetWorld();

	Roaches.Reserve(MaxRoachCount);

	// add actors that our spawn sweep should ignore (should only hit static objects)

	TArray<AActor*> Doors;
	TArray<AActor*> Roaches;
	TArray<AActor*> Grabbables;
	TArray<AActor*> HandControllers;
	UGameplayStatics::GetAllActorsOfClass(World, ADoor::StaticClass(), Doors);
	UGameplayStatics::GetAllActorsOfClass(World, ARoach::StaticClass(), Roaches);
	UGameplayStatics::GetAllActorsOfClass(World, AGrabbable::StaticClass(), Grabbables);
	UGameplayStatics::GetAllActorsOfClass(World, AHandController::StaticClass(), HandControllers);

	QueryParams.AddIgnoredActor(this);
	QueryParams.AddIgnoredActors(Doors);
	QueryParams.AddIgnoredActors(Roaches);
	QueryParams.AddIgnoredActors(Grabbables);
	QueryParams.AddIgnoredActors(HandControllers);
	QueryParams.AddIgnoredActor(UGameplayStatics::GetActorOfClass(World, AVRCharacter::StaticClass()));
	QueryParams.AddIgnoredActor(UGameplayStatics::GetActorOfClass(World, AErrolCharacter::StaticClass()));

	SweepSphere.SetSphere(SweepSphereRadius);
	AQ = GetActorQuat();

	TArray<UActorComponent*> BoxComponents;
	BoxComponents = GetComponentsByClass(UBoxComponent::StaticClass());
	SpawnBoxes.Reserve(BoxComponents.Num());
	for (auto b : BoxComponents)
	{
		SpawnBoxes.Add(Cast<UBoxComponent>(b));
	}
	SpawnBoxNum = SpawnBoxes.Num();


}

// Called every frame
void ARoachSpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (bSpawningRoaches)
	{
		SpawnRoach();
	}
	else if (bDeletingRoaches)
	{
		DeleteRoach();
	}
	else if (bMovingRoaches)
	{
		MoveRoach();
	}
	else if (bStoppingFlee)
	{
		StopRoachFlee();
	}
}

void ARoachSpawner::SpawnRoaches(int NumberOfRoaches)
{
	UE_LOG(LogTemp, Warning, TEXT("Spawning Roaches"));
	TargetRoachCount = NumberOfRoaches;
	bSpawningRoaches = true;
	SetActorTickEnabled(true);
}

void ARoachSpawner::SpawnRoach()
{
	// if we already have enough roaches, dont spawn any
	if (RoachCount >= TargetRoachCount)
	{
		bSpawningRoaches = false;
		SetActorTickEnabled(false);
		return;
	}

	FTransform FT = GetRandomSpawnLocationAndRotation();

	AActor * NewRoach = World->SpawnActor<AActor>(RoachBP, FT);

	Roaches.Add(NewRoach);
	++RoachCount;

	// try to copulate if there is overlap
	TSet<AActor*> TempSet;
	NewRoach->GetOverlappingActors(TempSet, ARoach::StaticClass());

	if (TempSet.Num())
	{
		ARoach *AR = Cast<ARoach>(TempSet[FSetElementId::FromInteger(0)]);
		if (AR->CurrentCopulateState == CopulateState::STATE_NONE)
		{

			if (bCanCopulateOnSpawn && FMath::RandRange(CopulateMinChance, CopulateMaxChance) == 0)
			{
				AR->CurrentCopulateState = CopulateState::STATE_BEING_COPULATED;
				AR->CopulateMoveSpeedModifier = 0.1f;
				AR->CopulateRotateSpeedModifier = 0.1f;
				AR->CopulateAnimationSpeedModifier = 0.5f;
				AR->StartingLaziness = 7.f;
				//

				ARoach *AR2 = Cast<ARoach>(NewRoach);
				AR2->CurrentCopulateState = CopulateState::STATE_COPULATING;
				AR2->ChangeState(&ARoach::WaitState);
				AR2->PauseTimers();
				AR2->SetActorEnableCollision(false);
				AR2->UpdateAnimationSpeed(0.0f);
				AR2->AttachToActor(AR, FAttachmentTransformRules::SnapToTargetNotIncludingScale);
				AR2->SetActorRelativeRotation(FRotator(0.0f, 180.0f, 0.0f));
				AR2->SetActorRelativeLocation(FVector(-5.0f, 0.0f, 0.0f));
				AR2->StartCopulating();

				AR->MateRoach = AR2;
				AR2->MateRoach = AR;

				/*
				USphereComponent *s = Cast<USphereComponent>(AR->GetRootComponent());
				s->SetSphereRadius(4.0f, false);
				AR->Radius = 4.0f;
				TArray<USceneComponent*> TA;
				s->GetChildrenComponents(false, TA);
				for (auto sc : TA)
				{
					sc->AddRelativeLocation(FVector(2.0f, 0.0f, -2.0f));
				}
				*/
			}
		}
	}
	

	ARoach *NR = Cast<ARoach>(NewRoach);

	if (bFleeOnSpawn)
	{
		NR->Laziness = NR->GenerateLaziness();
		NR->StartingLaziness = NR->Laziness;
		NR->bFlee = true;
		NR->FleeLocation = GetActorLocation();
		NR->FleeFlockMinRate = FleeMinTimerRate;
		NR->FleeFlockMaxRate = FleeMaxTimerRate;
		NR->FleeWaitTimeModifier = FleeWaitTimeModifier;
		NR->FleeSpeedModifier = FleeSpeedModifier;
		NR->FleeLazinessModifier = FleeLazinessModifier;
		NR->StopFleeingDelayed(StopFleeDelayMin, StopFleeDelayMax);
		//probably should create this function in Roach so each roach can have a random delay
		
	}
	


	//NR->FleeFlockTimerRate = 0.08f;

	// randomly choose child BoxComponent, and spawn at random location within the box with random yaw rotation
	//FT.SetScale3D(FVector(1.0f, 1.0f, 1.0f));
/*
	const FVector AL = GetActorLocation();
	const FVector SV = FMath::VRand() * SweepLength;

	FHitResult HitResult;
	//bool bTrace = World->LineTraceSingleByChannel(HitResult, AL, AL + LV * 2000.f, ECollisionChannel::ECC_WorldStatic, TraceParams);

	bool bSweep = World->SweepSingleByChannel(HitResult, AL, AL + SV, AQ, ECollisionChannel::ECC_WorldDynamic, SweepSphere, QueryParams);

	
	if (bSweep)
	{
		const FVector N = HitResult.ImpactNormal;
		const FVector UV = GetActorUpVector();
		const FVector Axis = FVector::CrossProduct(N, UV).GetSafeNormal();

		const float Theta = acosf(FVector::DotProduct(N, UV));

		FQuat RotQuat = FQuat(-Axis, Theta);

		FQuat NewQuat = RotQuat * AQ;

		#define TWOPI 6.283185f

		float RandomAngle = FMath::FRand() * TWOPI;

		UE_LOG(LogTemp, Warning, TEXT("Random: %f"), RandomAngle);

		FVector Loc = HitResult.ImpactPoint + (N * SweepSphereRadius * 0.98f);

		FT.SetRotation(NewQuat);
		FT.SetLocation(Loc);

		//DrawDebugLine(World, HitResult.ImpactPoint, HitResult.ImpactPoint + N * SweepSphereRadius * 0.98f, FColor::Red, true);


		AActor * NewRoach = World->SpawnActor<AActor>(RoachBP, FT);

		const FQuat RoachQuat = NewRoach->GetActorQuat();
		const FVector RUV = NewRoach->GetActorUpVector();
		RotQuat = FQuat(RUV, RandomAngle);
		NewRoach->AddActorWorldRotation(RotQuat);

		++RoachCount;
	}
	*/
}

void ARoachSpawner::DeleteRoach()
{
	if (RoachCount <= TargetRoachCount)
	{
		bDeletingRoaches = false;
		SetActorTickEnabled(false);
		return;
	}
	Roaches.Pop()->Destroy();
	--RoachCount;
}

void ARoachSpawner::MoveRoach()
{
	for (int i = 0; i < NumRoachesMovePerFrame; ++i)
	{
		if (RoachesMoved < RoachesToMove && MoveRoachIndex < Roaches.Num())
		{
			ARoach *RoachToMove = Cast<ARoach>(Roaches[MoveRoachIndex]);
			const FTransform NewLocationAndRotation = GetRandomSpawnLocationAndRotation();
			//RoachToMove->SetActorLocationAndRotation(NewLocationAndRotation.GetLocation(), NewLocationAndRotation.GetRotation());
			RoachToMove->SetActorTransform(NewLocationAndRotation);
			RoachToMove->bMoveToGoal = false;
			++RoachesMoved;
			++MoveRoachIndex;

			// copied from SpawnRoach cuz faster than DRY

			// try to copulate if there is overlap
			TSet<AActor*> TempSet;
			RoachToMove->GetOverlappingActors(TempSet, ARoach::StaticClass());

			if (TempSet.Num())
			{
				ARoach *AR = Cast<ARoach>(TempSet[FSetElementId::FromInteger(0)]);
				if (AR->CurrentCopulateState == CopulateState::STATE_NONE)
				{

					if (bCanCopulateOnSpawn && FMath::RandRange(CopulateMinChance, CopulateMaxChance) == 0)
					{
						AR->CurrentCopulateState = CopulateState::STATE_BEING_COPULATED;
						AR->CopulateMoveSpeedModifier = 0.1f;
						AR->CopulateRotateSpeedModifier = 0.1f;
						AR->CopulateAnimationSpeedModifier = 0.2f;

						AR->StartingLaziness = 7.f;
						//

						ARoach *AR2 = Cast<ARoach>(RoachToMove);
						AR2->CurrentCopulateState = CopulateState::STATE_COPULATING;
						AR2->ChangeState(&ARoach::WaitState);
						AR2->PauseTimers();
						AR2->SetActorEnableCollision(false);
						AR2->UpdateAnimationSpeed(0.0f);
						AR2->AttachToActor(AR, FAttachmentTransformRules::SnapToTargetNotIncludingScale);
						AR2->SetActorRelativeRotation(FRotator(0.0f, 180.0f, 0.0f));
						AR2->SetActorRelativeLocation(FVector(-5.0f, 0.0f, 0.0f));
						
						AR->MateRoach = AR2;
						AR2->MateRoach = AR;

						/*
						USphereComponent *s = Cast<USphereComponent>(AR->GetRootComponent());
						s->SetSphereRadius(4.0f, false);
						AR->Radius = 4.0f;
						TArray<USceneComponent*> TA;
						s->GetChildrenComponents(false, TA);
						for (auto sc : TA)
						{
							sc->AddRelativeLocation(FVector(2.0f, 0.0f, -2.0f));
						}
						*/
					}
				}
			}

			//UE_LOG(LogTemp, Warning, TEXT("Roach Moved %d"), MoveRoachIndex - 1);
		}
		else
		{
			bMovingRoaches = false;
			SetActorTickEnabled(false);
			return;
		}
	}
}

void ARoachSpawner::StopRoachFlee()
{
	for (int i = 0; i < NumRoachesStoppedFleeingPerFrame; ++i)
	{
		if (RoachesStoppedFlee < RoachesToStopFlee && FleeRoachIndex < Roaches.Num())
		{
			ARoach *RoachToStopFlee = Cast<ARoach>(Roaches[FleeRoachIndex]);
			RoachToStopFlee->bFlee = false;
			RoachToStopFlee->FleeLazinessModifier = 1.0f;
			RoachToStopFlee->StartingLaziness = RoachToStopFlee->GenerateLaziness();
			if (RoachToStopFlee->CurrentCopulateState == CopulateState::STATE_BEING_COPULATED)
			{
				RoachToStopFlee->StartingLaziness = 8.f;
			}
			GetWorldTimerManager().PauseTimer(RoachToStopFlee->FleeFlockTimerHandle);
			RoachToStopFlee->FleeSpeedModifier = 1.0f;
			RoachToStopFlee->FleeWaitTimeModifier = 1.0f;
			//RoachToMove->bMoveToGoal = false;
			++RoachesStoppedFlee;
			++FleeRoachIndex;
			//UE_LOG(LogTemp, Warning, TEXT("Roach Moved %d"), MoveRoachIndex - 1);
		}
		else
		{
			bStoppingFlee = false;
			SetActorTickEnabled(false);
			return;
		}
	}
}

void ARoachSpawner::StopRoachesFleeing(int AmountToStop, int NumToStopPerFrame)
{
	RoachesStoppedFlee = 0;
	FleeRoachIndex = 0;
	RoachesToStopFlee = AmountToStop;
	NumRoachesStoppedFleeingPerFrame = NumToStopPerFrame;
	bStoppingFlee = true;
	SetActorTickEnabled(true);
}

FTransform ARoachSpawner::GetRandomSpawnLocationAndRotation()
{
	FTransform FT;

	int RandomIndex = FMath::RandRange(0, SpawnBoxNum - 1);
	UBoxComponent *SpawnBox = SpawnBoxes[RandomIndex];
	const FVector SBL = SpawnBox->GetComponentLocation();
	const FVector SBRV = SpawnBox->GetRightVector();
	const FVector SBFV = SpawnBox->GetForwardVector();
	const FQuat SBQ = SpawnBox->GetComponentQuat();
	// 2D radii dimensions of the box. NOT USING X
	const FVector Extent = SpawnBox->GetScaledBoxExtent();

	const float X = FMath::FRandRange(-Extent.Y, Extent.Y);
	const float Y = FMath::FRandRange(-Extent.Z, Extent.Z);

	const FVector Loc = SBL + (SpawnBox->GetRightVector() * X) + (SpawnBox->GetUpVector() * Y);

	#define TWOPI 6.283185f
	float RandomAngle = FMath::FRand() * TWOPI;
	FQuat RotQuat = FQuat(SBRV, HALF_PI);
	FQuat Rot = RotQuat * SBQ;
	RotQuat = FQuat(SBFV, RandomAngle);
	Rot = RotQuat * Rot;

	FT.SetLocation(Loc);
	FT.SetRotation(Rot);

	return FT;
}

void ARoachSpawner::DeleteRoaches(int NumberOfRoaches)
{
	if (NumberOfRoaches > RoachCount)
	{
		NumberOfRoaches = RoachCount;
	}
	TargetRoachCount = RoachCount - NumberOfRoaches;
	bDeletingRoaches = true;
	SetActorTickEnabled(true);
}

void ARoachSpawner::MoveRoaches(int AmountToMove, int NumToMovePerFrame)
{
	RoachesMoved = 0;
	MoveRoachIndex = 0;
	RoachesToMove = AmountToMove;
	NumRoachesMovePerFrame = NumToMovePerFrame;
	bMovingRoaches = true;
	SetActorTickEnabled(true);
}
