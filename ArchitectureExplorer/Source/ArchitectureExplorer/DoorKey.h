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

	UFUNCTION(BlueprintCallable)
	void DestroyKey();
};
