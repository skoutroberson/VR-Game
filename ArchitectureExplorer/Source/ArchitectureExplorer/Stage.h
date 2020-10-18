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
	virtual void BeginPlay() override;

	virtual void PrintTest();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Function pointer for a function that returns a bool and takes 0 arguments - For the flag checks
	typedef bool (AStage::*FunctionPtrType)(void);
	// vector holding the boolean functions that check if the player has completed a flag for this stage
	vector<FunctionPtrType> FlagChecks;
	///////////////////////////////////////////////////////////////////
	///////////////////////////////////////////////////////////////////

	//	This is the real stuff I'll need for stages

public:
	
	// I think I can make these variables static but they can't be static if I want to see them in editor/blueprints

	UPROPERTY(VisibleAnywhere, Category = "Flags")
	TArray<bool> Flags;
	//bool Flags[16];

	UPROPERTY(VisibleAnywhere, Category = "Flags")
	int FlagCount = 0;

protected:
	
	ATriggerManager * TriggerManager = nullptr;

	UFUNCTION()
	void BeginOverlapTrigger0(class UPrimitiveComponent* FirstComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult);
	void EndOverlapTrigger0();
	virtual void BOTrigger0();
	virtual void EOTrigger0();

};
