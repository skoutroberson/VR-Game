// Fill out your copyright notice in the Description page of Project Settings.

#include "BoxTrigger.h"
#include "Engine/TriggerBox.h"
#include "Engine/World.h"
#include "Stage1.h"


// Sets default values

AStage1::AStage1()
{
	
}

// Called when the game starts or when spawned
void AStage1::BeginPlay()
{
	Super::BeginPlay();

	SetupFlag0();
}

bool AStage1::Flag0Check()
{
	//UE_LOG(LogTemp, Warning, TEXT("000000000FUNCTION PONITER WORKS!! LLOLOLOL"));

	//	If player listens to full answering machine / radio message.
	return false;
	
}

bool AStage1::Flag1Check()
{
	//UE_LOG(LogTemp, Warning, TEXT("1111111111FUNCTION PONITER WORKS!! LLOLOLOL"));

	if (Trigger1->bTriggered)
	{
		GetWorld()->DestroyActor(Trigger1);
		return true;
	}

	return false;
}

void AStage1::SetupFlag0()
{
	Trigger1 = GetWorld()->SpawnActor<ABoxTrigger>(ABoxTrigger::StaticClass());
	Trigger1->SetActorLocation(FVector(0, 0, 0));
}

