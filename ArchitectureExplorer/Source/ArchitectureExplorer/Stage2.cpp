// Fill out your copyright notice in the Description page of Project Settings.


#include "Stage2.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"
#include "LightManager.h"


AStage2::AStage2()
{
	PrimaryActorTick.bCanEverTick = false;

	AStage::FlagCount = 2;
	AStage::Flags.Init(false, FlagCount);
}

AStage2::~AStage2()
{
	//RemoveTriggerDelegates();
}

void AStage2::BeginPlay()
{
	Super::BeginPlay();

	AActor * LM = UGameplayStatics::GetActorOfClass(GetWorld(), ALightManager::StaticClass());
	ALightManager * LightManager = Cast<ALightManager>(LM);

	if (LightManager != nullptr)
	{
		//LMClass->SetEmmissive(0, 0);
		FString LN = "BP_Lamp1_2";
		LightManager->TurnOff(LN);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("LightManager cast failed in Stage2"));
	}

	UE_LOG(LogTemp, Warning, TEXT("Stage 2 beginplay"));
	Trigger0 = TriggerManager->Triggers[0];
	Trigger0->SetGenerateOverlapEvents(true);

	AddTriggerDelegates();
}

void AStage2::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);

	RemoveTriggerDelegates();
}

void AStage2::BOTrigger0()
{
	UE_LOG(LogTemp, Warning, TEXT("Stage2 trigger"));
	AStage::Flags[0] = true;
	Trigger0->SetGenerateOverlapEvents(false);
}

void AStage2::AddTriggerDelegates()
{
	Trigger0->OnComponentBeginOverlap.AddDynamic(this, &AStage::BeginOverlapTrigger0);
}

void AStage2::RemoveTriggerDelegates()
{
	Trigger0->OnComponentBeginOverlap.RemoveDynamic(this, &AStage::BeginOverlapTrigger0);
}
