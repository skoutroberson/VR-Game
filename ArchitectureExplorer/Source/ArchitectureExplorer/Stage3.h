// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Stage.h"
#include "Stage3.generated.h"

/**
 * 
 */
UCLASS()
class ARCHITECTUREEXPLORER_API AStage3 : public AStage
{
	GENERATED_BODY()

public:
	AStage3();
	~AStage3();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void AddTriggerDelegates() override;
	virtual void RemoveTriggerDelegates() override;
};
