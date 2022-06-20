// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include <vector>
#include "Stage.h"
#include "BoxTrigger.h"
#include "Door.h"
#include "StageManager.generated.h"

using namespace std;

UENUM(BlueprintType)
enum class EStageNum : uint8
{
	STAGE_1			UMETA(DisplayName = "Stage1"),
	STAGE_2			UMETA(DisplayName = "Stage2"),
	STAGE_3			UMETA(DisplayName = "Stage3"),
};

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
		vector<EStageNum> NextStageEnums;
	};

	StageNode * StageNode1 = nullptr;	// Root
	StageNode * StageNode2 = nullptr;
	StageNode * StageNode3 = nullptr;

	StageNode * CurrentNode = nullptr;

	AActor * CurrentStageActor = nullptr;

	float test = 0;

public:

	UPROPERTY(BlueprintReadWrite)
	AStage * CurrentStage = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	EStageNum CurrentStageNum;

	void InitializeStageNodes();

	UFUNCTION(BlueprintCallable)
	bool CurrentStageCompleted();


private:

	void TESTLIGHTFUNCTION();

	class UWorld *World = nullptr;

};
