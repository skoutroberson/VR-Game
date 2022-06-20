// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MotionControllerComponent.h"
#include "MotionControllerComponent.h"
#include "Grabbable.h"
#include "HandController.generated.h"

UCLASS()
class ARCHITECTUREEXPLORER_API AHandController : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AHandController();

	void SetHand(EControllerHand Hand) { MotionController->SetTrackingSource(Hand); }

	void Grip();
	void Release();

	// AKA the velocity vector of the hand controller
	UPROPERTY(BlueprintReadOnly)
	FVector DeltaLocation = FVector::ZeroVector;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector HandControllerVelocity = FVector::ZeroVector;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere)
	bool bLeft = false;
	
	void PrintSocketOffsets(float DeltaTime);

private:
	AHandController * SisterController;
public:
	// Called by VRCharacter
	void SetSisterController(AHandController * Sister);

public:
	// Animation stuff

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = HandAnimation)
	float GripSize = 25.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = HandAnimation)
	float GripSizeDefault = 25.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = HandAnimation)
	float GripSizeMax = 100.f;

	float GripSizeCanGrab = 35.f;

	// Flashlight variables/functions
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = HandAnimation)
	float ButtonPress = 35.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = HandAnimation)
	bool bIsHoldingFlashlight = false;

	void PressFlashlightButton();
	void ReleaseFlashlightButton();

	// Chainsaw variables/functions
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = HandAnimation)
	bool bIsHoldingChainsaw = false;

	bool bLeftHandChainsaw = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = HandAnimation)
	bool bIsHoldingBottle = false;



private:
	// Default sub object
	UPROPERTY(VisibleAnywhere)
	UMotionControllerComponent* MotionController;

	// Parameters
	UPROPERTY(EditDefaultsOnly)
	class UHapticFeedbackEffect_Base * HapticEffect;

	// Callbacks

	UFUNCTION()
	void ActorBeginOverlap(AActor* OverlappedActor, AActor* OtherActor);	// I nested both of these functions. There might be a 
	UFUNCTION()																// better solution than the if(!bIsGripping)
	void ActorEndOverlap(AActor* OverlappedActor, AActor* OtherActor);

	// Helpers
	void CanInteract();
	AActor* OverlappingDoor = nullptr;
	UPrimitiveComponent * OverlappingKnob = nullptr;
	//USceneComponent * OverlappingKnob = nullptr;

	// State
	bool bCanClimb = false;
	bool bIsClimbing = false;
	bool bNewCanClimb = false;
	FVector ClimbingStartLocation;

	bool bCanUseDoor = false;
	bool bIsUsingDoor = false;
	bool bNewCanUseDoor = false;
	FVector UsingDoorLocation;

	bool bCanUseDrawer = false;
	bool bIsUsingDrawer = false;
	bool bNewCanUseDrawer = false;

	bool bCanGrab = false;
	bool bNewCanGrab = false;

	bool bIsGripping = false;

	bool bIsHoldingBall = false;

	bool bNeedToAttach = false;

	bool bIsControllingItem = false;

public:

	bool bIsGrabbing = false;

	bool bHandHold1 = false;
	bool bHandHold2 = false;

	bool bRevvingChainsaw = false;

	// Actor that the hand controller can pick up

	AActor * GrabActor = nullptr;


	FQuat GrabQuat;

	AGrabbable * ActorBeingGrabbed = nullptr;
public:
	USkeletalMeshComponent * HandMesh;

	FTransform HandMeshRelativeTransform;

public:
	USceneComponent* ChainsawOffset = nullptr;

private:

	void DetachHandMeshAndReattachToHC();
	void AttachHandMeshToDoor(AActor* TheDoor);

	const FVector HandMeshDoorOffset = FVector(3.182271, 15.935795, 1.304686);

	// Stops the player is they are holding on to door handle and moving too far away
	void CheckDoorDistance();

	void PlayCanGrabHapticEffect();

private:
	// Debug functions
	void DrawDebugLines(float DeltaTime);

};
