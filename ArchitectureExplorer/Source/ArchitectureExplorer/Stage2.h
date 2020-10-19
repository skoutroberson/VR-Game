// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Stage.h"
#include "Stage2.generated.h"

using namespace std;

/**
 * 
 */
UCLASS()
class ARCHITECTUREEXPLORER_API AStage2 : public AStage
{
	GENERATED_BODY()

public:
	AStage2();
	~AStage2();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	UBoxComponent* Trigger0 = nullptr;

private:
	// overloads
	virtual void BOTrigger0() override;

	virtual void AddTriggerDelegates() override;
	virtual void RemoveTriggerDelegates() override;
	
};
