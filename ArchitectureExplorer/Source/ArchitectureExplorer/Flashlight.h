// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Grabbable.h"
#include "LightManager.h"
#include "Flashlight.generated.h"

/**
 * 
 */
UCLASS()
class ARCHITECTUREEXPLORER_API AFlashlight : public AGrabbable
{
	GENERATED_BODY()

public:
	AFlashlight();

	virtual void BeginPlay() override;

	void TurnOn();
	void TurnOff();

	bool bOn = false;

private:
	ALightManager * LM = nullptr;
	
};
