// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Stage.h"
#include <vector>
#include "Engine/World.h"
#include "Door.h"
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
	~AStage1();

	UFUNCTION(BlueprintCallable)
	virtual void NewLoop() override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

	class APhone * Phone = nullptr;
};
