// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Grabbable.h"
#include "ErrolCharacter.h"
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

	virtual void Tick(float DeltaTime) override;

	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category = Bottle)
	bool bInAir = false;

private:
	UFUNCTION(BlueprintCallable, Category = ErrolCharacter)
	void NotifyErrolCharacter();

	AErrolCharacter * Errol = nullptr;

	UPROPERTY(EditAnywhere, Category = Bottle)
	bool bCanBreak = false;

};
