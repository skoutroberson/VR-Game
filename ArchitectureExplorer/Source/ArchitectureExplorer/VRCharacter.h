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
	void Dodge();
	void Sprint();
	void StopSprint();
	void Click();

	float MCCrossMag = 0;

	void UpdateCapsuleHeight();
	FHitResult CamHeightHit;
	FCollisionQueryParams CamHeightParams;
	FVector WorldDownVector = -FVector(0,0,1);

	USphereComponent* HeadCollisionSphere;

public:

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

public:

	UFUNCTION()
	void GripLeft() { LeftController->Grip(); }
	UFUNCTION()
	void ReleaseLeft() { LeftController->Release(); }

	UFUNCTION()
	void GripRight() { RightController->Grip(); }
	UFUNCTION()
	void ReleaseRight() { RightController->Release(); }

	UFUNCTION()
	void PressA() { RightController->PressFlashlightButton(); }
	void ReleaseA() { RightController->ReleaseFlashlightButton(); }

	void PressX() { LeftController->PressFlashlightButton(); }
	void ReleaseX() { LeftController->ReleaseFlashlightButton(); }

private:
	bool bAction1 = false;
	bool bAction2 = false;
	bool bSprint = false;
	bool bDodge = false;
	bool bTeleportEnabled = false;
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
	class USoundCue * RightFootstepSound;

	bool bRightStep = false;
	float DistanceMoved = 0;
	const float DistanceThreshold = 6200.f;
	// this should go down more if the players velocity is farther from velocity threshold
	const float DistanceMovedDecrementAmount = 14.f;
	// the character's velocity must be over this amount to be considered "moving".
	const float VelocityThreshold = 16.f;
	// This function plays a footstep sound if MoveDistance goes over MoveThreshold.
	void PlayFootStepSound();

};
