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
	
};
