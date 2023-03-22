// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Grabbable.h"
#include "Phone.generated.h"

/**
 * 
 */
UCLASS()
class ARCHITECTUREEXPLORER_API APhone : public AGrabbable
{
	GENERATED_BODY()

public:
	APhone();

protected:
	virtual void BeginPlay() override;

public:

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Phone")
	void CallPhone();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Phone")
	void AnswerPhone();

	// for calling AnswerPhone() when the phone gets answered in Stage 4 or 6
	class HGGYScare *HGGYScare = nullptr;
	
};
