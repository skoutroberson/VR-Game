// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Stage.h"
#include <vector>
#include "Stage1.generated.h"

using namespace std;

/**
 * 
 */
UCLASS()
class ARCHITECTUREEXPLORER_API AStage1 : public AStage
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AStage1();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	//virtual void Tick(float DeltaTime) override;

	// bool for determining if the player has completed this stage
	//bool bIsCompleted = false;

protected:

	// function for changing bIsCompleted to true if all of the flags are true
	//virtual void IsCompleted() override;

	virtual bool Flag0Check() override;
	virtual bool Flag1Check() override;
	virtual bool Flag2Check() override;

	// Function pointer for a function that returns a bool and takes 0 arguments
	//typedef bool (AStage1::*FunctionPtrType)(void);
	// vector holding the boolean functions that check if the player has completed a flag for this stage
	//vector<FunctionPtrType> FlagChecks;
};
