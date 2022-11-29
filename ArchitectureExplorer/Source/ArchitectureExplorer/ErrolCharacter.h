// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Runtime/Engine/Classes/Engine/TargetPoint.h"
#include "TimerManager.h"
#include "ErrolController.h"
#include "NavigationSystem.h"
#include "PeekPoint.h"
#include "CollisionQueryParams.h"
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
	STATE_SHOULDERPEEK	UMETA(DisplayName="ShoulderPeek"),
	STATE_FLYAT			UMETA(DisplayName="FlyAt"),
	STATE_BEINGCUT		UMETA(DisplayName="BeingCut"),
	STATE_UPPERWINDOWSCARE UMETA(DisplayName="UpperWindowScare"),
};

UENUM(BlueprintType)
enum class ErrolPeekState : uint8
{
	STATE_IDLE				UMETA(DisplayName = "Idle"),
	STATE_WAITPEEK			UMETA(DisplayName = "WaitPeek"),
	STATE_LEFTPEEK			UMETA(DisplayName = "LeftPeek"),
	STATE_RIGHTPEEK			UMETA(DisplayName = "RightPeek"),
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

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USkeletalMeshComponent * MocapMesh = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	class USoundCue * RightFootStepSound;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	class USoundCue * LeftFootStepSound;

	UPROPERTY(EditDefaultsOnly)
	class USoundCue * WoodFootStepSound;

	UPROPERTY(EditDefaultsOnly)
	class USoundCue * DirtFootStepSound;

	UPROPERTY(EditDefaultsOnly)
	class USoundCue * ConcreteFootStepSound;

	UPROPERTY(EditDefaultsOnly)
	class USoundCue * TileFootstepSound;

	UPROPERTY(EditDefaultsOnly)
	class USoundCue * StairFootstepSound;

	UPROPERTY(VisibleAnywhere);
	TMap<FName, USoundCue *> FootstepMap;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	bool bRightFootOnGround = true;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	bool bLeftFootOnGround = true;

	// updates the step sound for each foot
	void CheckFloor();

	void UpdateFootstepSound(FHitResult &HitResult, bool bLeft, USoundCue * FootstepSound);



private:
	UWorld * World = nullptr;
	AActor * Player = nullptr;
	AActor * LHandController = nullptr;
	AActor * RHandController = nullptr;
	USceneComponent * PlayerCamera = nullptr;
	USceneComponent * ErrolEye = nullptr;
	UNavigationSystemV1 * NavigationSystem = nullptr;

	USceneComponent * SawTip = nullptr;

	USkeletalMeshComponent * SkeletalMeshComp = nullptr;
	USkeletalMeshComponent * TopHalfMesh = nullptr;

	USkeletalMeshComponent * BodyMesh = nullptr;
	USkeletalMeshComponent * SawMesh = nullptr;

	

	const USkeletalMeshSocket *EyeSocket = nullptr;
	const USkeletalMeshSocket *NeckSocket = nullptr;

	FVector LeftPeekVector = FVector::ZeroVector;
	FVector RightPeekVector = FVector::ZeroVector;

	// State Stuff

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

	// returns false if the player can MOST LIKELY not see me. This uses 14 raycasts from the player camera to bones on the meshes to determine this.
	UFUNCTION(BlueprintCallable)
	bool CanThePlayerSeeMe();

	FCollisionQueryParams CanPlayerSeeMeTraceParams;
	FCollisionQueryParams KillSweepParams;

	UFUNCTION(BlueprintImplementableEvent, Category = "AIAnimation")
	void UpdateAnimation(ErrolState CurrentState);

	UFUNCTION(BlueprintImplementableEvent, Category = "AIAnimation")
	void EndPeekAnimation();
	UFUNCTION(BlueprintImplementableEvent, Category = "AIAnimation")
	void StartPeekAnimation();
	// State entry functions for starting timers and setting variables
public:
	void EnterIdleState();
	void EnterPatrolState();
	
	void EnterInvestigateState();
	void EnterLookAroundState();

	UFUNCTION(BlueprintCallable)
	void EnterPeekState();

	UFUNCTION(BlueprintCallable)
	void EnterShoulderPeekState();

	// CHASE

	void EnterChaseState(float MaxSpeed);

	UFUNCTION(BlueprintCallable)
	void TickChaseState(float DeltaTime);

	FCollisionQueryParams OpenDoorQueryParams;
	float OpenDoorDistance = 200.f;
	void OpenDoorBlockingPath();

	USceneComponent * BloodSpawnLocation = nullptr;

	// tick stuff

	// this is turned on once I am sprinting.
	bool bUpdateMoveSpeedBasedOnPlayerCamera = false;
	void UpdateMoveSpeedBasedOnPlayerCamera(float DeltaTime);

	// this is turned on in EnterChaseState().
	// smoothly increase MoveSpeed to a sprint. Once I am sprinting, bSprintAtPlayer is changed to false.
	bool bSprintAtPlayer = false;
	void SprintAtPlayer(float DeltaTime);

	// If I get inside KillRadius, then exit ChaseState and change state to FlyAt while marking the player for death.
	bool ShouldIMarkPlayerForDeath();

	float MoveTargetValue;

	void ExitChaseState();

	// this is how fast Errol will increase his speed into a sprint
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SprintSpeedUpSpeed = 2.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float UpdateSpeedBasedOnPlayerCameraSpeed = 1.0f;

	// FLYAT

	// Change Errols animation into a scary pose animation of him brandishing the chainsaw and have him move through the player camera until he is out of view
	// then disappear him and roll to see if the player should get killed.

	UFUNCTION(BlueprintCallable)
	void EnterFlyAtState();

	UFUNCTION(BlueprintCallable)
	void TickFlyAtState(float DeltaTime);

	UFUNCTION(BlueprintCallable)
	void EndFlyAtState();

	// this it the number that will be rolled
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int KillChance = 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxFlyAtDistance = 150.0f;

	// if true, Errol will kill the player instead of flying at them and rolling for the kill
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bKillImmediately = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float FlyThroughDistance = 60.0f;

	bool bFlyAt = false;
	bool bFlyThrough = false;

	// KILL

	UFUNCTION(BlueprintCallable)
	void EnterKillState();

	UFUNCTION(BlueprintCallable)
	void TickKillState(float DeltaTime);

	UFUNCTION(BlueprintCallable)
	void EndKillState();

	bool bFindKillLocation = false;
	FVector KillLocation = FVector::ZeroVector;
	// this is used to find KillLocation. It will start at the player camera->right vector and go 360 degrees around the player to find a valid location.
	FVector KillSweepVector = FVector::ZeroVector;
	FVector KillSweepVectorStart = FVector::ZeroVector;
	void FindKillLocation();

	UFUNCTION(BlueprintCallable)
	void KillPlayer();

	UPROPERTY(EditAnywhere)
	float KillDistance = 50.0f;

	UPROPERTY(EditAnywhere)
	float ChaseKillDistance = 70.0f;

	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> BloodFXActor = nullptr;

	// How often to spawn blood fx
	UPROPERTY(EditAnywhere)
	float BloodSpawnTime = 0.2f;

	// keeps track of how much time has passed since last blood spawn, gets reset each spawn.
	float BloodSpawnCounter = 0;

	UPROPERTY(BlueprintReadWrite)
	bool bSpawnBlood = false;

	void SpawnBlood(float DeltaTime);

	USceneComponent * VRRoot = nullptr;

	const FVector WorldUpVector = FVector(0.0f, 0.0f, 1.0f);

	//

	void ExitIdleState();
	void ExitPatrolState();
	void ExitInvestigateState();
	void ExitLookAroundState();
	UFUNCTION(BlueprintCallable)
	void ExitPeekState();

	UFUNCTION(BlueprintCallable)
	void ExitShoulderPeekState();

	//	Peek stuff

	//	for checking if the peek was on the screen but is now off the screen
	bool bPeekOnScreen = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ErrolPeekState PeekState;

	UPROPERTY(VisibleAnywhere)
	TArray<APeekPoint*> PeekPoints;

	void FindValidPeekPoint();
	int PeekCounter = 0;
	UPROPERTY(BlueprintReadWrite)
	bool bPeekFound = false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	APeekPoint *ValidPeekPoint = nullptr;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	bool bPeeking = false;

	void StartPeek();

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	bool bLeftPeek = false;

	UFUNCTION(BlueprintImplementableEvent)
	void EndPeek();

	//	determines when Errol should end the peek
	void ShouldEndPeek(float DeltaTime);
	//	updates the location and rotation so the peek looks right
	void UpdatePeekPosition();
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxPeekTime = 1000.f;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	float PeekTime = 0;
	//	When PeekScareLevel goes over this value, start end peek
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float PeekScareThreshold = 4.f;
	//	Used to keep track of how long the player has looked at Errol while he's peeking and how much they are looking at him
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	float PeekScareLevel = 0;

	// SCARE STATES:

	// These states control Errol's behavior during a specific scare created in blueprints.

	// Upper Window Scare State:

	UFUNCTION(BlueprintCallable)
	void EnterUpperWindowScareState();
	UFUNCTION(BlueprintCallable)
	void TickUpperWindowScareState(float DeltaTime);
	UFUNCTION(BlueprintCallable)
	void ExitUpperWindowScareState();

	// measures how long the player has looked at Errol staring at them through the window.
	float UpperWindowScareStareValue = 0.0f;
	float UpperWindowScareChaseThreshold = 1.6f;

	float UpperWindowChaseSpeed = 110.f;



private:
	AActor * UpperWindowStartingPoint = nullptr;

public:
	// Various settings

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float IdleSpeed = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float FlyAtSpeed = 999999.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float PatrolSpeed = 140.f;
	// This can be anywhere between 0 and 220.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite);
	float ChaseSpeed = 220.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite);
	float InvestigateSpeed = 180.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite);
	float KillSpeed = 0.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite);
	float Speed = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite);
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

// Dismember stuff

public:

	UPROPERTY(BlueprintReadWrite)
	bool bCutInHalf = false;

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void FlyAtPlayer();
};
