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

ADoor * ADoorManager::GetDoor(FString Name)
{
	if (DoorsMap.Contains(Name))
	{
		return DoorsMap[Name];
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("DoorsMap does not contain the key: %s"), *Name);
		return nullptr;
	}
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
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("ThisDoor cast failed in FillDoorsmap()"));
		}
	}

	//UE_LOG(LogTemp, Warning, TEXT("DoorsMap Size: %d"), DoorsMap.GetAllocatedSize());

}