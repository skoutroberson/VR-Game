// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include <vector>
#include "Stage1.h"
#include "BoxTrigger.h"
#include "Door.h"
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

	//AActor * CurrentStage;
	//vector<TSubclassOf<AStage>> Stages;

	struct StageNode
	{
		TSubclassOf<AStage> StageClass;
		vector<StageNode*> NextStage;
	};

	StageNode * StageNode1 = nullptr;	// Root
	StageNode * StageNode2 = nullptr;
	StageNode * StageNode3 = nullptr;

	StageNode * CurrentNode = nullptr;
	AActor * CurrentStageActor = nullptr;


	void InitializeStageNodes();

	void TESTLIGHTFUNCTION();

	bool CurrentStageCompleted();

	UPROPERTY(VisibleAnywhere)
		UBoxComponent * StartDoorTrigger;
	UPROPERTY(VisibleAnywhere)
		UBoxComponent * EndDoorTrigger;

	ADoor * StartDoor = nullptr;
	ADoor * EndDoor = nullptr;

	UFUNCTION()
		void BeginOverlapStartDoorTrigger(class UPrimitiveComponent* FirstComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult);

	UFUNCTION()
		void BeginOverlapEndDoorTrigger(class UPrimitiveComponent* FirstComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult);

private:
	// Initializers

	void InitializeDoorTriggers();
	void InitializeStartEndDoors();

};
