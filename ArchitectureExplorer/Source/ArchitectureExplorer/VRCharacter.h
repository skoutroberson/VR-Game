// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Math/Vector.h"
#include "MotionControllerComponent.h"
#include "UObject/ObjectMacros.h"
#include "cPlayerHandAnimBP.h"
#include "Components/SphereComponent.h"
#include "HandController.h"
#include "Sound/SoundCue.h"
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
	void CorrectCameraOffset();

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector DeltaLocation = FVector::ZeroVector;

	float RightTriggerAxisValue = 0;
	float LeftTriggerAxisValue = 0;
	
	UPROPERTY(BlueprintReadOnly)
	float RightGripAxisValue = 0;
	UPROPERTY(BlueprintReadOnly)
	float LeftGripAxisValue = 0;

private:

	void UpdateDestinationMarker();

	void MoveForward(float throttle);
	void MoveRight(float throttle);

	void RightTriggerAxis(float Value);
	void LeftTriggerAxis(float Value);

	void RightGripAxis(float Value);
	void LeftGripAxis(float Value);
	

	void TurnRight(float throttle);
	void LookUp(float throttle);
	void BeginTeleport();
	void FinishTeleport();
	void EnableAction1();
	void EnableAction2();
	void DisableAction1();
	void DisableAction2();
	void InterpretMCMotion();
	void Dodge();
	void Sprint();
	void StopSprint();
	void Click();

	float MCCrossMag = 0;

	void UpdateCapsuleHeight();
	FHitResult CamHeightHit;
	FCollisionQueryParams CamHeightParams;
	FCollisionQueryParams HeadCollisionParams;


	FVector WorldDownVector = -FVector(0,0,1);

	USphereComponent* HeadCollisionSphere;

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UMaterialInterface *BlinkerMaterialBase;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UMaterialInstanceDynamic * BlinkerMaterialInstance;

	UPROPERTY(EditAnywhere)
	class UCurveFloat *RadiusVsVelocity;

	UPROPERTY(EditAnywhere)
	class UCameraComponent* Camera;

	UPROPERTY(VisibleAnywhere)
	class AHandController* LeftController;

	UPROPERTY(VisibleAnywhere)
	class AHandController* RightController;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	class USkeletalMeshComponent* LeftHandMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	class USkeletalMeshComponent* RightHandMesh;

	UPROPERTY(VisibleAnywhere)
	class USceneComponent* VRRoot;

	UPROPERTY(EditAnywhere)
	class UStaticMeshComponent* DestinationMarker;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AHandController> HandControllerClass;

	UPROPERTY()
	class UPostProcessComponent *PostProcessComponent;

public:

	UFUNCTION()
	void GripLeft() { LeftController->Grip(); }
	UFUNCTION()
	void ReleaseLeft() { LeftController->Release(); }

	UFUNCTION()
	void GripRight() { RightController->Grip(); }
	UFUNCTION()
	void ReleaseRight() { RightController->Release(); }

	void PressA(bool bLeft);
	void ReleaseA(bool bLeft);

	void PressTrigger(bool bLeft);
	void ReleaseTrigger(bool bLeft);
	int TriggersPressed = 0;

private:
	bool bAction1 = false;
	bool bAction2 = false;
	bool bSprint = false;
	bool bDodge = false;
	bool bTeleportEnabled = false;
	bool bBlinkersEnabled = false;
	bool bIsMovingForward = false;
	bool bIsMovingUpDown = false;

private:

	UPROPERTY(EditAnywhere)
	float MaxTeleportDistance = 1000;
	float TeleportFadeTime = 1;
	float LookSensitivity = 2.f;
	FHitResult HitResult;
	int TickCounter = 0;

	FVector MCLeftPos = FVector::ZeroVector;
	FVector MCRightPos = FVector::ZeroVector;
	FVector DodgePos = FVector::ZeroVector;


	float MoveForwardScaleValue = 1.0f;

	int StopSprintChecks = 0;
	int StopSprintMax = 2;

	// foot steps:

	UPROPERTY(EditDefaultsOnly)
	class USoundCue * LeftFootstepSound;
	UPROPERTY(EditDefaultsOnly)
	class USoundCue * FootstepSound;

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

	bool bRightStep = false;
	float DistanceMoved = 0;
	UPROPERTY(EditAnywhere);
	float DistanceThreshold = 98.f;
	// this should go down more if the players velocity is farther from velocity threshold
	UPROPERTY(EditAnywhere);
	float DistanceMovedDecrementAmount = 14.f;
	// the character's velocity must be over this amount to be considered "moving".
	UPROPERTY(EditAnywhere);
	float VelocityThreshold = 0.01f;

	FVector FootstepPosition;

	// This function plays a footstep sound if MoveDistance goes over MoveThreshold.
	void PlayFootStepSound();

	// returns true if the player is grounded. Also updates the footstep sound.
	bool CheckFloor();

	void UpdateFootStepAudio();

	// CAMERA CONTROLS FOR CUTSCENES
	bool bLockCameraPosition = false;
	void LockCameraPosition();
	FVector LastCameraLocation = FVector::ZeroVector;

	float LastCamDistance = 0;

	float HMDZPos = 0;

	float StepVolumeMultiplier = 1.5f;

	// holds the key/value pairs of what tag corresponds with what sound cue
	UPROPERTY(VisibleAnywhere);
	TMap<FName, USoundCue *> FootstepMap;

};
