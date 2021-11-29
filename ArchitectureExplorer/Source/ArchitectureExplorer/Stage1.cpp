// Fill out your copyright notice in the Description page of Project Settings.

#include "Stage1.h"
#include "BoxTrigger.h"
#include "Engine/TriggerBox.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"
#include "LightManager.h"
#include "Door.h"
#include "DrawDebugHelpers.h"
#include "Phone.h"
#include "Radio.h"


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

	//	Have a reference to LightManager exist in StageManager, not every stage?
	
	ALightManager * LM = Cast<ALightManager>(UGameplayStatics::GetActorOfClass(GetWorld(), ALightManager::StaticClass()));
	LM->TurnOn(FString("BP_Lamp1"), 1.6f, 25.f);
	LM->TurnOn(FString("BP_Lamp2"), 1.6f, 25.f);
	LM->TurnOn(FString("BP_Radio_2"), 1.f, 10.f);

	Phone = Cast<APhone>(UGameplayStatics::GetActorOfClass(GetWorld(), APhone::StaticClass()));
	//Phone->CallPhone();
}

void AStage1::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);

	UE_LOG(LogTemp, Warning, TEXT("Stage1 Endplay()"));
	RemoveTriggerDelegates();
}

void AStage1::BOTrigger0()
{
	UE_LOG(LogTemp, Warning, TEXT("Stage1 Trigger 0 Begin Overlap!"));
	//AStage::Flags[0] = true;
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