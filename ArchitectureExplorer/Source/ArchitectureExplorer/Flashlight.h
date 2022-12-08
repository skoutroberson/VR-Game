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

	UFUNCTION(BlueprintCallable)
	void TurnOn();
	UFUNCTION(BlueprintCallable)
	void TurnOff();

	void PressButton();

	bool bOn = false;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	class UStaticMeshComponent * Mesh = nullptr;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	class UAudioComponent * ButtonPressAudio = nullptr;

	UFUNCTION(BlueprintImplementableEvent)
	void PlayButtonPressAudio();


private:
	ALightManager * LM = nullptr;
	
};
