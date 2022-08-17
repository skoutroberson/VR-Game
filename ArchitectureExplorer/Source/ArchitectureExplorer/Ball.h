// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Grabbable.h"
#include "Ball.generated.h"

/**
 * 
 */
UCLASS()
class ARCHITECTUREEXPLORER_API ABall : public AGrabbable
{
	GENERATED_BODY()

public:
	ABall();

	virtual void BeginPlay() override;
	
};
