// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include <vector>
#include "Components/BoxComponent.h"
#include "TriggerManager.h"
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
	virtual void BeginPlay();
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason);


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// stage num for debugging. Uninitialized is 0.
	UPROPERTY(VisibleAnywhere)
	int StageNum = 0;

	// called when the stage starts
	UFUNCTION(BlueprintCallable)
	void BeginStage();

	// called when the stage ends
	UFUNCTION(BlueprintCallable)
	void EndStage();

	// called if the player starts another loop but hasn't completed the current stage
	UFUNCTION(BlueprintCallable)
	void ResetStage();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bCompleted = false;


};
