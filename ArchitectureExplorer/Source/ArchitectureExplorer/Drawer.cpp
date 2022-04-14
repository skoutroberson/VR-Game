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
	OpenPosition = GetActorLocation() + FV;
}

// Called every frame
void ADrawer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (bBeingGrabbed)
	{
		if (bFullyClosed || bFullyOpen)
		{
			FullyOpenClosedChecker();
		}
		else
		{
			UseDrawer(DeltaTime);
		}
		UE_LOG(LogTemp, Warning, TEXT("Grabbing Drawer"));
	}

}

void ADrawer::UseDrawer(float DeltaTime)
{
	/**
	If HandController distance to the handhold is greater than...
	I don't think I need to do ^ actually
	*/
	

	//FV = GetActorForwardVector();
	FVector AL = GetActorLocation();
	FVector NewHCLocation = HandController->GetActorLocation();
	FVector HCDisp = NewHCLocation - LastHCLocation;
	const float DispSize = HCDisp.Size();
	HCDisp = HCDisp.GetSafeNormal();
	float Dot = FVector::DotProduct(HCDisp, FV);
	float MoveAmount = DispSize * Dot;
	FVector NewLocation = AL + (FV * MoveAmount);
	float SlideSize = (ClosedPosition - NewLocation).Size();
	
	// fully open correction
	if (SlideSize > MaxSlideSize)
	{
		bFullyOpen = true;
		NewLocation = OpenPosition;
	}
	
	// fully closed correction
	FVector Disp = NewLocation - ClosedPosition;
	Dot = FVector::DotProduct(Disp, FV);
	if (Dot <= 0)
	{
		bFullyClosed = true;
		NewLocation = ClosedPosition;
	}
	
	SetActorLocation(NewLocation);
	// move drawer and stuff

	LastHCLocation = NewHCLocation;
}

void ADrawer::FullyOpenClosedChecker()
{
	const FVector HCL = HandController->GetActorLocation();
	FVector Disp;

	if (bFullyOpen)
	{
		Disp = OpenPosition - HCL;
	}
	else // bFullyClosed = true
	{
		Disp = HCL - ClosedPosition;
	}
	float Dot = FVector::DotProduct(Disp, FV);

	if (Dot > 0)
	{
		bFullyClosed = false;
		bFullyOpen = false;
	}

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