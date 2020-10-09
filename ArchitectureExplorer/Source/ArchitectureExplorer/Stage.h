// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include <vector>
#include "Components/BoxComponent.h"
#include "Stage.generated.h"

using namespace std;

UCLASS()
class ARCHITECTUREEXPLORER_API AStage : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AStage();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void PrintTest();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	bool bIsCompleted = false;

protected:
	virtual void IsCompleted();

	virtual bool Flag0Check();
	virtual bool Flag1Check();
	virtual bool Flag2Check();
	virtual bool Flag3Check();
	virtual bool Flag4Check();
	virtual bool Flag5Check();
	virtual bool Flag6Check();
	virtual bool Flag7Check();
	virtual bool Flag8Check();
	virtual bool Flag9Check();

	// Function pointer for a function that returns a bool and takes 0 arguments - For the flag checks
	typedef bool (AStage::*FunctionPtrType)(void);
	// vector holding the boolean functions that check if the player has completed a flag for this stage
	vector<FunctionPtrType> FlagChecks;

public:
	bool StageFlags[10];


};
