// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Runtime/Engine/Classes/Engine/TargetPoint.h"
#include "TimerManager.h"
#include "ErrolController.h"
#include "NavigationSystem.h"
#include "ErrolCharacter.generated.h"

UENUM(BlueprintType)
enum class ErrolState : uint8
{
	STATE_IDLE			UMETA(DisplayName="Idle"),
	STATE_PATROL		UMETA(DisplayName="Patrol"),
	STATE_CHASE			UMETA(DisplayName="Chase"),
	STATE_INVESTIGATE	UMETA(DisplayName="Investigate"),
	STATE_LOOKAROUND	UMETA(DisplayName="LookAround"),
	STATE_KILL			UMETA(DisplayName="Kill"),
	STATE_PEEK			UMETA(DisplayName="Peek"),
	STATE_SCARE1		UMETA(DisplayName="Scare1"),
};

UCLASS()
class ARCHITECTUREEXPLORER_API AErrolCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AErrolCharacter();

private:
	bool bHasClothes = true;

	//	cut in half stuff

	TArray<int32> TopHalfBones;
	TArray<int32> BottomHalfBones;
	int CutInHalfBone = 3;
	void SetupBoneArrays();

public:
	void CutInHalf();

	//class UDestructibleComponent * DC = nullptr;

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
	UNavigationSystemV1 * NavigationSystem = nullptr;

	USkeletalMeshComponent * SkeletalMeshComp = nullptr;

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ErrolState State;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	ErrolState LastState;

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

	UFUNCTION(BlueprintImplementableEvent, Category = "AIAnimation")
	void UpdateAnimation(ErrolState CurrentState);

	// State entry functions for starting timers and setting variables
public:
	void EnterIdleState();
	void EnterPatrolState();
	void EnterChaseState();
	void EnterInvestigateState();
	void EnterKillState();
	void EnterLookAroundState();

	// State exit functions for clearing timers
	void ExitIdleState();
	void ExitPatrolState();
	void ExitChaseState();
	void ExitInvestigateState();
	void ExitLookAroundState();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float PatrolSpeed = 140.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite);
	float ChaseSpeed = 220.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite);
	float InvestigateSpeed = 180.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite);
	float KillSpeed = 0.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite);
	float Speed = 0;

	float KillRadius = 50.f;

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
	float SeeDotThreshold = 0.26f;			// represents errol fov. 0 is 180 degrees

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

	UFUNCTION()
	void ShouldKill();

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


private:
	void UpdateSpeedBasedOnRotation();

	public:
		// Called by VRCharacter, Bottle, or Door. The int will represent the actor so I don't have to do casts for better performance
		// 1 = Player, 2 = Door, 3 = Bottle
		void HearSound(AActor * Bottle, int ActorInt, int Loudness = 100);
		FVector InvestigateLocation = FVector::ZeroVector;
};
