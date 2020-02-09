// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "VRCharacter.generated.h"

UCLASS()
class ARCHITECTUREEXPLORER_API AVRCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AVRCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:

	void UpdateDestinationMarker();

	void MoveForward(float throttle);
	void MoveRight(float throttle);
	void TurnRight(float throttle);
	void LookUp(float throttle);
	void BeginTeleport();
	void FinishTeleport();
	void EnableAction1();
	void EnableAction2();
	void DisableAction1();
	void DisableAction2();
	void InterpretMCMotion();

private:

	UPROPERTY(EditAnywhere)
	class UCameraComponent* Camera;

	UPROPERTY(VisibleAnywhere)
	class UMotionControllerComponent* LeftController;

	UPROPERTY(VisibleAnywhere)
	class UMotionControllerComponent* RightController;

	UPROPERTY(VisibleAnywhere)
	class USceneComponent* VRRoot;

	UPROPERTY(VisibleAnywhere)
	class UStaticMeshComponent* DestinationMarker;

private:
	bool bAction1 = false;
	bool bAction2 = false;
	bool bSprint = false;
	bool bTeleportEnabled = false;

private:

	UPROPERTY(EditAnywhere)
	float MaxTeleportDistance = 1000;
	float TeleportFadeTime = 1;
	FHitResult HitResult;
	int TickCounter = 0;
	float MCLeftPos = 0;
	float MCRightPos = 0;
	float MoveForwardScaleValue = 1.0f;

	int StopSprintChecks = 0;
	int StopSprintMax = 3;

};
