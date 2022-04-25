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

	Handle = Cast<USphereComponent>(GetComponentByClass(USphereComponent::StaticClass()));
	
	FV = GetActorForwardVector();
	ClosedPosition = GetActorLocation() - (FV * 0.1f);
	OpenPosition = GetActorLocation() + (FV * MaxSlideSize * 0.9f);
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
	AL.Z = 0;
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
	LastHCLocation = HCL;

	FVector Disp;

	if (bFullyOpen)
	{
		Disp = OpenPosition - HCL;
	}
	else // bFullyClosed = true
	{
		Disp = HCL - ClosedPosition;
	}
	const float Dot = FVector::DotProduct(Disp, FV);

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
	bFullyClosed = false;
	bFullyOpen = false;
}

void ADrawer::ReleaseDrawer()
{
	HandController = nullptr;
	bBeingGrabbed = false;
}