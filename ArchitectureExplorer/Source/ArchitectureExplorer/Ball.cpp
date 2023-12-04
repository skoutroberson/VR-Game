// Fill out your copyright notice in the Description page of Project Settings.


#include "Ball.h"
#include "HandController.h"
#include "DrawDebugHelpers.h"

ABall::ABall()
{
	AGrabbable::ValidOneHandHandHolds.SetNum(1);
	AGrabbable::ValidOneHandHandHolds.Insert(1, 0);
}

void ABall::BeginPlay()
{
	Super::BeginPlay();
	

}

void ABall::Gripped(int HandHoldNum)
{
	Super::Gripped(HandHoldNum);

	// set track movement vector timer
	GetWorldTimerManager().SetTimer(AverageVelocityHandle, this, &ABall::UpdateAverageVelocity, VelocityTimerRate, true, VelocityTimerRate);
}

void ABall::Released(int HandHoldNum)
{
	Super::Released(HandHoldNum);

	//
	//UpdateAverageVelocity();
	Mesh->AddImpulse(AverageHCVelocity * 80.f, NAME_None, true);
	HCVelocities.Empty();
	AverageHCVelocity = FVector::ZeroVector;
	GetWorldTimerManager().PauseTimer(AverageVelocityHandle);
}

void ABall::UpdateAverageVelocity()
{
	if (HCVelocities.Num() < 4)
	{
		HCVelocities.Push(ControllingHandController->HandControllerVelocity);
	}
	else
	{
		HCVelocities.Pop();
		HCVelocities.Insert(ControllingHandController->HandControllerVelocity, 0);
	}

	AverageHCVelocity = FVector::ZeroVector;
	int Num = HCVelocities.Num();
	for (int i = 0; i < Num; i++)
	{
		AverageHCVelocity += HCVelocities[i];
	}
	AverageHCVelocity /= Num;

	// debug draw
	//const FVector AL = GetActorLocation();
	//DrawDebugLine(GetWorld(), AL, AL + AverageHCVelocity * 30.f, FColor::Green, false, 0.1f);
	//DrawDebugPoint(World, AL + AverageHCVelocity * 30.f, 10.f, FColor::Magenta, false, 0.1f);
}
