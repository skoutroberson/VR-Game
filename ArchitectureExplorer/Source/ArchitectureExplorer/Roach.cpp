// Fill out your copyright notice in the Description page of Project Settings.


#include "Roach.h"
#include "Kismet/KismetMathLibrary.h"
#include "Engine/World.h"
#include "DrawDebugHelpers.h"
#include "QuatRotLib.h"
#include "CollisionQueryParams.h"
#include "TimerManager.h"
#include "GameFramework/PlayerController.h"
#include "Kismet/GameplayStatics.h"
#include "VRCharacter.h"
#include "Components/CapsuleComponent.h"
#include "Components/BoxComponent.h"
#include "Camera/CameraComponent.h"

// Initialize static state structs
FStateInfo ARoach::IdleState(CockroachState::STATE_IDLE, &ARoach::EnterIdleState, &ARoach::ExitIdleState, &ARoach::TickIdleState);
FStateInfo ARoach::WaitState(CockroachState::STATE_WAIT, &ARoach::EnterWaitState, &ARoach::ExitWaitState, &ARoach::TickWaitState);
FStateInfo ARoach::MoveState(CockroachState::STATE_MOVE, &ARoach::EnterMoveState, &ARoach::ExitMoveState, &ARoach::TickMoveState);

// Sets default values
ARoach::ARoach()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	CurrentState = &MoveState;

	MovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("MovementComponent"));

	QueryParams.AddIgnoredActor(this);
	QueryParams.IgnoreMask = 3; // ignore all roach hits
}

// Called when the game starts or when spawned
void ARoach::BeginPlay()
{
	Super::BeginPlay();

	//UE_LOG(LogTemp, Warning, TEXT("YOOO"));

	World = GetWorld();

	Root = Cast<USphereComponent>(GetRootComponent());

	Radius = Root->GetScaledSphereRadius();

	MovementComponent->SetUpdatedComponent(Root);

	TArray<AActor*> RoachActors;
	UGameplayStatics::GetAllActorsOfClass(World, ARoach::StaticClass(), RoachActors);

	QueryParams.AddIgnoredActors(RoachActors);

	MoveSpeed = FMath::RandRange(MinMoveSpeed, MaxMoveSpeed);

	//Laziness = FMath::FRandRange(1.0f, 2.0f);
	Laziness = LazinessCurve->GetFloatValue(FMath::FRand());
	StartingLaziness = Laziness;

	bWiggleLeft = FMath::RandBool();

	WiggleRate = FMath::FRandRange(0.23f, 0.29f);
	//GetWorldTimerManager().SetTimer(WiggleTimerHandle, this, &ARoach::ChangeWiggleDirection, WiggleRate, true);
	//GetWorldTimerManager().SetTimer(SwerveTimerHandle, this, &ARoach::ChangeSwerveDirectionAndRate, SwerveRate, true);
	//GetWorldTimerManager().SetTimer(SwerveSpeedTimerHandle, this, &ARoach::ChangeSwerveSpeed, SwerveSpeedRate, true);
	GetWorldTimerManager().SetTimer(WaitTimerHandle, this, &ARoach::WaitIfRolled, WaitTime, true);
	GetWorldTimerManager().SetTimer(AntennaTimerHandle, this, &ARoach::RollNewAntennaRotations, AntennaRollRate, false);
	//GetWorldTimerManager().SetTimer(FleeFlockTimerHandle, this, &ARoach::FleeOrFlock, FleeFlockTimerRate, true, 0.2f);
	FleeOrFlock();

	UpdateAnimationSpeed(MoveSpeed);
	WaitIfRolled();
	//CurrentState.Enter.ExecuteIfBound();
	//(this->*(CurrentState.Enter))();
	//EnterState(CurrentState);

	PlayerCamera = Cast<USceneComponent>(
		UGameplayStatics::GetActorOfClass(
			World, AVRCharacter::StaticClass())->GetComponentByClass(
				UCameraComponent::StaticClass()));

	Cast<USphereComponent>(GetRootComponent())->SetMaskFilterOnBodyInstance(3); // for ignoring other roach sweeps
}

void ARoach::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);

	World->GetTimerManager().ClearAllTimersForObject(this);
}

void ARoach::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//DrawDebugLine(World, GetActorLocation(), GetActorLocation() + GetActorForwardVector() * 5.f, FColor::Cyan, false, DeltaTime * 1.1f);

	TickState(CurrentState, DeltaTime);
	
}

/*
void ARoach::ChangeState(CockroachState * NewState)
{
	check(State && NewState);

	State->Exit(*this);
	State = NewState;
	State->Enter(*this);
}
*/
void ARoach::PrintTest()
{
}

void ARoach::ChangeState(CockroachState NewState)
{
	ExitState(CurrentState);

	switch (NewState)
	{
	case CockroachState::STATE_IDLE:
		//CurrentState = &IdleState;
		break;
	case CockroachState::STATE_WAIT:
		//CurrentState = &WaitState;
		break;
	case CockroachState::STATE_MOVE:
		//CurrentState = &MoveState;
		break;
	case CockroachState::STATE_FALL:
		break;
	case CockroachState::STATE_COPULATE:
		break;
	default:
		break;
	}
	
	EnterState(CurrentState);
	StateEnum = NewState;
}

void ARoach::ChangeState(FStateInfo * NewState)
{
	ExitState(CurrentState);
	CurrentState = NewState;
	EnterState(NewState);

	// for debuggging
	switch (NewState->StateEnum)
	{
	case CockroachState::STATE_MOVE:
		StateEnum = CockroachState::STATE_MOVE;
		break;
	case CockroachState::STATE_WAIT:
		StateEnum = CockroachState::STATE_WAIT;
		break;
	}
}

void ARoach::EnterIdleState()
{
	//UE_LOG(LogTemp, Warning, TEXT("Yo whaddup jyosf"));
}

void ARoach::TickIdleState(float DeltaTime)
{
	//UE_LOG(LogTemp, Warning, TEXT("%s is IDLE"), *GetName());
}

void ARoach::TickWaitState(float DeltaTime)
{

	//if (bSlowingDown)
	//{
	//	SlowDown(DeltaTime);
	//	TickMoveState(DeltaTime);
	//}

	if (bRotateAntenna)
	{
		InterpAntennaRotations(DeltaTime);
	}
	//UE_LOG(LogTemp, Warning, TEXT("%s is Waiting"), *GetName());
}

void ARoach::TickMoveState(float DeltaTime)
{
	// speed up or slow down
	
	if (bSpeedingUp)
	{
		SpeedUp(DeltaTime);
	}
	else if (bSlowingDown)
	{
		SlowDown(DeltaTime);
		if (!bSlowingDown)
		{
			return;
		}
	}
	//UpdateAnimationSpeed(MoveSpeed);
	
	if (bMoveToGoal)
	{
		//DrawDebugPoint(World, GoalLocation, 10.f, FColor::Magenta, false, DeltaTime*1.1f, ESceneDepthPriorityGroup::SDPG_MAX);
		if (bClimbDown)
		{
			//UE_LOG(LogTemp, Warning, TEXT("Climbing down"));
			MoveToClimbDownPosition(DeltaTime);
		}
		else
		{
			//UE_LOG(LogTemp, Warning, TEXT("Moving to Goal"));
			MoveAndRotateToGoal(DeltaTime);
		}
		//DrawDebugPoint(World, GoalLocation, 5.f, FColor::Cyan, false, DeltaTime * 1.1f);
		//Wiggle(DeltaTime);
		if (!bSlowingDown)
		{
			Swerve(DeltaTime);
		}
	}
	else if (bTurn)
	{
		//UE_LOG(LogTemp, Warning, TEXT("Turning"));
		Turn(DeltaTime);
		bTurn = false;
	}
	else if (CheckForward(DeltaTime))
	{
		//UE_LOG(LogTemp, Warning, TEXT("Forward Hit"));
		//DrawDebugPoint(World, GoalLocation, 10.f, FColor::Red, false, DeltaTime*1.1f, ESceneDepthPriorityGroup::SDPG_MAX);
		bMoveToGoal = true;
		MoveAndRotateToGoal(DeltaTime);
	}
	else if (bTurn)
	{
		//UE_LOG(LogTemp, Warning, TEXT("Turning"));
		Turn(DeltaTime);
		bTurn = false;
	}
	else if(CheckDown(DeltaTime))
	{
		bMoveToGoal = true;

		if (bClimbDown)
		{
			//UE_LOG(LogTemp, Warning, TEXT("Climb Down Start"));
			//MoveToClimbDownPosition(DeltaTime);

			// maybe have a bClimbDown that we check first, if it is true then the roach moves to the climb down position?
			bMoveToGoal = false;
			bTurn = true;
			Turn(DeltaTime);

		}
		else
		{
			//DrawDebugPoint(World, GoalLocation, 10.f, FColor::Yellow, false, DeltaTime*1.1f, ESceneDepthPriorityGroup::SDPG_MAX);
			//UE_LOG(LogTemp, Warning, TEXT("Down Trace Hit"));
			MoveAndRotateToGoal(DeltaTime);
			//bMoveToGoal = true;
			//UE_LOG(LogTemp, Warning, TEXT("Wiggling"));
			//Wiggle(DeltaTime);
			if (!bSlowingDown)
			{
				Swerve(DeltaTime);
			}
			// swerve
			// wiggle
			// flock
			// avoid

		}
	}
	else
	{
		//UE_LOG(LogTemp, Warning, TEXT("Last Turn"));
		//bTurn = true;
		Turn(DeltaTime);
	}
	
	//DrawDebugPoint(World, GoalLocation, 5.f, FColor::Red, false, DeltaTime * 1.1f);
	//DrawDebugLine(World, GoalLocation, GoalLocation + GoalNormal * 10.f, FColor::Red, false, DeltaTime * 1.1f);

	DistanceMovedLastFrame = DistanceMovedThisFrame();
	LastFrameLocation = GetActorLocation();
	LastFrameForwardVector = GetActorForwardVector();

	// check if stuck
	if (DistanceMovedLastFrame < 0.0001f)
	{
		++StuckFrames;

		if (StuckFrames > 15)
		{
			StuckFrames = 15;
			//UE_LOG(LogTemp, Warning, TEXT("STUCKSTUCKSTUCK"));
			// Roach is "stuck"
		}
	}
	else
	{
		StuckFrames = 0;
	}

	//UE_LOG(LogTemp, Warning, TEXT("---------------------------------"));

	//if (bRotateAntenna)
	//{
	//	InterpAntennaRotations(DeltaTime);
	//}

	//DownTraceIterations = 0;
	bDoubleDip = true;
}

void ARoach::HitRigidBody(UPARAM(ref)FHitResult HitResult)
{
	//DrawDebugPoint(World, HitResult.ImpactPoint, 4.f, FColor::Magenta, false, World->DeltaTimeSeconds * 1.1f);

	// this will be used during MOVETOGOAL

	//UE_LOG(LogTemp, Warning, TEXT("Hit"));
}

void ARoach::SpeedUp(float DeltaTime)
{
	MoveSpeed = FMath::FInterpTo(MoveSpeed, MoveSpeedGoal, DeltaTime, 25.f); // I could add a random number generated in WaitIfRolled() and multiply it by the interp speed
	if (MoveSpeed == MoveSpeedGoal)
	{
		bSpeedingUp = false;
	}
	UpdateAnimationSpeed(MoveSpeed);
}

void ARoach::SlowDown(float DeltaTime)
{
	MoveSpeed = FMath::FInterpTo(MoveSpeed, MoveSpeedGoal, DeltaTime, 18.f);
	if (MoveSpeed <= 5.f)
	{
		bSlowingDown = false;
		bSpeedingUp = true;
		MoveSpeedGoal = FMath::RandRange(MinMoveSpeed, MaxMoveSpeed);
		//MoveSpeed = MoveSpeedGoal;
		ChangeState(&WaitState);
		UpdateAnimationSpeed(0);
		return;
	}
	UpdateAnimationSpeed(MoveSpeed);
}

void ARoach::Turn(float DeltaTime)
{
	//const bool bTurnLeft = (bTurnTheOtherWay) ? 1 : -1;

	const float TurnDirection = (bTurnLeft) ? -1.0f : 1.0f;

	const FVector Axis = GetActorUpVector() * TurnDirection;
	const FQuat DeltaRotation(Axis, HALF_PI);
	const FQuat ActorQuat = GetActorQuat();
	const FQuat NewRotation = DeltaRotation * ActorQuat;

	// this used to be MoveSpeed * 0.17f
	SetActorRotation(FMath::QInterpConstantTo(ActorQuat, NewRotation, DeltaTime, MoveSpeed * 0.08f));

	/*
	FRotator NewRotation = GetActorRotation();
	float ScaledYaw = NewRotation.Yaw + (TurnSpeed * DeltaTime * TurnDirection);
	NewRotation.Yaw = ScaledYaw;
	SetActorRotation(NewRotation);
	*/
}

void ARoach::MoveForward(float DeltaTime)
{
	
}

bool ARoach::ShouldAvoidCollision()
{
	TArray<FHitResult> LHits;
	TArray<FHitResult> RHits;

	const FVector AL = GetActorLocation();
	const FVector FV = GetActorForwardVector();
	const FVector RV = GetActorRightVector();
	const FVector UV = GetActorUpVector() * 0.1f;

	const FVector TSL = AL + UV - RV;
	const FVector TSR = AL + UV + RV;
	const FVector TE = AL + FV * 5.0f;

	bool bTraceL = World->LineTraceMultiByChannel(LHits, TSL, TE, ECollisionChannel::ECC_WorldStatic, QueryParams);
	bool bTraceR = World->LineTraceMultiByChannel(RHits, TSR, TE, ECollisionChannel::ECC_WorldStatic, QueryParams);

	//DrawDebugLine(World, TSL, TE, FColor::Green,)

	FVector AvoidDispSum = FVector::ZeroVector;

	if (bTraceL || bTraceR)
	{
		for (auto& HitResult : LHits)
		{
			const FVector Disp = AL - HitResult.ImpactPoint;
		}
	}

	return false;
}

bool ARoach::ShouldTurnImmediately()
{
	FHitResult HitResult;
	const FVector FV = GetActorForwardVector();
	const FVector UV = GetActorUpVector();
	const FVector AL = GetActorLocation();

	const FVector TS = AL + (FV * Radius) - (UV * Radius * 0.99f);
	const FVector TE = TS - (UV * Radius * 1.1f);

	bool bDownTrace = World->LineTraceSingleByChannel(HitResult, TS, TE, ECollisionChannel::ECC_WorldStatic, QueryParams);
	//DrawDebugLine(World, TS, TE, FColor::Green, false, World->DeltaTimeSeconds * 1.1f);

	if (!bDownTrace)
	{
		return true;
	}

	
	/*
	const FVector TE2 = TS + FV;

	bool bForwardTraceL = World->LineTraceSingleByChannel(HitResult, TS, TE2, ECollisionChannel::ECC_WorldStatic, QueryParams);
	bool bForwardTraceR = World->LineTraceSingleByChannel(HitResult, TS, TE2, ECollisionChannel::ECC_WorldStatic, QueryParams);

	if (bForwardTraceL)
	{
		return true;
	}
	*/
	return false;
}

/*
void ARoach::InitializeStates()
{
	IdleState.StateEnum = CockroachState::STATE_IDLE;
	IdleState.Enter = &ARoach::EnterIdleState;
	IdleState.Exit = &ARoach::ExitIdleState;
	IdleState.Tick = &ARoach::TickIdleState;
	WaitState.StateEnum = CockroachState::STATE_WAIT;
	WaitState.Enter = &ARoach::EnterWaitState;
	WaitState.Exit = &ARoach::ExitWaitState;
	WaitState.Tick = &ARoach::TickWaitState;
	MoveState.StateEnum = CockroachState::STATE_MOVE;
	MoveState.Enter = &ARoach::EnterMoveState;
	MoveState.Exit = &ARoach::ExitMoveState;
	MoveState.Tick = &ARoach::TickMoveState;
	CurrentState = &IdleState;
}
*/
void ARoach::ExitState(FStateInfo* State)
{
	(this->*(State->Exit))();
}

void ARoach::EnterState(FStateInfo* State)
{
	(this->*(State->Enter))();
}

void ARoach::TickState(FStateInfo* State, float DeltaTime)
{
	(this->*(State->Tick))(DeltaTime);
}

void ARoach::ClimbUp(FVector Normal)
{
	const FVector FV = GetActorForwardVector();
	const FVector RV = GetActorRightVector();
	const FVector UV = GetActorUpVector();

	const float Dot = FVector::DotProduct(UV, Normal);
	const float Angle = FMath::Acos(Dot);

	FVector Axis = FVector::CrossProduct(UV, Normal);
	if (Axis.Size() == 0)
	{
		Axis = GetActorRightVector();
	}

	const FQuat DeltaRotation = FQuat(Axis, Angle);
	const FQuat ActorQuat = GetActorQuat();
	const FQuat NewRotation = DeltaRotation * ActorQuat;

	/*
	float ClimbSpeed = FMath::Abs(Dot);

	if (ClimbSpeed < 0.1f)
	{
		ClimbSpeed = 0.1f;
	}
	*/
	//UE_LOG(LogTemp, Warning, TEXT("Climb"));

	
	SetActorRotation(NewRotation);
	
	//SetActorRotation(FMath::QInterpTo(ActorQuat, NewRotation, World->DeltaTimeSeconds, MoveSpeed * 0.5));
	
	
}

void ARoach::ClimbDown(float DeltaTime)
{
	const FVector Axis = -GetActorRightVector();
	const FQuat DeltaRotation = FQuat(Axis, PI);
	const FQuat ActorQuat = GetActorQuat();
	const FQuat NewRotation = DeltaRotation * ActorQuat;

	SetActorRotation(FMath::QInterpConstantTo(ActorQuat, NewRotation, DeltaTime, 1.0f));
}

bool ARoach::RotateToGroundNormal()
{
	FHitResult HitResult;
	FVector AL = GetActorLocation();
	FVector UV = GetActorUpVector();
	FVector TE = AL - UV * Radius * 3.f;

	bool bDownTrace = World->LineTraceSingleByChannel(HitResult, AL, TE, ECollisionChannel::ECC_WorldStatic, QueryParams);

	//DrawDebugLine(World, AL, TE, FColor::Red, true);

	if (bDownTrace)
	{
		//DrawDebugPoint(World, HitResult.ImpactPoint, 4.f, FColor::Green, true);
		const FVector Normal = HitResult.ImpactNormal;
		FVector FV = GetActorForwardVector();
		FVector Axis = FVector::CrossProduct(UV, Normal);
		Axis.Normalize();
		float Angle = FMath::Acos(FVector::DotProduct(Normal, UV));
		FQuat RotationQuat(Axis, Angle);
		FQuat ActorQuat = GetActorQuat();
		FQuat NewQuat = RotationQuat * ActorQuat;

		SetActorRotation(NewQuat);

		SetActorLocation(HitResult.ImpactPoint + GetActorUpVector() * Radius);

		return true;
	}
	return false;
}

bool ARoach::CheckSurfaceAtLocation(FVector Location, FHitResult &HitResult)
{
	const float TraceDistance = Radius * 3.f;
	const FVector UV = GetActorUpVector();

	return World->LineTraceSingleByChannel(HitResult, Location, Location - UV * TraceDistance, ECollisionChannel::ECC_WorldStatic, QueryParams);
}

void ARoach::MoveAndRotateToSurface(FHitResult &SurfaceInfo)
{
	const FVector UV = GetActorUpVector();
	const FVector Normal = SurfaceInfo.ImpactNormal;
	FVector FV = GetActorForwardVector();
	FVector Axis = FVector::CrossProduct(UV, Normal);
	Axis.Normalize();
	float Angle = FMath::Acos(FVector::DotProduct(Normal, UV));
	FQuat RotationQuat(Axis, Angle);
	FQuat ActorQuat = GetActorQuat();
	FQuat NewQuat = RotationQuat * ActorQuat;

	SetActorRotation(NewQuat);
	SetActorLocation(SurfaceInfo.ImpactPoint + SurfaceInfo.Normal * Radius, true);
}

bool ARoach::CheckForward(float DeltaTime)
{
	FVector AL = GetActorLocation();
	FVector FV = GetActorForwardVector();
	FQuat ActorQuat = GetActorQuat();
	GoalLocation = AL + FV * MoveSpeed * DeltaTime;
	FHitResult HitResult;
	FCollisionShape SweepSphere;
	SweepSphere.SetSphere(Radius * 0.3f);
	bool bSweep = World->SweepSingleByChannel(HitResult, AL, GoalLocation, ActorQuat, ECollisionChannel::ECC_WorldDynamic, SweepSphere, QueryParams);

	//UE_LOG(LogTemp, Warning, TEXT("Checking FOrward"));

	//DrawDebugPoint(World, GoalLocation, 4.f, FColor::Green, false, DeltaTime * 1.1f, ESceneDepthPriorityGroup::SDPG_MAX);

	if (bSweep)
	{
		AActor* HitActor = HitResult.GetActor();
		// check if the sweep hit an avoidance volume
		if (HitActor != nullptr && HitActor->ActorHasTag(FName("Avoid")))
		{
			FVector Disp = HitResult.ImpactPoint - AL;
			Disp.Normalize();
			const FVector RV = GetActorRightVector();
			const float TurnDot = FVector::DotProduct(Disp, RV);

			bTurnLeft = (TurnDot > 0) ? true : false;
			bSwerveLeft = bTurnLeft;
			bMoveToGoal = false;
			bTurn = true;

			return false;
		}

		GoalLocation = HitResult.ImpactPoint + HitResult.ImpactNormal * Radius;
		GoalNormal = HitResult.ImpactNormal;

		//UpdateTurnDirection(HitResult.ImpactNormal, false);

		return true;
	}

	return false;
}

bool ARoach::CheckDown(float DeltaTime)
{
	/*
	FVector AL = GetActorLocation();
	FVector UV = GetActorUpVector();
	FVector FV = GetActorForwardVector();
	FVector TS = GoalLocation;
	FVector TE = GoalLocation - UV * Radius * 1.5f; // Larger Radius Corner Traversal Problem: this might be a factor?
	const FQuat ActorQuat = GetActorQuat();
	FHitResult HitResult;

	FCollisionShape SweepSphere;
	SweepSphere.SetSphere(Radius * 0.3f);

	bool bDownSweep = World->SweepSingleByChannel(HitResult, TS, TE, ActorQuat, ECollisionChannel::ECC_WorldDynamic, SweepSphere, QueryParams);
	

	if (bDownSweep)
	{
		//DrawDebugPoint(World, HitResult.ImpactPoint, 10.f, FColor::Purple, false, DeltaTime * 1.1f);
		GoalLocation = HitResult.ImpactPoint + HitResult.ImpactNormal * Radius;
		GoalNormal = HitResult.ImpactNormal;

		//UpdateTurnDirection(HitResult.ImpactNormal, false);

		return true;
	}
	else
	{
		bDownSweep = World->SweepSingleByChannel(HitResult, TE, AL, ActorQuat, ECollisionChannel::ECC_WorldDynamic, SweepSphere, QueryParams);
		if (bDownSweep)
		{
			GoalLocation = HitResult.ImpactPoint + HitResult.ImpactNormal * Radius;
			GoalNormal = HitResult.ImpactNormal;
			return true;
		}
	}
	
	else
	{
		//uint8 DownTraceIterations = 0;
		TS = TE;

		//while (DownTraceIterations < MaxDownTraceIterations)
		//{
			//++DownTraceIterations;

			TE = AL - UV * Radius;

			//bDownSweep = World->LineTraceSingleByChannel(HitResult, TS, TE, ECollisionChannel::ECC_WorldStatic, QueryParams);
			bDownSweep = World->SweepSingleByChannel(HitResult, TS, TE, ActorQuat, ECollisionChannel::ECC_WorldDynamic, SweepSphere, QueryParams);

			if (bDownSweep)
			{
				//bClimbDown = true;
				ClimbDownLocation = GoalLocation + FV * Radius;
				//DrawDebugPoint(World, HitResult.ImpactPoint, 10.f, FColor::Purple, false, DeltaTime * 1.1f);
				GoalLocation = HitResult.ImpactPoint + HitResult.ImpactNormal * Radius;
				GoalNormal = HitResult.ImpactNormal;

				//UpdateTurnDirection(HitResult.ImpactNormal, true);

				return true;
			}
		//}
	}


	return false;
	
*/
	
	FVector AL = GetActorLocation();
	FVector UV = GetActorUpVector();
	FVector FV = GetActorForwardVector();
	FVector TS = GoalLocation;
	FVector TE = GoalLocation - UV * Radius * 2.f; // Larger Radius Corner Traversal Problem: this might be a factor?
	FHitResult HitResult;

	// I think I need to do a sphere sweep down and backwards to climb down stuff?

	bool bDownTrace = World->LineTraceSingleByChannel(HitResult, TS, TE, ECollisionChannel::ECC_WorldStatic, QueryParams);

	if (bDownTrace)
	{
		AActor* HitActor = HitResult.GetActor();
		if (HitActor != nullptr && HitActor->ActorHasTag(FName("Avoid")))
		{
			return false;
		}

		//DrawDebugPoint(World, HitResult.ImpactPoint, 10.f, FColor::Purple, false, DeltaTime * 1.1f);
		GoalLocation = HitResult.ImpactPoint + HitResult.ImpactNormal * Radius;
		GoalNormal = HitResult.ImpactNormal;

		//UpdateTurnDirection(HitResult.ImpactNormal, false);

		return true;
	}
	else
	{
		uint8 DownTraceIterations = 0;
		TS = TE;

		while (DownTraceIterations < MaxDownTraceIterations)
		{
			++DownTraceIterations;

			TE = AL - UV * DownTraceIterations;

			bDownTrace = World->LineTraceSingleByChannel(HitResult, TS, TE, ECollisionChannel::ECC_WorldStatic, QueryParams);

			if (bDownTrace)
			{
				AActor* HitActor = HitResult.GetActor();
				if (HitActor != nullptr && HitActor->ActorHasTag(FName("Avoid")))
				{
					return false;
				}
				//bClimbDown = true;
				ClimbDownLocation = GoalLocation + FV * Radius;
				//DrawDebugPoint(World, HitResult.ImpactPoint, 10.f, FColor::Purple, false, DeltaTime * 1.1f);
				GoalLocation = HitResult.ImpactPoint + HitResult.ImpactNormal * Radius;
				GoalNormal = HitResult.ImpactNormal;

				//UpdateTurnDirection(HitResult.ImpactNormal, true);

				return true;
			}
		}
	}

	
	return false;

}

void ARoach::MoveToGoal(float DeltaTime)
{
	const FVector AL = GetActorLocation();
	//FMath::VInterpConstantTo(AL, GoalLocation, DeltaTime, MoveSpeed * 0.1f);
	SetActorLocation(GoalLocation, true);
	
}

void ARoach::MoveAndRotateToGoal(float DeltaTime)
{
	// sweep to GoalLocation (ignoring scrapes)
	// if sweep doesn't hit
	FVector AL = GetActorLocation();
	FQuat ActorQuat = GetActorQuat();
	FHitResult HitResult;
	FCollisionShape SweepSphere;
	SweepSphere.SetSphere(Radius * 0.3f);

	const FVector UV = GetActorUpVector();
	FVector FV = GetActorForwardVector();
	FVector Axis = FVector::CrossProduct(UV, GoalNormal);
	Axis.Normalize();
	float Angle = FMath::Acos(FVector::DotProduct(GoalNormal, UV));
	FQuat RotationQuat(Axis, Angle);

	FQuat NewQuat = RotationQuat * ActorQuat;


	//SetActorRotation(FMath::QInterpConstantTo(ActorQuat, NewQuat, DeltaTime, MoveSpeed * 0.3f));
	//SetActorLocation(FMath::VInterpConstantTo(AL, GoalLocation, DeltaTime, MoveSpeed * 0.6f));
	
	//DrawDebugPoint(World, GoalLocation, 10.f, FColor::Magenta, false, DeltaTime*1.1f);
	
	bool bSweep = World->SweepSingleByChannel(HitResult, AL, GoalLocation, ActorQuat, ECollisionChannel::ECC_WorldStatic, SweepSphere, QueryParams);
	//bool bSweep = false;

	if (bSweep)
	{
		bMoveToGoal = false;
		//UE_LOG(LogTemp, Warning, TEXT("Goal blocked. New Goal inbound."));

		//UpdateTurnDirection(HitResult.ImpactNormal, true);

		bTurn = true;
		Turn(DeltaTime);
		//GoalLocation = HitResult.ImpactPoint + HitResult.ImpactNormal * Radius;
		//GoalNormal = HitResult.ImpactNormal;
	}
	else
	{
		//SetActorRotation(FMath::QInterpConstantTo(ActorQuat, NewQuat, DeltaTime, MoveSpeed * 0.08f));

		//SetActorLocation(FMath::VInterpConstantTo(AL, GoalLocation, DeltaTime, MoveSpeed * 0.3f));

		//const FQuat NewRotation = FMath::QInterpConstantTo(ActorQuat, NewQuat, DeltaTime, MoveSpeed * 0.08f);
		//const FVector NewLocation = FMath::VInterpConstantTo(AL, GoalLocation, DeltaTime, MoveSpeed * 0.3f);

		const FQuat NewRotation = FMath::QInterpConstantTo(ActorQuat, NewQuat, DeltaTime, MoveSpeed * 0.08f);
		const FVector NewLocation = FMath::VInterpConstantTo(AL, GoalLocation, DeltaTime, MoveSpeed * 0.25f);

		SetActorLocationAndRotation(NewLocation, NewRotation);

		//SetActorLocationAndRotation(GoalLocation, NewQuat, false);

		//UE_LOG(LogTemp, Warning, TEXT("Actually moving to goal."));
		//SetActorRotation(NewQuat);
		//SetActorLocation(GoalLocation);

		//bMoveToGoal = false;
	}

	float DistanceFromGoal = FVector::Distance(AL, GoalLocation);
	float AngleFromGoal = FVector::DotProduct(GetActorUpVector(), GoalNormal);
	
	if (DistanceFromGoal < 0.01f && AngleFromGoal > 0.99f)
	{
		bMoveToGoal = false;
	}
	
	if (!bDoubleDip)
	{
		// is there a better way to do all of this:
		
		if (DistanceFromGoal < 0.01f && AngleFromGoal > 0.99f)
		{
			bDoubleDip = true;
			//UE_LOG(LogTemp, Warning, TEXT("Move To Goal Completed"));
			bMoveToGoal = false;

			// i have to add this here so the roach doesn't stop moving if it just made it this frame (gotta be a better way to do this)
			if (CheckForward(DeltaTime))
			{
				//UE_LOG(LogTemp, Warning, TEXT("Forward Hit"));
				bMoveToGoal = true;
				MoveAndRotateToGoal(DeltaTime);
			}
			else if (CheckDown(DeltaTime))
			{
				bMoveToGoal = true;

				if (bClimbDown)
				{
					//UE_LOG(LogTemp, Warning, TEXT("Climb Down Start"));
					MoveToClimbDownPosition(DeltaTime);
				}
				else
				{
					//UE_LOG(LogTemp, Warning, TEXT("Down Trace Hit"));
					MoveAndRotateToGoal(DeltaTime);
				}
			}
			else
			{
				//UE_LOG(LogTemp, Warning, TEXT("Last Turn"));
				bTurn = true;
				Turn(DeltaTime);
			}
		}
	}
}

void ARoach::UpdateTurnDirection(FVector ImpactNormal, bool bDownTrace)
{
	const float DotMultiplier = (bDownTrace) ? 1.0f : -1.0f;
	const float RDot = FVector::DotProduct(GetActorRightVector(), ImpactNormal) * DotMultiplier;
	bTurnLeft = (RDot > 0) ? true : false;
}

void ARoach::MoveToClimbDownPosition(float DeltaTime)
{
	const FVector AL = GetActorLocation();

	float DistanceFromGoal = FVector::Distance(AL, ClimbDownLocation);
	if (DistanceFromGoal < 0.1f)
	{
		bClimbDown = false;
	}
	else
	{
		const FVector UV = GetActorUpVector();
		FVector FV = GetActorForwardVector();
		FVector Axis = FVector::CrossProduct(UV, GoalNormal);
		Axis.Normalize();
		float Angle = FMath::Acos(FVector::DotProduct(GoalNormal, UV));
		FQuat RotationQuat(Axis, Angle);
		FQuat ActorQuat = GetActorQuat();
		FQuat NewQuat = RotationQuat * ActorQuat;
		SetActorRotation(FMath::QInterpConstantTo(ActorQuat, NewQuat, DeltaTime, MoveSpeed * 0.08f));
		SetActorLocation(FMath::VInterpConstantTo(AL, ClimbDownLocation, DeltaTime, MoveSpeed * 0.4f));
	}
}

float ARoach::DistanceMovedThisFrame()
{
	float D = FVector::Distance(GetActorLocation(), LastFrameLocation);
	//float Dot = 200.0f * (1.0f - FVector::DotProduct(GetActorForwardVector(), LastFrameForwardVector));

	//UE_LOG(LogTemp, Warning, TEXT("Dist: %f"), D);
	//UE_LOG(LogTemp, Warning, TEXT("Dot: %f"), Dot);

	return D;
}

void ARoach::ChangeWiggleDirection()
{
	//UE_LOG(LogTemp, Warning, TEXT("Change Wiggle: %d"), bWiggleLeft);
	bWiggleLeft = (bWiggleLeft) ? false : true;
	//WiggleRate = FMath::FRandRange(0.2f, MoveSpeed / 50.f);
	//GetWorldTimerManager().SetTimer(WiggleTimerHandle, this, &ARoach::ChangeWiggleDirection, WiggleRate, false);
}

void ARoach::Wiggle(float DeltaTime)
{
	const FVector Axis = GetActorUpVector();
	const float Angle = (bWiggleLeft) ? HALF_PI : -HALF_PI;
	FQuat RotationQuat(Axis, Angle);
	FQuat ActorQuat = GetActorQuat();
	FQuat NewQuat = RotationQuat * ActorQuat;
	SetActorRotation(FMath::QInterpConstantTo(ActorQuat, NewQuat, DeltaTime, MoveSpeed / 40.f));
}

void ARoach::ChangeSwerveDirectionAndRate()
{
	//UE_LOG(LogTemp, Warning, TEXT("Swerve"));

	// MAKE IT 1 IN 4 CHANCE THAT THE ROACH DOESN'T CHANGE DIRECTION

	int r = FMath::RandRange(0, 4);

	if (r)
	{
		bSwerveLeft = !bSwerveLeft;
	}

	/*
	bool bLastSwerveLeft = bSwerveLeft;
	bSwerveLeft = FMath::RandBool();
	if (bSwerveLeft == bLastSwerveLeft)
	{
		bSwerveLeft = FMath::RandBool();
	}
	*/
	SwerveRate = UKismetMathLibrary::RandomFloatInRange(0.0f, WaitTime * 0.5f);
	//World->GetTimerManager().SetTimer(SwerveTimerHandle, this, &ARoach::ChangeSwerveDirectionAndRate, 0.1f, false, SwerveRate);
}

void ARoach::Swerve(float DeltaTime)
{
	const FVector Axis = GetActorUpVector();
	const float Angle = (bSwerveLeft) ? HALF_PI : -HALF_PI;
	FQuat RotationQuat(Axis, Angle);
	FQuat ActorQuat = GetActorQuat();
	FQuat NewQuat = RotationQuat * ActorQuat;
	SetActorRotation(FMath::QInterpTo(ActorQuat, NewQuat, DeltaTime, SwerveSpeed));
}

void ARoach::ChangeSwerveSpeed()
{
	int r = FMath::RandRange(0, 7);
	if (r != 0)
	{
		bSwerveLeft = !bSwerveLeft;
	}
	//SwerveSpeed = (2.8f - WaitTime) * 1.6f;
	SwerveSpeed = SwerveSpeedCurve->GetFloatValue(FMath::FRand());
	SwerveSpeedRate = SwerveSpeed * 0.2f + 0.2f;
	//World->GetTimerManager().SetTimer(SwerveSpeedTimerHandle, this, &ARoach::ChangeSwerveSpeed, 0.1f, false, SwerveSpeedRate);
}

void ARoach::WaitIfRolled()
{
	//UE_LOG(LogTemp, Warning, TEXT("WaitIFROLLED"));
	//SetActorTickEnabled(true);
	bool bRoll = FMath::RandBool();

	if (bRoll)
	{
		//SetActorTickEnabled(false);

		//ChangeState(&WaitState);
		//UpdateAnimationSpeed(0);
		bSpeedingUp = false;
		bSlowingDown = true;
		//MoveSpeed = FMath::RandRange(MinMoveSpeed, MaxMoveSpeed);
		//MoveSpeed = 20.f;
		//MoveSpeed = 0;
		MoveSpeedGoal = 3.f;

		int bRoll2 = FMath::RandRange(0, 15 - FMath::CeilToInt(Laziness));

		if (bRoll2)
		{
			WaitTime = FMath::RandRange(0.2f, Laziness);
		}
		else
		{
			WaitTime = FMath::RandRange(Laziness, (Laziness * Laziness) * 0.5f);
			Laziness = StartingLaziness;
		}

		World->GetTimerManager().SetTimer(WaitTimerHandle, this, &ARoach::WaitIfRolled, 0.1f, false, WaitTime);
	}
	else
	{
		ChangeState(&MoveState);
		//Laziness = FMath::FRandRange(1.0f, 2.0f);
		Laziness = LazinessCurve->GetFloatValue(FMath::FRand());
		//WaitTime = FMath::RandRange(0.1f, (10.f - Laziness) * 0.25f);
		WaitTime = WaitCurve->GetFloatValue(FMath::FRand());
		World->GetTimerManager().SetTimer(WaitTimerHandle, this, &ARoach::WaitIfRolled, 0.1f, false, WaitTime);
		ChangeSwerveSpeed();
		//MoveSpeedGoal = FMath::RandRange(MinMoveSpeed, MaxMoveSpeed);
		MoveSpeedGoal = MoveSpeedCurve->GetFloatValue(FMath::FRand());
		bSpeedingUp = true;
	}
}

void ARoach::InterpAntennaRotations(float DeltaTime)
{
	LeftAntennaYRotation = FMath::FInterpConstantTo(LeftAntennaYRotation, LeftAntennaYGoal, DeltaTime, AntennaRotationSpeed * LeftAntennaSpeedMultiplier);
	LeftAntennaZRotation = FMath::FInterpConstantTo(LeftAntennaZRotation, LeftAntennaZGoal, DeltaTime, AntennaRotationSpeed * LeftAntennaSpeedMultiplier);
	RightAntennaYRotation = FMath::FInterpConstantTo(RightAntennaYRotation, RightAntennaYGoal, DeltaTime, AntennaRotationSpeed * RightAntennaSpeedMultiplier);
	RightAntennaZRotation = FMath::FInterpConstantTo(RightAntennaZRotation, RightAntennaZGoal, DeltaTime, AntennaRotationSpeed * RightAntennaSpeedMultiplier);
}

void ARoach::RollNewAntennaRotations()
{
	//UE_LOG(LogTemp, Warning, TEXT("ROlling antenae"));
	LeftAntennaSpeedMultiplier = FMath::FRandRange(0.8f, 1.2f);
	RightAntennaSpeedMultiplier = FMath::FRandRange(0.8f, 1.2f);
	LeftAntennaYGoal = FMath::FRandRange(AntennaMinY, AntennaMaxY);
	LeftAntennaZGoal = FMath::FRandRange(AntennaMinZ, AntennaMaxZ);
	RightAntennaYGoal = FMath::FRandRange(AntennaMinY, AntennaMaxY);
	RightAntennaZGoal = FMath::FRandRange(AntennaMinZ, AntennaMaxZ);
	AntennaRollRate = FMath::FRandRange(0.1f, 0.18f);
	GetWorldTimerManager().SetTimer(AntennaTimerHandle, this, &ARoach::RollNewAntennaRotations, AntennaRollRate, false, AntennaRollRate);
}

void ARoach::Flee()
{
	const FVector AL = GetActorLocation();
	const FVector RV = GetActorRightVector();
	const FVector FV = GetActorForwardVector();
	FVector Disp = FlockLocation - AL;
	Disp.Normalize();

	float VisionDot = FVector::DotProduct(FV, Disp);

	//if (VisionDot > 0.2f)
	//{
	float FleeDot = FVector::DotProduct(RV, Disp);
	bSwerveLeft = (FleeDot > 0) ? false : true;
}

void ARoach::Flock()
{
	const FVector AL = GetActorLocation();
	const FVector RV = GetActorRightVector();
	const FVector FV = GetActorForwardVector();
	FVector Disp = FlockLocation - AL;
	Disp.Normalize();

	float VisionDot = FVector::DotProduct(FV, Disp);

	//if (VisionDot > 0.2f)
	//{
	float FleeDot = FVector::DotProduct(RV, Disp);
	bSwerveLeft = (FleeDot > 0) ? true : false;
	//}


	//bTurnLeft = bSwerveLeft;
}

void ARoach::FleeOrFlock()
{
	// I think I need to put flee/flock behavior in a timer
	if (bFlee)
	{
		Flee();
	}
	else if (bFlock)
	{
		Flock();
	}
	// need to create a FleeFlockMinRate and MaxRate
	FleeFlockTimerRate = FMath::FRandRange(0.2f, 0.5f);
	//WaitIfRolled();
	GetWorldTimerManager().SetTimer(FleeFlockTimerHandle, this, &ARoach::FleeOrFlock, FleeFlockTimerRate, false, FleeFlockTimerRate);
}

bool ARoach::CanPlayerSeeMe()
{
	// dot product from player camera to roach location
	// if dot is over 0.33 return true. This is around 140 degrees FOV

	#define HMD_MAX_FOV 0.33f

	const FVector AL = GetActorLocation();
	const FVector CL = PlayerCamera->GetComponentLocation();
	const FVector Disp = (AL - CL).GetSafeNormal();
	const FVector CFV = PlayerCamera->GetForwardVector();
	const float Dot = FVector::DotProduct(CFV, Disp);

	if (Dot > HMD_MAX_FOV)
	{
		FHitResult HitResult;
		bool bTrace = World->LineTraceSingleByChannel(HitResult, CL, AL, ECollisionChannel::ECC_WorldDynamic, QueryParams);

		if (!bTrace)
		{
			return true;
		}
	}

	return false;
}
