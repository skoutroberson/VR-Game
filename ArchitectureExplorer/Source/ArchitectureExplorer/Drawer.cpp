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
	
	FV = GetActorForwardVector();
	ClosedPosition = GetActorLocation();
}

// Called every frame
void ADrawer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (bBeingGrabbed)
	{
		UE_LOG(LogTemp, Warning, TEXT("Grabbing Drawer"));
		UseDrawer(DeltaTime);
	}

}

void ADrawer::UseDrawer(float DeltaTime)
{
	FVector AL = GetActorLocation();
	FVector NewHCLocation = HandController->GetActorLocation();
	FVector HCDisp = NewHCLocation - LastHCLocation;
	const float DispSize = HCDisp.Size();
	HCDisp = HCDisp.GetSafeNormal();
	const float Dot = FVector::DotProduct(HCDisp, FV);
	float MoveAmount = DispSize * Dot;
	FVector NewLocation = AL + (FV * MoveAmount);
	float SlideSize = (ClosedPosition - NewLocation).Size();

	SetActorLocation(NewLocation);
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