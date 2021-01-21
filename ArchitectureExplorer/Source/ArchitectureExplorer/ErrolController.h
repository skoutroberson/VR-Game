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
	UPROPERTY()
		TArray<AActor*> Waypoints;

	UFUNCTION()
		ATargetPoint* GetRandomWaypoint();

	UFUNCTION()
		void GoToRandomWaypoint();
};
