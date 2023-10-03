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
#include "Curves/CurveFloat.h"
#include "CollisionQueryParams.h"
#include "Door.h"
#include "VRCharacter.generated.h"

UENUM(BlueprintType)
enum class CameraFadeState : uint8
{
	STATE_NO_FADE			UMETA(DisplayName = "NoFade"),
	STATE_FADING_IN			UMETA(DisplayName = "FadingIn"),
	STATE_FADING_OUT			UMETA(DisplayName = "FadingOut"),
};


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
	void ReleaseClick();

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

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UMaterialInterface *FadeMaterialBase;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UMaterialInstanceDynamic * FadeMaterialInstance;

	UPROPERTY(EditAnywhere)
	class UCurveFloat *RadiusVsVelocity;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	class UCameraComponent* Camera;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	class AHandController* LeftController;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
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

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AHandController> LeftHandControllerClass;

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
	float DistanceThreshold = 85.f;

	bool bFalling = false;

	float SprintDistanceMultiplier = 1.0f;
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

public:

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	class USoundCue *WoodCreakSound;

	void SetBlinkerRadius(float NewRadius);

	bool bClimbing = false;

public:

	void Die();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void FadeScreenToBlack();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void UnfadeScreenFromBlack();

	// used when fading the screen to/from black
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	float CameraFadeValue = 0;

	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool bDead = false;

	bool bIsUsingDoor = false;


	UPROPERTY(VisibleAnywhere, BlueprintReadWrite);
	float GoalFadeValue = 0;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	UCurveFloat *CameraFadeCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCurveFloat *ColCamFadeIn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCurveFloat *ColCamFadeOut;

	CameraFadeState CameraState = CameraFadeState::STATE_NO_FADE;

	UPROPERTY(BlueprintReadWrite)
	bool bFadeCamera = false;

	void FadeCamera(float DeltaTime);

	UPROPERTY(BlueprintReadWrite)
	float CameraFadeTime = 0;
	UFUNCTION(BlueprintCallable)
	void StartCameraFade(float FadeValue, float FadeSpeed, UCurveFloat *FadeCurve);
	UFUNCTION(BlueprintCallable)
	void StopCameraFade(float DeltaTime, float FadeSpeed, UCurveFloat *FadeCurve);

	UPROPERTY(BlueprintReadWrite)
	bool bStuckInWall = false;
	// called when the player's camera collides with a static object
	UFUNCTION(BlueprintCallable)
	void CamColStuck();

	UFUNCTION(BlueprintCallable)
	void CamColUnStuck();
	UPROPERTY(BlueprintReadWrite)
	FVector StuckNormal = FVector(0.f, 0.f, 1.0f);
	FVector StuckPosition = FVector::ZeroVector;
	// called in tick to determine when the player camera gets unstuck
	UFUNCTION(BlueprintCallable)
	void UnStickCamera(float DeltaTime);

	FCollisionQueryParams CamColParams;

	APlayerController *PlayerController = nullptr;

	FVector LastCameraPosition;

	UFUNCTION(BlueprintImplementableEvent)
	void OpenDoor(ADoor *Door);

	UFUNCTION(BlueprintImplementableEvent)
	void WoodCreak();


	// if the component is under 140 fov from the player camera and 1 trace to the component doesn't get blocked then this will return true
	UFUNCTION(BlueprintCallable)
	bool IsComponentInView(USceneComponent *SceneComponent);

	FCollisionQueryParams IsCompInViewParams;
};
