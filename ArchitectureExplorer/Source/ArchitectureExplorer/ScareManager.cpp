// Fill out your copyright notice in the Description page of Project Settings.


#include "ScareManager.h"

// Sets default values
AScareManager::AScareManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void AScareManager::BeginPlay()
{
	Super::BeginPlay();

	StartScare1();
	
}

// Called every frame
void AScareManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

