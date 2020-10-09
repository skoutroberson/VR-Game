// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Door.h"
#include "DoorManager.generated.h"

UCLASS()
class ARCHITECTUREEXPLORER_API ADoorManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADoorManager();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:	
	
	TMap<FString, ADoor*> DoorsMap;

	void FillDoorsMap();

};
