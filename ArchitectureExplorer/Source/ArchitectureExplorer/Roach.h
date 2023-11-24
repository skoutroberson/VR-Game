// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SphereComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Curves/CurveFloat.h"
#include "Roach.generated.h"

UENUM(BlueprintType)
enum class CockroachState : uint8
{
	STATE_IDLE			UMETA(DisplayName = "Idle"),
	STATE_WAIT			UMETA(DisplayName = "Wait"),
	STATE_MOVE			UMETA(DisplayName = "Move"),
	STATE_FALL			UMETA(DisplayName = "Fall"),
	STATE_COPULATE		UMETA(DisplayName = "Copulate"),
};

UENUM(BlueprintType)
enum class CopulateState : uint8
{
	STATE_NONE				UMETA(DisplayName = "None"),
	STATE_COPULATING		UMETA(DisplayName = "Copulating"),
	STATE_BEING_COPULATED	UMETA(DisplayName = "Being Copulated"),
};


struct FStateInfo
{
public:
	FStateInfo(CockroachState pStateEnum, void (ARoach::*pEnter)(), void (ARoach::*pExit)(), void (ARoach::*pTick)(float)) 
	{
		StateEnum = pStateEnum;
		Enter = pEnter;;
		Exit = pExit;
		Tick = pTick;
	}
	CockroachState StateEnum;
	void (ARoach::*Enter)();
	void (ARoach::*Exit)();
	void (ARoach::*Tick)(float);
};

UCLASS()
class ARCHITECTUREEXPLORER_API ARoach : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ARoach();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere)
	class USceneComponent* RoachRoot;

	UPROPERTY(EditAnywhere)
	UProjectileMovementComponent* MovementComponent;

	void PrintTest();

	// state stuff

	// this is needed mainly for visualization in the editor
	UPROPERTY(EditAnywhere)
	CockroachState StateEnum;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	CopulateState CurrentCopulateState;

	bool IsOverlappingMesh();

	// set by RoachSpawner 
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	ARoach *MateRoach = nullptr;

	UPROPERTY(VisibleAnywhere)
	CockroachState PreviousState;
	void PauseTimers();
	void ResumeTimers();
	void StartCopulating(ARoach *OtherRoach);

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CopulateMoveSpeedModifier = 1.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CopulateRotateSpeedModifier = 1.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CopulateAnimationSpeedModifier = 1.0f;
	
	//UPROPERTY(EditAnywhere)
	FStateInfo *CurrentState;

	static FStateInfo IdleState;
	static FStateInfo WaitState;
	static FStateInfo MoveState;

	UFUNCTION(CallInEditor)
	void ChangeState(CockroachState NewState);

	void ChangeState(FStateInfo * NewState);

	// State Enter, Exit, and Tick Functions
	void EnterIdleState();
	void EnterWaitState() {}
	void EnterMoveState() {}
	void EnterFallState() {}
	void EnterCopulateState() {}

	void ExitIdleState() {}
	void ExitWaitState() {}
	void ExitMoveState() {}
	void ExitFallState();
	void ExitCopulateState();

	void TickIdleState(float DeltaTime);
	void TickWaitState(float DeltaTime);
	void TickMoveState(float DeltaTime);

public:
	UFUNCTION(BlueprintCallable)
	void HitRigidBody(UPARAM(ref)FHitResult HitResult);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Roach")
	float MoveSpeed = 5.f;

	UPROPERTY(VisibleAnywhere)
	float MoveSpeedGoal = 0.f;

	bool bSpeedingUp = true;
	void SpeedUp(float DeltaTime);

	bool bSlowingDown = false;
	void SlowDown(float DeltaTime);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void UpdateAnimationSpeed(float NewSpeed);

	float Radius;
private:

	USphereComponent *Root;

	UWorld* World;

	/** Performs two traces (down and forward) to check for the edge of the movement plane.
	If the forward trace hits, then the roach must turn to avoid the blocking object.
	If the down trace misses, then the roach must turn to avoid falling.
	*/
	
	bool ShouldTurnImmediately();
	void Turn(float DeltaTime);
	void MoveForward(float DeltaTime);

	// moves the roach out of blocking volumes and returns a bool to determine if the roach should turn to avoid the collision
	bool ShouldAvoidCollision();

	// for checking if Turn() turned the wrong way
	bool bTurnTheOtherWay = false;

	UPROPERTY(EditAnywhere, Category = "Roach")
	float TurnSpeed = 3.f;

	UPROPERTY(EditAnywhere, Category = "Roach")
	bool bTurnLeft = false;

	FCollisionQueryParams QueryParams;


	void InitializeStates();
	// helper functions to make function pointer call easier
	void ExitState(FStateInfo *State);
	void EnterState(FStateInfo *State);
	void TickState(FStateInfo *State, float DeltaTime);

	// climbing abilities

	void ClimbUp(FVector Normal);
	void ClimbDown(float DeltaTime);

	bool RotateToGroundNormal();

	// If surface is found: Returns true and gives HitResult the surface info. If not found: returns false
	bool CheckSurfaceAtLocation(FVector Location, FHitResult &HitResult);

	void MoveAndRotateToSurface(FHitResult &SurfaceInfo);

	// how many
	uint8 FrameSweepIterations = 0;
	uint8 MaxSweepIterations = 5;

	FVector TargetLocation = FVector::ZeroVector;

	// Move State stuff:

	FVector GoalLocation = FVector::ZeroVector;
	FVector GoalNormal = FVector::ZeroVector;

	FVector ClimbDownLocation = FVector::ZeroVector;

	TArray<FVector> GoalLocations;


	/**
	Sphere trace forward and check for blocking hit, ignores scrapes.
	Returns true if hit found and sets GoalLocation and GoalNormal to the impact info.
	*/
	bool CheckForward(float DeltaTime);
	//hit: set bMoveToGoal to true

	//no hit:
	/**
	Loop of Line Traces Down until we find a hit.
	Returns true if a hit was found and sets GoalLocation and GoalNormal.
	*/
	bool CheckDown(float DeltaTime);
	//hit: set bMoveToGoal to true
	//no hit: turn

	//uint8 DownTraceIterations = 0;
	uint8 MaxDownTraceIterations = 1;


	// sweeps to goal, if sweep fails then we move to X location above the GoalLocation first, then we move to Goal.
	void MoveToGoal(float DeltaTime);

	void MoveAndRotateToGoal(float DeltaTime);

public:
	UPROPERTY(VisibleAnywhere, Category = "Roach")
	bool bMoveToGoal = false;
	UPROPERTY(EditAnywhere, Category = "Roach")
	bool bTurn = false;

private:
	void UpdateTurnDirection(FVector ImpactNormal, bool bDownTrace);

	bool bClimbDown = false;
	void MoveToClimbDownPosition(float DeltaTime);

	FVector ClimbDownStartingLocation = FVector::ZeroVector;

	bool bStuck = false;

	FVector LastFrameLocation = FVector::ZeroVector;
	FVector LastFrameForwardVector = FVector::ZeroVector;

	bool bDoubleDip = true;

public:
	UPROPERTY(BlueprintReadOnly)
	float DistanceMovedLastFrame = 0.0f;
	float DistanceMovedThisFrame();

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float MaxMoveSpeed = 220.f;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float MinMoveSpeed = 140.f;

	float RotationChangeDotThisFrame = 0.0f;

	int StuckFrames = 0;

	FTimerHandle SwerveTimerHandle;
	FTimerHandle SwerveSpeedTimerHandle;
	FTimerHandle WaitTimerHandle;
	FTimerHandle WiggleTimerHandle;
	FTimerHandle AntennaTimerHandle;
	FTimerHandle FleeFlockTimerHandle;

	FTimerHandle CopulateOverlapHandle;
	void CopulateOverlapCheck();

	// gross
	void StartCopulating();

	// wiggle stuff

	UFUNCTION()
	void ChangeWiggleDirection();

	bool bWiggleLeft = false;

	// rate that wiggle direction changes
	UPROPERTY(EditAnywhere)
	float WiggleRate = 0.2f;

	void Wiggle(float DeltaTime);

	UPROPERTY(EditAnywhere)
	float WiggleSpeed = 1.0f;

	// swerve stuff

	// random number between 1-9;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Laziness = 1.0f;

	UPROPERTY(VisibleAnywhere)
	float StartingLaziness;

	UFUNCTION()
	void ChangeSwerveDirectionAndRate();
	bool bSwerveLeft = false;

	// randomly calculated every SwerveRate seconds. Changes with Laziness.
	float SwerveRate = 0.1f;
	float SwerveSpeedRate = 0.1f;

	void Swerve(float DeltaTime);

	UFUNCTION()
	void ChangeSwerveSpeed();

	UPROPERTY(VisibleAnywhere)
	float SwerveSpeed = 1.0f;

	// wait
	void WaitIfRolled();
	float WaitTime = 1.0f;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	bool bWaiting = false;

	// antenna

	// turn this off when the roach can't be seen?
	bool bRotateAntenna = true;

	// interp the current antenna rotation value to the goal rotation value
	void InterpAntennaRotations(float DeltaTime);

	float AntennaRollRate = 0.1f;

	void RollNewAntennaRotations();

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float AntennaRotationSpeed = 80.0f;

	float LeftAntennaSpeedMultiplier = 1.0f;
	float RightAntennaSpeedMultiplier = 1.0f;

	// Yaw
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	float LeftAntennaZRotation = 0;
	// Pitch
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	float LeftAntennaYRotation = 0;
	// Yaw
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	float RightAntennaZRotation = 0;
	// Pitch
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	float RightAntennaYRotation = 0;

	// Yaw
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	float LeftAntennaZGoal = 0;
	// Pitch
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	float LeftAntennaYGoal = 0;
	// Yaw
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	float RightAntennaZGoal = 0;
	// Pitch
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	float RightAntennaYGoal = 0;

	float GenerateLaziness();

	UPROPERTY(BlueprintReadOnly)
	float AntennaMinZ = -5.0f;
	UPROPERTY(BlueprintReadOnly)
	float AntennaMaxZ = 10.0f;
	UPROPERTY(BlueprintReadOnly)
	float AntennaMinY = -5.0f;
	UPROPERTY(BlueprintReadOnly)
	float AntennaMaxY = 7.0f;

public:

	// called from RoachSpawner when spawned or moved
	void TryToCopulate();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bFlee = false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bFlock = false;

	void Flee();
	void Flock();

	UFUNCTION()
	void FleeOrFlock();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float FleeFlockTimerRate = 0.3f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float FleeFlockMinRate = 0.1f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float FleeFlockMaxRate = 0.3f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float FleeWaitTimeModifier = 1.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float FleeSpeedModifier = 1.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float FleeLazinessModifier = 1.0f;

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void StopFleeingDelayed(float MinDelay, float MaxDelay);

	UFUNCTION(BlueprintCallable)
	void StopFleeing();

	//(X=-1098.000000,Y=942.000000,Z=283.340149)

	// flee
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector FlockLocation = FVector((-1142.f, 828.f, 168.f));
	// flock
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector FleeLocation = FVector::ZeroVector;

	// curves

	// used when we roll for WaitTime
	UPROPERTY(EditDefaultsOnly)
	UCurveFloat *WaitCurve;
	// used when we roll for a new laziness
	UPROPERTY(EditDefaultsOnly)
	UCurveFloat *LazinessCurve;
	UPROPERTY(EditDefaultsOnly)
	UCurveFloat *SwerveSpeedCurve;
	UPROPERTY(EditDefaultsOnly)
	UCurveFloat *MoveSpeedCurve;


	// called when we check if we can move the roach or delete it
	UFUNCTION()
	bool CanPlayerSeeMe();

	private:

	class USceneComponent *PlayerCamera;

};