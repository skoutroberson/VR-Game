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
	StageNum = 1;
}

AStage1::~AStage1()
{
	//RemoveTriggerDelegates();
}

void AStage1::NewLoop()
{
	UE_LOG(LogTemp, Warning, TEXT("New Loop POOPYDOOPY"));
}

// Called when the game starts or when spawned
void AStage1::BeginPlay()
{
	Super::BeginPlay();

	UE_LOG(LogTemp, Warning, TEXT("Stage1 BeginPlay()"));

	bCompleted = true;

	//	Have a reference to LightManager exist in StageManager, not every stage?
	
	//ALightManager * LM = Cast<ALightManager>(UGameplayStatics::GetActorOfClass(GetWorld(), ALightManager::StaticClass()));
	//LM->TurnOn(FString("BP_Lamp1"), 1.6f, 25.f);
	//LM->TurnOn(FString("BP_Lamp2"), 1.6f, 25.f);
	//LM->TurnOn(FString("BP_Radio_2"), 1.f, 10.f);

	//Phone = Cast<APhone>(UGameplayStatics::GetActorOfClass(GetWorld(), APhone::StaticClass()));
	//Phone->CallPhone();
}

void AStage1::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);

}