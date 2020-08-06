// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CollisionQueryParams.h"
#include "Roach.generated.h"

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

public:
	//	Corner traversal movement and rotation stuff
	void SetGoalLocation(FVector Location);
	void SetGoalRotation(FVector_NetQuantizeNormal NormalVector);

public:
	//	New Code

	FHitResult LeftHitResult;
	FHitResult RightHitResult;

	FVector MovementDirection = FVector::ZeroVector;

	bool CheckSideCollision();
	void CalcGoalQuat(FVector GoalVec);
	void RotateToGoalRot(float DeltaTime);
	void MoveToGoalLoc(float DeltaTime);

	FQuat GoalQuat;
	FVector GoalVec;

	int PosNegYaw = 0;
	void Turn(float DeltaTime, bool Right);
	

	void Move(FVector Direction, float DeltaTime);

private:

	float AngleBetweenVectors(FVector A, FVector B);

	bool MoveToGoal = false;
	bool RotateToGoal = false;

	bool DontMove = false;

	bool Stuck = false;
	void UnStick(float DeltaTime);

	FVector GoalLocation = FVector::ZeroVector;
	FQuat GoalRotation;

	void MoveAndRotateToGoal(float DeltaTime);

public:

	int WaitrCount = 0;

	//	Move forward
	void Move(float DeltaTime);
	void Move(float DeltaTime, float OSpeed);

	// For making the roach parallel to the plane it is walking on
	void ZeroRoll(float DeltaTime);

	bool CheckFront();
	bool CheckDown();

	void RotateToNormal(FVector_NetQuantizeNormal NormalVector);
	float CurrentTraceLength = 0;

	void TraverseCorner(float DeltaTime, bool Down);
	
	void Swerve(float DeltaTime);
	void NewDeltaYaw();
	void NewSpeed();
	bool ShouldWait();

	void Fall(float DeltaTime);
	float FallTime = 0;
	bool IsFalling = false;

	UFUNCTION()
	void StopWait();

	UFUNCTION()
	void ReachedGoal();

	void ComputeLaziness();
	void FleePlayer(float DeltaTime);

	void MoveDown(float DeltaTime);

private:

	float RoachLength = 13.f;
	float RoachWidth = 4.f;
	float Speed = 100.f;
	float RotSpeed = 20.f;

	//	A smaller laziness value makes the roach more lazy! DONT MAKE THIS ZERO!
	int Laziness = 1;

	float DeltaYaw = 0.f;

	bool TraversingUpCorner;
	bool TraversingDownCorner;
	
	FVector TurnPoint = FVector::ZeroVector;


	FHitResult HitResult;
	FHitResult FrontHit;
	//	I think for all of the classes I am doing line traces in, I want to check if I am querying too many things
	FCollisionQueryParams RoachParams;

	FTimerHandle GoalTimerHandle;
	FTimerHandle WaitTimerHandle;
	float GoalTimerRate;
	void SetGoalTimerRate();

	AActor* Player;
	
};
