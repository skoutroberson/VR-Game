// Fill out your copyright notice in the Description page of Project Settings.

#include "BoxTrigger.h"
#include "Engine/TriggerBox.h"
#include "Engine/World.h"
#include "Stage1.h"
#include "Kismet/GameplayStatics.h"
#include "LightManager.h"
#include "Door.h"
#include "DrawDebugHelpers.h"


// Sets default values

AStage1::AStage1()
{
	PrimaryActorTick.bCanEverTick = false;

	AStage::FlagCount = 3;
	AStage::Flags.Init(false, AStage::FlagCount);
	
}

// Called when the game starts or when spawned
void AStage1::BeginPlay()
{
	Super::BeginPlay();

	TArray<AActor*> DoorActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ADoor::StaticClass(), DoorActors);
	for (auto Door : DoorActors)
	{
		UE_LOG(LogTemp, Warning, TEXT("%s"), *Door->GetName());
		if (Door->GetName() == TEXT("BP_Door_11"))
		{
			ADoor * TempDoor = Cast<ADoor>(Door);
			if (TempDoor != nullptr)
			{
				TheDoor = TempDoor;
			}
			else
			{
				UE_LOG(LogTemp, Warning, TEXT("Stage1 Door cast didn't work!"));
			}
		}
	}
	
}

