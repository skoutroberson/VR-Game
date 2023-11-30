// Fill out your copyright notice in the Description page of Project Settings.


#include "BloodStainManager.h"

// Sets default values
ABloodStainManager::ABloodStainManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABloodStainManager::BeginPlay()
{
	Super::BeginPlay();

	SetActorTickEnabled(false);
	
}

// Called every frame
void ABloodStainManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (bDestroyingBloodStains)
	{
		DestroyStain();
	}
}

