// Fill out your copyright notice in the Description page of Project Settings.


#include "Stage2.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"
#include "LightManager.h"


AStage2::AStage2()
{
	PrimaryActorTick.bCanEverTick = false;
	StageNum = 2;
}

AStage2::~AStage2()
{
	//RemoveTriggerDelegates();
}

void AStage2::BeginPlay()
{
	Super::BeginPlay();

	UE_LOG(LogTemp, Warning, TEXT("Stage 2 beginplay"));
	bCompleted = true;
}

void AStage2::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);

}
