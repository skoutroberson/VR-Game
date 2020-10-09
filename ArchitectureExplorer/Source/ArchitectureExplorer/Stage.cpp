// Fill out your copyright notice in the Description page of Project Settings.


#include "Stage.h"
#include <vector>
#include "Stage1.h"
#include "Components/BoxComponent.h"
#include "Components/PrimitiveComponent.h"
#include "VRCharacter.h"
#include "DrawDebugHelpers.h"

using namespace std;

// Sets default values
AStage::AStage()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	FlagChecks.push_back(&AStage::Flag0Check);
	FlagChecks.push_back(&AStage::Flag1Check);
	FlagChecks.push_back(&AStage::Flag2Check);
	FlagChecks.push_back(&AStage::Flag3Check);
	FlagChecks.push_back(&AStage::Flag4Check);
	FlagChecks.push_back(&AStage::Flag5Check);
	FlagChecks.push_back(&AStage::Flag6Check);
	FlagChecks.push_back(&AStage::Flag7Check);
	FlagChecks.push_back(&AStage::Flag8Check);
	FlagChecks.push_back(&AStage::Flag9Check);

	//SetActorTickInterval(1.f);
}

// Called when the game starts or when spawned
void AStage::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AStage::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//PrintTest();
	//DrawTriggers(DeltaTime);

	if (!bIsCompleted)	//////////////////// DONT NEED TO CHECK THIS EVERY FRAME! MAKE THIS EVENT DRIVEN
	{
		IsCompleted();
	}
}

void AStage::IsCompleted()
{
	if (!FlagChecks.empty())
	{
		for (int i = 0; i < FlagChecks.size(); i++)
		{
			if ((this->*(FlagChecks[i]))() == true)	// if the function in FlagChecks returns true
			{
				FlagChecks.erase(FlagChecks.begin() + i);
			}
		}
	}
	else
	{
		bIsCompleted = true;
	}
}

bool AStage::Flag0Check()
{
	return true;
}

bool AStage::Flag1Check()
{
	return true;
}

bool AStage::Flag2Check()
{
	return true;
}

bool AStage::Flag3Check()
{
	return true;
}

bool AStage::Flag4Check()
{
	return true;
}

bool AStage::Flag5Check()
{
	return true;
}

bool AStage::Flag6Check()
{
	return true;
}

bool AStage::Flag7Check()
{
	return true;
}

bool AStage::Flag8Check()
{
	return true;
}

bool AStage::Flag9Check()
{
	return true;
}

void AStage::PrintTest()
{
	UE_LOG(LogTemp, Warning, TEXT("Stage -1"));
}