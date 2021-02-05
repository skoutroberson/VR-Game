// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Grabbable.h"
#include "Bottle.generated.h"

/**
 * 
 */
UCLASS()
class ARCHITECTUREEXPLORER_API ABottle : public AGrabbable
{
	GENERATED_BODY()

public:
	ABottle();

private:
	UFUNCTION(BlueprintCallable, Category = ErrolCharacter)
	void NotifyErrolCharacter();
};
