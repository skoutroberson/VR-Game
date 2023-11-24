// Fill out your copyright notice in the Description page of Project Settings.


#include "RevealDecal.h"
#include "Engine/World.h"
#include "Components/DecalComponent.h"
#include "DrawDebugHelpers.h"
#include "Flashlight.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ARevealDecal::ARevealDecal()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ARevealDecal::BeginPlay()
{
	Super::BeginPlay();
	
	World = GetWorld();

	DecalComponent = Cast<UDecalComponent>(GetComponentByClass(UDecalComponent::StaticClass()));

	Flashlight = UGameplayStatics::GetActorOfClass(World, AFlashlight::StaticClass());
	FLC = Cast<USceneComponent>(Flashlight->GetComponentsByTag(UStaticMeshComponent::StaticClass(), FName("Volumetric"))[0]);
	
	InitializeCornerLocations();
}

// Called every frame
void ARevealDecal::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

bool ARevealDecal::FlashlightLineOfSight(int LOSTraces)
{
	FHitResult HitResult;
	const FVector FLL = FLC->GetComponentLocation();
	const FVector AL = GetActorLocation();

	// if there is LOS to the center of the decal, then return true
	bool bTrace = World->LineTraceSingleByChannel(HitResult, FLL, AL, ECollisionChannel::ECC_WorldDynamic, LOSParams);
	if (bTrace)
	{
		const float DistSquared = FVector::DistSquared(HitResult.ImpactPoint, AL);
		if (DistSquared < 140.f)
		{
			return true;
		}
	}
	else
	{
		return true;
	}

	// check LOS for each corner of decal collision. If we hit > LOSTraces corners, then return true
	int HitTraces = 0;

	for (int i = 0; i < 4; i++)
	{
		bTrace = World->LineTraceSingleByChannel(HitResult, FLL, CornerLocations[i], ECollisionChannel::ECC_WorldDynamic, LOSParams);
		if (bTrace)
		{
			//UE_LOG(LogTemp, Warning, TEXT("Trace: %s"), *HitResult.GetActor()->GetName())
			const float DistSquared = FVector::DistSquared(HitResult.ImpactPoint, CornerLocations[i]);
			if (DistSquared < 380.f)
			{
				++HitTraces;
			}
		}
		else
		{
			++HitTraces;
		}

		if (HitTraces >= LOSTraces)
		{
			return true;
		}
		else if ((4 - i) + HitTraces < LOSTraces)
		{
			return false;
		}
	}

	return false;
}

void ARevealDecal::InitializeCornerLocations()
{
	const FVector AL = GetActorLocation();
	const FVector UV = GetActorUpVector();
	const FVector RV = GetActorRightVector();
	const FVector DecalExtent = DecalComponent->DecalSize * DecalComponent->GetComponentScale() * 0.5f;
	Corner1 = AL - RV * DecalExtent.Y + UV * DecalExtent.Z;
	Corner2 = AL + RV * DecalExtent.Y + UV * DecalExtent.Z;
	Corner3 = AL - RV * DecalExtent.Y - UV * DecalExtent.Z;
	Corner4 = AL + RV * DecalExtent.Y - UV * DecalExtent.Z;
	CornerLocations.Add(Corner1);
	CornerLocations.Add(Corner2);
	CornerLocations.Add(Corner3);
	CornerLocations.Add(Corner4);
	//UE_LOG(LogTemp, Warning, TEXT("Decal Size: %f %f %f"), DecalComponent->DecalSize.X, DecalComponent->DecalSize.Y, DecalComponent->DecalSize.Z);
	//UE_LOG(LogTemp, Warning, TEXT("Decal Scale: %f %f %f"), DecalComponent->GetComponentScale().X, DecalComponent->GetComponentScale().Y, DecalComponent->GetComponentScale().Z);
	//DrawDebugSphere(World, Corner1, 10.f, 10, FColor::Red, true);
	//DrawDebugSphere(World, Corner2, 10.f, 10, FColor::Red, true);
	//DrawDebugSphere(World, Corner3, 10.f, 10, FColor::Red, true);
	//DrawDebugSphere(World, Corner4, 10.f, 10, FColor::Red, true);
}