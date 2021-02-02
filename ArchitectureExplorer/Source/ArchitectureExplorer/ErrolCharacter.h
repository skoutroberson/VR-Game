// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Runtime/Engine/Classes/Engine/TargetPoint.h"
#include "TimerManager.h"
#include "ErrolController.h"
#include "ErrolCharacter.generated.h"

UENUM(BlueprintType)
enum class ErrolState : uint8
{
	STATE_IDLE		UMETA(DisplayName="Idle"),
	STATE_PATROL	UMETA(DisplayName="Patrol"),
	STATE_CHASE		UMETA(DisplayName="Chase"),
	STATE_KILL		UMETA(DisplayName="Kill"),
	STATE_PEEK		UMETA(DisplayName="Peek"),
	STATE_SCARE1	UMETA(DisplayName="Scare1"),
};

UCLASS()
class ARCHITECTUREEXPLORER_API AErrolCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AErrolCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:
	UWorld * World = nullptr;
	AActor * Player = nullptr;
	AActor * LHandController = nullptr;
	AActor * RHandController = nullptr;
	USceneComponent * PlayerCamera = nullptr;
	USceneComponent * ErrolEye = nullptr;

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ErrolState State;

	AErrolController * ErrolController;

private:
	void Patrol();

private:
	UPROPERTY()
		TArray<AActor*> Waypoints;

	UFUNCTION()
		ATargetPoint* GetRandomWaypoint();
public:
	UFUNCTION()
		void GoToRandomWaypoint();

	// State entry functions for starting timers and setting variables
public:
	void EnterIdleState();
	void EnterPatrolState();
	void EnterChaseState();

	// State exit functions for clearing timers
	void ExitIdleState();
	void ExitPatrolState();
	void ExitChaseState();

	float PatrolSpeed = 200.f;
	float ChaseSpeed = 400.f;

	// Errol local senses funcitonality
private:
	FTimerHandle ChaseTimerHandle;
	FTimerHandle SetUpCanSeeHandle;
	UFUNCTION()
	void InitializeCanSeeVariables();
	void InitializePerceptionTimers();
	float SeeTimerRate = 0.3f;
	float HalfFOV = 45.f;
	int CanSeeChaseThreshold = 3;
	int CanSeeHitCounter = 0;
	float SeeDotThreshold = 0.5f;

	// Have offset timers call these functions

	UFUNCTION()
	void SetSeeGauge();
	UFUNCTION()
	void SetHearGauge();
	UFUNCTION()
	void SetSeeFlashlightGauge(); 
	UFUNCTION()
	void SetDetectionGauge();

	UFUNCTION()
	void ShouldChase();

	//	How much Errol can see the player
	float SeeGauge = 0;
	//	How much Errol can hear the player
	float HearGauge = 0;
	//	How much Errol can see an item recently held by the player (if the player throws an item)
	float SeeItemGauge = 0;
	//	For detecting if the player is shining the flashlight at Errol
	float SeeFlashlightGauge = 0;
	//	All of the gauges put together.
	float DetectionGauge = 0;

public:
	//	If DetectionGauge > DetectionThreshold then Errol detects the player
	float DetectionThreshold = 0;



};
