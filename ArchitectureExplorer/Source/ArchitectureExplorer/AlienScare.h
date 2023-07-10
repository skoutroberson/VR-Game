// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Scare.h"
#include "AlienScare.generated.h"

UENUM(BlueprintType)
enum class AlienScareState : uint8
{
	STATE_IDLE			UMETA(DisplayName = "Idle"),
	STATE_START_SCARE   UMETA(DisplayName = "StartScare"),
	STATE_MOVING_PHONE	UMETA(DisplayName = "MovingPhone"),
	STATE_CALLING_PHONE	UMETA(DisplayName = "CallingPhone"),
	STATE_WAIT_CHASE	UMETA(DisplayName = "WaitChase"),
	STATE_CHASE			UMETA(DisplayName = "Chase"),
	STATE_END_CHASE		UMETA(DisplayName = "EndChase"),
	STATE_END_SCARE		UMETA(DisplayName = "EndScare"),
};

/**
 * // on trigger, call phone
	// ""you have to run""
	// delay
	// "Get out of there! Move!"
	// delay
	// check how far the player has moved, play an audio for either one,

	// "Wait not that way! The other way-OH GOD!"
	// or
	// "What are you doing! Run-OH GOD!"
	
	// spawn errol at  side of the living room area that the player is looking at, chase for 3 minutes. (if errol is far away and hasn't seen the player in 10 seconds, then spawn him in another part
	of the house.
 */
UCLASS()
class ARCHITECTUREEXPLORER_API AlienScare : public AScare
{
	GENERATED_BODY()

public:
	AlienScare();
	~AlienScare();

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	AlienScareState State = AlienScareState::STATE_IDLE;

	// Called when the game starts or when spawned
	virtual void BeginPlay();

	// called every frame
	virtual void Tick(float DeltaTime);

	// moves the phone when it is not in view and advances the scare
	void MovePhone();

private:
	
	UWorld *World = nullptr;
	USceneComponent *PlayerCamera = nullptr;
	class APhone *Phone = nullptr;
	
	FTransform PhoneTransform1;
	FTransform PhoneTransform2;
	
};
