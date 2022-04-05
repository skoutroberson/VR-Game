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

	QueryParams.AddIgnoredActor(this);
}

// Called when the game starts or when spawned
void ARoach::BeginPlay()
{
	Super::BeginPlay();

	World = GetWorld();

	Root = Cast<USphereComponent>(GetRootComponent());

	//CurrentState.Enter.ExecuteIfBound();
	//(this->*(CurrentState.Enter))();
	//EnterState(CurrentState);
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
	UE_LOG(LogTemp, Warning, TEXT("Yo whaddup jyosf"));
}

void ARoach::TickIdleState(float DeltaTime)
{
	UE_LOG(LogTemp, Warning, TEXT("%s is IDLE"), *GetName());
}

void ARoach::TickWaitState(float DeltaTime)
{
	UE_LOG(LogTemp, Warning, TEXT("%s is Waiting"), *GetName());
}

void ARoach::TickMoveState(float DeltaTime)
{
	if (ShouldTurnImmediately())
	{
		Turn(DeltaTime);
	}
	else
	{
		MoveForward(DeltaTime);
		/** 
		MoveForward();
		//Swerve();
		//Wiggle();

		// flock or flee based on public boolean
		*/	
	}
}

void ARoach::HitRigidBody(UPARAM(ref)FHitResult HitResult)
{
	const FVector AL = GetActorLocation();
	FVector Disp = AL - HitResult.ImpactPoint;
	Disp.Z = 0;
	float DispSize = Disp.Size2D();

	FVector DispNormal = Disp.GetSafeNormal();
	
	float OffsetSize = Root->GetScaledSphereRadius() - DispSize;

	Turn(World->DeltaTimeSeconds);

	AddActorWorldOffset(DispNormal * OffsetSize);
}

void ARoach::Turn(float DeltaTime)
{
	const bool bTurnLeft = (bTurnTheOtherWay) ? 1 : -1;

	FRotator NewRotation = GetActorRotation();

	float ScaledYaw = NewRotation.Yaw + (TurnSpeed * DeltaTime * bTurnLeft);
	NewRotation.Yaw = ScaledYaw;
	
	SetActorRotation(NewRotation);

	FHitResult HitResult;
	const FVector UV = GetActorUpVector();
	const FVector TS = GetActorLocation() + (UV * 0.1f);
	const FVector TE = TS - (UV * 2.f);

	/*
	bool bDownTrace = World->LineTraceSingleByChannel(HitResult, TS, TE, ECollisionChannel::ECC_WorldStatic, QueryParams);

	if (!bDownTrace)
	{
		if (bTurnTheOtherWay)
		{
			bTurnTheOtherWay = false;
		}
		else
		{
			bTurnTheOtherWay = true;
		}
		// change state to wait
	}
	*/
}

void ARoach::MoveForward(float DeltaTime)
{
	const FVector FV = GetActorForwardVector();
	AddActorWorldOffset(FV * MoveSpeed * DeltaTime, true);
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
	const FVector FV = GetActorForwardVector() * 4.f;
	const FVector UV = GetActorUpVector();
	const FVector AL = GetActorLocation();

	const FVector TS = AL + FV + (UV * 0.1f);
	const FVector TE = TS - (UV * 2.6f);

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