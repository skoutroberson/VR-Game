// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Runtime/Engine/Classes/Engine/TargetPoint.h"
#include "TimerManager.h"
#include "ErrolCharacter.generated.h"

UENUM(BlueprintType)
enum class ErrolState : uint8
{
	STATE_IDLE		UMETA(DisplayName="Idle"),
	STATE_PATROL	UMETA(DisplayName="Patrol"),
	STATE_CHASE		UMETA(Displayname="Chase"),

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

	// State entry functions
public:
	void EnterIdleState();
	void EnterPatrolState();
	void EnterChaseState();

	// Errol local senses funcitonality
private:
	FTimerHandle ChaseTimerHandle;
	void InitializeChaseTimer();
	float ChaseTimerRate = 0.3f;
	float HalfFOV = 45.f;
	UFUNCTION()
	void ShouldChase();
};
