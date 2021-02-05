// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "UObject/UObjectGlobals.h"
#include "cPlayerHandAnimBP.generated.h"

/**
 * 
 */
UCLASS(transient, Blueprintable, hideCategories=AnimInstance, BlueprintType)
class ARCHITECTUREEXPLORER_API UcPlayerHandAnimBP : public UAnimInstance
{
	GENERATED_BODY()

public:
	UcPlayerHandAnimBP();

	UFUNCTION()
	virtual void SetGripValue(float a_fGrip);

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Blend")
	float m_fGripVal;
	
};
