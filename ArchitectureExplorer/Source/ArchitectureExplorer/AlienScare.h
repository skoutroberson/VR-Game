// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Scare.h"
#include "AlienScare.generated.h"

/**
 * 
 */
UCLASS()
class ARCHITECTUREEXPLORER_API AlienScare : public AScare
{
	GENERATED_BODY()

public:
	AlienScare();
	~AlienScare();

	// on trigger, call phone
	// ""you have to run""
	// check how far the player has moved, play an audio for either one,
	// spawn errol at either side of the living room area, chase
};
