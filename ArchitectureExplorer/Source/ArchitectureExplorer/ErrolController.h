// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "Runtime/Engine/Classes/Engine/TargetPoint.h"
#include "ErrolController.generated.h"

/**
 * 
 */
UCLASS()
class ARCHITECTUREEXPLORER_API AErrolController : public AAIController
{
	GENERATED_BODY()

private:
	class AErrolCharacter * ErrolCharacter;

	UPROPERTY()
		TArray<AActor*> Waypoints;

	UFUNCTION()
		ATargetPoint* GetRandomWaypoint();

	UFUNCTION()
		void GoToRandomWaypoint();

public:
		//virtual void OnMoveCompleted(FAIRequestID RequestID, const FPathFollowingResult& Result) override;
		virtual void OnMoveCompleted(FAIRequestID RequestID, const FPathFollowingResult& Result) override;

		FTimerHandle LookAroundTimerHandle;
		void InitializeLookAroundTimer();
		void StopLookAroundTimer();

	UFUNCTION()
		void LookAroundTimerCompleted();
		float LookAroundTimerRate = 0;
		void SetLookAroundTimerRate(float Rate);
};
