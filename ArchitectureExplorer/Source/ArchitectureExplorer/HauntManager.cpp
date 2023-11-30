// Fill out your copyright notice in the Description page of Project Settings.


#include "HauntManager.h"

// Sets default values
AHauntManager::AHauntManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AHauntManager::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AHauntManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	switch (State)
	{
	case HauntManagerState::STATE_TIMER:
		HauntTimer += DeltaTime;
		if (HauntTimer > HauntTime)
		{
			StartHaunt();
			State = HauntManagerState::STATE_HAUNTING;
			HauntTimer = 0.0f;
			HauntTime = FMath::RandRange(MinHauntTime, MaxHauntTime);
		}
		break;
	case HauntManagerState::STATE_HAUNTING:
		HauntTimer += DeltaTime;
		if (HauntTimer > HauntTime)
		{
			StartHaunting(HauntLevel, MinHauntTime, MaxHauntTime);
		}
		break;
	}

}

void AHauntManager::StartHaunting(int HauntLevel, float MinTime, float MaxTime)
{
	HauntTimer = 0.0f;
	HauntLevel = HauntLevel;
	MinHauntTime = MinTime;
	MaxHauntTime = MaxTime;
	RollHauntTime();
	State = HauntManagerState::STATE_TIMER;
	SetActorTickEnabled(true);
}

void AHauntManager::StopHaunting()
{
	State = HauntManagerState::STATE_IDLE;
	SetActorTickEnabled(false);
}

void AHauntManager::PauseHaunting()
{
	PauseState = State;
	State = HauntManagerState::STATE_PAUSED;
	SetActorTickEnabled(false);
}

void AHauntManager::ResumeHaunting()
{
	State = PauseState;
	SetActorTickEnabled(true);
}

void AHauntManager::RollHauntTime()
{
	HauntTime = FMath::FRandRange(MinHauntTime, MaxHauntTime) + HauntTimeOffset;
}