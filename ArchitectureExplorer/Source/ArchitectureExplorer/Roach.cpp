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

	World = GetWorld();

	Root = Cast<USphereComponent>(GetRootComponent());

	Radius = Root->GetScaledSphereRadius();

	MovementComponent->SetUpdatedComponent(Root);

	TArray<AActor*> RoachActors;
	UGameplayStatics::GetAllActorsOfClass(World, ARoach::StaticClass(), RoachActors);

	QueryParams.AddIgnoredActors(RoachActors);

	MoveSpeed = FMath::RandRange(MinMoveSpeed, MaxMoveSpeed);

	Laziness = FMath::FRandRange(2.0f, 8.0f);
	StartingLaziness = Laziness;

	bWiggleLeft = FMath::RandBool();

	WiggleRate = FMath::FRandRange(0.23f, 0.29f);
	//GetWorldTimerManager().SetTimer(WiggleTimerHandle, this, &ARoach::ChangeWiggleDirection, WiggleRate, true);
	//GetWorldTimerManager().SetTimer(SwerveTimerHandle, this, &ARoach::ChangeSwerveDirectionAndRate, SwerveRate, true);
	//GetWorldTimerManager().SetTimer(SwerveSpeedTimerHandle, this, &ARoach::ChangeSwerveSpeed, SwerveSpeedRate, true);
	GetWorldTimerManager().SetTimer(WaitTimerHandle, this, &ARoach::WaitIfRolled, WaitTime, true);

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
	//UE_LOG(LogTemp, Warning, TEXT("%s is Waiting"), *GetName());
}

void ARoach::TickMoveState(float DeltaTime)
{
	UpdateAnimationSpeed(MoveSpeed);
	if (bMoveToGoal)
	{
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
		Swerve(DeltaTime);
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
		bMoveToGoal = true;
		MoveAndRotateToGoal(DeltaTime);
	}
	else if(CheckDown(DeltaTime))
	{
		bMoveToGoal = true;

		if (bClimbDown)
		{
			//UE_LOG(LogTemp, Warning, TEXT("Climb Down Start"));
			//MoveToClimbDownPosition(DeltaTime);
			bMoveToGoal = false;
			bTurn = true;
			Turn(DeltaTime);

		}
		else
		{
			//UE_LOG(LogTemp, Warning, TEXT("Down Trace Hit"));
			MoveAndRotateToGoal(DeltaTime);
			//UE_LOG(LogTemp, Warning, TEXT("Wiggling"));
			//Wiggle(DeltaTime);
			Swerve(DeltaTime);
			// swerve
			// wiggle
			// flock
			// avoid

		}
	}
	else
	{
		//UE_LOG(LogTemp, Warning, TEXT("Last Turn"));
		bTurn = true;
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
			//UE_LOG(LogTemp, Warning, TEXT("STUCKSTUCKSTUCK"));
			// Roach is "stuck"
		}
	}
	else
	{
		StuckFrames = 0;
	}

	//UE_LOG(LogTemp, Warning, TEXT("---------------------------------"));

	DownTraceIterations = 0;
}

void ARoach::HitRigidBody(UPARAM(ref)FHitResult HitResult)
{
	//DrawDebugPoint(World, HitResult.ImpactPoint, 4.f, FColor::Magenta, false, World->DeltaTimeSeconds * 1.1f);

	// this will be used during MOVETOGOAL

	//UE_LOG(LogTemp, Warning, TEXT("Hit"));
}

void ARoach::Turn(float DeltaTime)
{
	//const bool bTurnLeft = (bTurnTheOtherWay) ? 1 : -1;

	const float TurnDirection = (bTurnLeft) ? -1.0f : 1.0f;

	const FVector Axis = GetActorUpVector() * TurnDirection;
	const FQuat DeltaRotation(Axis, HALF_PI);
	const FQuat ActorQuat = GetActorQuat();
	const FQuat NewRotation = DeltaRotation * ActorQuat;

	SetActorRotation(FMath::QInterpConstantTo(ActorQuat, NewRotation, DeltaTime, MoveSpeed * 0.2f));

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
	DrawDebugLine(World, TS, TE, FColor::Green, false, World->DeltaTimeSeconds * 1.1f);

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
		DrawDebugPoint(World, HitResult.ImpactPoint, 4.f, FColor::Green, true);
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
	SweepSphere.SetSphere(Radius * 0.8f);
	bool bSweep = World->SweepSingleByChannel(HitResult, AL, GoalLocation, ActorQuat, ECollisionChannel::ECC_WorldDynamic, SweepSphere, QueryParams);

	//DrawDebugPoint(World, GoalLocation, 4.f, FColor::Black, false, DeltaTime * 1.1f);

	if (bSweep)
	{
		GoalLocation = HitResult.ImpactPoint + HitResult.ImpactNormal * Radius;
		GoalNormal = HitResult.ImpactNormal;

		//UpdateTurnDirection(HitResult.ImpactNormal, false);

		return true;
	}

	return false;
}

bool ARoach::CheckDown(float DeltaTime)
{
	FVector AL = GetActorLocation();
	FVector UV = GetActorUpVector();
	FVector FV = GetActorForwardVector();
	FVector TS = GoalLocation;
	FVector TE = GoalLocation - UV * Radius * 2.f;
	FHitResult HitResult;

	bool bDownTrace = World->LineTraceSingleByChannel(HitResult, TS, TE, ECollisionChannel::ECC_WorldStatic, QueryParams);

	if (bDownTrace)
	{
		//DrawDebugPoint(World, HitResult.ImpactPoint, 10.f, FColor::Purple, false, DeltaTime * 1.1f);
		GoalLocation = HitResult.ImpactPoint + HitResult.ImpactNormal * Radius;
		GoalNormal = HitResult.ImpactNormal;

		//UpdateTurnDirection(HitResult.ImpactNormal, false);

		return true;
	}
	else
	{
		TS = TE;
		while (DownTraceIterations < MaxDownTraceIterations)
		{
			++DownTraceIterations;

			TE = AL - UV * DownTraceIterations;

			bDownTrace = World->LineTraceSingleByChannel(HitResult, TS, TE, ECollisionChannel::ECC_WorldStatic, QueryParams);

			if (bDownTrace)
			{
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
	SweepSphere.SetSphere(Radius * 0.4f);

	const FVector UV = GetActorUpVector();
	FVector FV = GetActorForwardVector();
	FVector Axis = FVector::CrossProduct(UV, GoalNormal);
	Axis.Normalize();
	float Angle = FMath::Acos(FVector::DotProduct(GoalNormal, UV));
	FQuat RotationQuat(Axis, Angle);

	FQuat NewQuat = RotationQuat * ActorQuat;


	//SetActorRotation(FMath::QInterpConstantTo(ActorQuat, NewQuat, DeltaTime, MoveSpeed * 0.3f));
	//SetActorLocation(FMath::VInterpConstantTo(AL, GoalLocation, DeltaTime, MoveSpeed * 0.6f));
	
	
	
	bool bSweep = World->SweepSingleByChannel(HitResult, AL, GoalLocation, ActorQuat, ECollisionChannel::ECC_WorldStatic, SweepSphere, QueryParams);

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
		SetActorRotation(FMath::QInterpConstantTo(ActorQuat, NewQuat, DeltaTime, MoveSpeed * 0.08f));
		SetActorLocation(FMath::VInterpConstantTo(AL, GoalLocation, DeltaTime, MoveSpeed * 0.4));

		//UE_LOG(LogTemp, Warning, TEXT("Actually moving to goal."));
		//SetActorRotation(NewQuat);
		//SetActorLocation(GoalLocation);

		//bMoveToGoal = false;
	}
	
	float DistanceFromGoal = FVector::Distance(AL, GoalLocation);
	float AngleFromGoal = FVector::DotProduct(GetActorUpVector(), GoalNormal);
	if (DistanceFromGoal < 0.01f && AngleFromGoal > 0.99f)
	{
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
	bool bLastSwerveLeft = bSwerveLeft;
	bSwerveLeft = FMath::RandBool();
	if (bSwerveLeft == bLastSwerveLeft)
	{
		bSwerveLeft = FMath::RandBool();
	}
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
	SetActorRotation(FMath::QInterpConstantTo(ActorQuat, NewQuat, DeltaTime, SwerveSpeed));
}

void ARoach::ChangeSwerveSpeed()
{
	bSwerveLeft = UKismetMathLibrary::RandomBool();
	SwerveSpeed = (2.8f - WaitTime) * 1.3f;
	SwerveSpeedRate = SwerveSpeed * 0.2f + 0.2f;
	//World->GetTimerManager().SetTimer(SwerveSpeedTimerHandle, this, &ARoach::ChangeSwerveSpeed, 0.1f, false, SwerveSpeedRate);
}

void ARoach::WaitIfRolled()
{
	UE_LOG(LogTemp, Warning, TEXT("WaitIFROLLED"));
	SetActorTickEnabled(true);
	bool bRoll = FMath::RandBool();

	if (bRoll)
	{
		SetActorTickEnabled(false);
		UpdateAnimationSpeed(0);
		MoveSpeed = FMath::RandRange(MinMoveSpeed, MaxMoveSpeed);

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
		Laziness = FMath::FRandRange(1.0f, 8.0f);
		WaitTime = FMath::RandRange(0.2f, (10.f - Laziness) * 0.3f);
		World->GetTimerManager().SetTimer(WaitTimerHandle, this, &ARoach::WaitIfRolled, 0.1f, false, WaitTime);
		ChangeSwerveSpeed();
	}
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
		return true;
	}

	return false;
}
