// Fill out your copyright notice in the Description page of Project Settings.


#include "Stage.h"
#include <vector>
#include "Stage1.h"

using namespace std;

// Sets default values
AStage::AStage()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	FlagChecks.push_back(&AStage::Flag0Check);
	FlagChecks.push_back(&AStage::Flag1Check);
	FlagChecks.push_back(&AStage::Flag2Check);
	FlagChecks.push_back(&AStage::Flag9Check);

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

	if (!bIsCompleted)
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
			if ((this->*(FlagChecks[i]))() == true)
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
	return false;
}

bool AStage::Flag1Check()
{
	return false;
}

bool AStage::Flag2Check()
{
	return false;
}

bool AStage::Flag3Check()
{
	return false;
}

bool AStage::Flag4Check()
{
	return false;
}

bool AStage::Flag5Check()
{
	return false;
}

bool AStage::Flag6Check()
{
	return false;
}

bool AStage::Flag7Check()
{
	return false;
}

bool AStage::Flag8Check()
{
	return false;
}

bool AStage::Flag9Check()
{
	UE_LOG(LogTemp, Warning, TEXT("99999999999"));
	return false;
}
