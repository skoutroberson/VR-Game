// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Grabbable.h"
#include "Ball.generated.h"

/**
 * 
 */
UCLASS()
class ARCHITECTUREEXPLORER_API ABall : public AGrabbable
{
	GENERATED_BODY()

public:
	ABall();

	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	bool bBeingFetched = false;

	virtual void Gripped(int HandHoldNum);
	virtual void Released(int HandHoldNum);

	// contains previous hand controller velocities (5 max) for ControllingMC
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	TArray<FVector> HCVelocities;

	TQueue<FVector> VelocitiesQueue;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	FVector AverageHCVelocity = FVector::ZeroVector;

	FTimerHandle AverageVelocityHandle;

	// updates HCVelocities and AverageHCVelocity on the timer: AverageVelocityHandle
	void UpdateAverageVelocity();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float VelocityTimerRate = 0.1f;
};
