// Fill out your copyright notice in the Description page of Project Settings.


#include "Stage1.h"

// Sets default values

AStage1::AStage1()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	//PrimaryActorTick.bCanEverTick = true;

}


// Called when the game starts or when spawned
void AStage1::BeginPlay()
{
	Super::BeginPlay();

	// this is how you call a function in a vector of function pointers. nice syntax 
	//(this->*(FlagChecks[0]))();


}

// Called every frame
/*
void AStage1::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!bIsCompleted)
	{
		IsCompleted();
	}

}


void AStage1::IsCompleted()
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
*/
bool AStage1::Flag0Check()
{
	UE_LOG(LogTemp, Warning, TEXT("000000000FUNCTION PONITER WORKS!! LLOLOLOL"));
	return false;
}

bool AStage1::Flag1Check()
{
	UE_LOG(LogTemp, Warning, TEXT("1111111111FUNCTION PONITER WORKS!! LLOLOLOL"));
	return false;
}

bool AStage1::Flag2Check()
{
	UE_LOG(LogTemp, Warning, TEXT("222222222FUNCTION PONITER WORKS!! LLOLOLOL"));
	return false;
}

