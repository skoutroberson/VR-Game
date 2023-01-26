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
	if (RoachCount == 0)
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
