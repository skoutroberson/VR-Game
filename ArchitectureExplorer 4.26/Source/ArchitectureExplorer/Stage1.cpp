// Fill out your copyright notice in the Description page of Project Settings.

#include "Stage1.h"
#include "BoxTrigger.h"
#include "Engine/TriggerBox.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"
#include "LightManager.h"
#include "Door.h"
#include "DrawDebugHelpers.h"


// Sets default values

AStage1::AStage1()
{
	PrimaryActorTick.bCanEverTick = false;

	AStage::FlagCount = 1;
	AStage::Flags.Init(false, AStage::FlagCount);
}

AStage1::~AStage1()
{
	//RemoveTriggerDelegates();
}

// Called when the game starts or when spawned
void AStage1::BeginPlay()
{
	Super::BeginPlay();

	Trigger0 = AStage::TriggerManager->Triggers[0];
	Trigger0->SetGenerateOverlapEvents(true);

	AddTriggerDelegates();

	UE_LOG(LogTemp, Warning, TEXT("Stage1 BeginPlay()"));
	
}

void AStage1::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);

	RemoveTriggerDelegates();
}

void AStage1::BOTrigger0()
{
	UE_LOG(LogTemp, Warning, TEXT("Stage1 Trigger 0 Begin Overlap!"));
	AStage::Flags[0] = true;
	Trigger0->SetGenerateOverlapEvents(false);
}

void AStage1::AddTriggerDelegates()
{
	Trigger0->OnComponentBeginOverlap.AddDynamic(this, &AStage::BeginOverlapTrigger0);
}

void AStage1::RemoveTriggerDelegates()
{
	Trigger0->OnComponentBeginOverlap.RemoveDynamic(this, &AStage::BeginOverlapTrigger0);
}