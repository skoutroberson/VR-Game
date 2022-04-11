// Fill out your copyright notice in the Description page of Project Settings.


#include "Drawer.h"

// Sets default values
ADrawer::ADrawer()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADrawer::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADrawer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (bBeingGrabbed)
	{
		UseDrawer(DeltaTime);
	}

}

void ADrawer::UseDrawer(float DeltaTime)
{
	FVector NewHCLocation = HandController->GetActorLocation();
	FVector HCDisp = NewHCLocation - LastHCLocation;


	// move drawer and stuff

	LastHCLocation = NewHCLocation;
}

void ADrawer::GrabDrawer(AActor * HC)
{
	HandController = HC;
	bBeingGrabbed = true;
	LastHCLocation = HC->GetActorLocation();
}

void ADrawer::ReleaseDrawer()
{
	HandController = nullptr;
	bBeingGrabbed = false;
}