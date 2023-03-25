// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Scare.h"
#include "HGGYScare.generated.h"

/**
 * 
 */

UENUM(BlueprintType)
enum class HGGYState : uint8
{
	STATE_IDLE					UMETA(DisplayName = "Idle"),
	STATE_MOVING_PHONE			UMETA(DisplayName = "MovingPhone"),
	STATE_CALLING_PHONE			UMETA(DisplayName = "CallingPhone"),
	STATE_TALKING				UMETA(DisplayName = "Talking"),
	STATE_CHASING				UMETA(DisplayName = "Chasing"),
	STATE_ENDING				UMETA(DisplayName = "Ending"),
};

/**
 * this scare starts in Stage 4?
 */

UCLASS()
class ARCHITECTUREEXPLORER_API AHGGYScare : public AScare
{
	GENERATED_BODY()

protected:

	virtual void BeginPlay() override;

public:

	AHGGYScare();

	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USceneComponent *HGGYRoot = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USceneComponent *PhoneGoalLocation = nullptr;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	HGGYState State = HGGYState::STATE_IDLE;

	UFUNCTION(BlueprintImplementableEvent)
	void AnswerPhone();

	UFUNCTION(BlueprintCallable)
	void EnterMovingPhoneState();

	UFUNCTION(BlueprintCallable)
	void EnterCallingPhoneState();

private:

	void MovingPhone();
	class APhone *Phone = nullptr;

	USceneComponent *PlayerCamera = nullptr;

	class UWorld *World = nullptr;

	FCollisionQueryParams QueryParams;

	class AErrolCharacter *Errol = nullptr;

	// ends the chase when the player isn't looking at Errol
	void ShouldEndChase();
	void EndChase();

	int EndChaseThreshold = 10;
	int EndChaseValue = 0;

public:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void EndChaseBP();
	
};
