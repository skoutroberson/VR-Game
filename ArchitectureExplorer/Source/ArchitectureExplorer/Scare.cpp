// Fill out your copyright notice in the Description page of Project Settings.


#include "Scare.h"

// Sets default values
AScare::AScare()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AScare::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AScare::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AScare::StartScare_Implementation()
{
	StartScareInternal();
}

void AScare::EndScare_Implementation()
{
	EndScareInternal();
}