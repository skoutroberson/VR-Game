// Fill out your copyright notice in the Description page of Project Settings.


#include "RoachSpawner.h"

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
}

// Called every frame
void ARoachSpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (bSpawningRoaches)
	{
		SpawnRoach();
	}
}

void ARoachSpawner::SpawnRoaches(int NumberOfRoaches)
{
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

	// random line trace until hit
	// get normal of hit

	FTransform FT;
}