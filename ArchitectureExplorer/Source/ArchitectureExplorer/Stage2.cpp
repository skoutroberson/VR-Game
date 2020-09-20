// Fill out your copyright notice in the Description page of Project Settings.


#include "Stage2.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"
#include "LightManager.h"


AStage2::AStage2()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AStage2::BeginPlay()
{
	AActor * LM = UGameplayStatics::GetActorOfClass(GetWorld(), ALightManager::StaticClass());
	ALightManager * LMClass = Cast<ALightManager>(LM);

	if (LMClass != nullptr)
	{
		LMClass->SetEmmissive(0, 0);
	}
}

bool AStage2::Flag0Check()
{
	return false;
}

void AStage2::PrintTest()
{
	UE_LOG(LogTemp, Warning, TEXT("Stage 2"));
}
