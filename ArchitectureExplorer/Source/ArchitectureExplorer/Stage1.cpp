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
	PrimaryActorTick.bCanEverTick = true;
	
}

// Called when the game starts or when spawned
void AStage1::BeginPlay()
{
	Super::BeginPlay();

	SetupFlag1();

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

	
	
	//AStage::StartDoorTrigger->SetActorLocation(FVector(-500, 0, 0));
	
}

bool AStage1::Flag0Check()
{
	//UE_LOG(LogTemp, Warning, TEXT("000000000FUNCTION PONITER WORKS!! LLOLOLOL"));

	//	If player listens to full answering machine / radio message.
	return false;
	
}

bool AStage1::Flag1Check()
{
	if (Trigger1->bTriggered)
	{
		TheDoor->bCloseDoorFast = true;
		GetWorld()->DestroyActor(Trigger1);
		return true;
	}

	return false;
}

void AStage1::PrintTest()
{
	UE_LOG(LogTemp, Warning, TEXT("Stage 1"));
}

void AStage1::SetupFlag1()
{
	Trigger1 = GetWorld()->SpawnActor<ABoxTrigger>(ABoxTrigger::StaticClass());
	Trigger1->SetActorLocation(FVector(0, 0, 0));
}

void AStage1::Reset()
{
	//play radio again
}

