// Fill out your copyright notice in the Description page of Project Settings.


#include "Stage2.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"
#include "LightManager.h"


AStage2::AStage2()
{
	PrimaryActorTick.bCanEverTick = false;
}

void AStage2::BeginPlay()
{
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
}
