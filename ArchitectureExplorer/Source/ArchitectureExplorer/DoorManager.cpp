// Fill out your copyright notice in the Description page of Project Settings.


#include "DoorManager.h"
#include "Engine/World.h"
#include "Door.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ADoorManager::ADoorManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADoorManager::BeginPlay()
{
	Super::BeginPlay();
	
	FillDoorsMap();

}

void ADoorManager::FillDoorsMap()
{
	TArray<AActor*> DoorActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ADoor::StaticClass(), DoorActors);

	for (auto Actor : DoorActors)
	{
		ADoor * ThisDoor = Cast<ADoor>(Actor);
		if (ThisDoor != nullptr)
		{
			DoorsMap.Add(Actor->GetName(), ThisDoor);
		}
	}

	UE_LOG(LogTemp, Warning, TEXT("DoorsMap Size: %d"), DoorsMap.Num());

}