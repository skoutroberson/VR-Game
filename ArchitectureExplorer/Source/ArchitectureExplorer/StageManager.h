// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include <vector>
#include "Stage1.h"
#include "StageManager.generated.h"

using namespace std;

UCLASS()
class ARCHITECTUREEXPLORER_API AStageManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AStageManager();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	AActor * CurrentStage;

	vector<TSubclassOf<AStage>> Stages; 

};