// Fill out your copyright notice in the Description page of Project Settings.


#include "TriggerManager.h"
#include "VRCharacter.h"

// Sets default values
ATriggerManager::ATriggerManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	Triggers.Init(nullptr, TriggerCount);

	for (int i = 0; i < TriggerCount; i++)
	{
		//UBoxComponent * BC = NewObject<UBoxComponent>(UBoxComponent::StaticClass());
		FString BCName = FString(TEXT("Trigger"));
		BCName.Append(FString::FromInt(i));
		UBoxComponent * BC = CreateDefaultSubobject<UBoxComponent>(*BCName);
		Triggers[i] = BC;
		Triggers[i]->SetCollisionProfileName(TEXT("PlayerTrigger"));
		Triggers[i]->SetGenerateOverlapEvents(false);
	}
}

// Called when the game starts or when spawned
void ATriggerManager::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATriggerManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

