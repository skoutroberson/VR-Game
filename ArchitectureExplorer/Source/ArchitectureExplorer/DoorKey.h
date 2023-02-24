// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Grabbable.h"
#include "DoorKey.generated.h"

/**
 * 
 */
UCLASS()
class ARCHITECTUREEXPLORER_API ADoorKey : public AGrabbable
{
	GENERATED_BODY()

public:

	ADoorKey();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:

	UFUNCTION(BlueprintCallable)
	void DestroyKey();


};
