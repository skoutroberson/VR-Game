// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SphereComponent.h"
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

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere)
	class USceneComponent* RoachRoot;

	void PrintTest();

	// state stuff

	// this is needed mainly for visualization in the editor
	UPROPERTY(EditAnywhere)
	CockroachState StateEnum;
	
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
	float MoveSpeed = 5.f;

	FCollisionQueryParams QueryParams;


	void InitializeStates();
	// helper functions to make function pointer call easier
	void ExitState(FStateInfo *State);
	void EnterState(FStateInfo *State);
	void TickState(FStateInfo *State, float DeltaTime);

};