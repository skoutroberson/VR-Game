// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MotionControllerComponent.h"
#include "MotionControllerComponent.h"
#include "Grabbable.h"
#include "Dog.h"
#include "HandController.generated.h"

UENUM(BlueprintType)
enum class HandControllerState : uint8
{
	STATE_IDLE			UMETA(DisplayName = "Idle"),
	STATE_CANGRAB		UMETA(DisplayName = "CanGrab"),
	STATE_FLASHLIGHT	UMETA(DisplayName = "Flashlight"),
	STATE_PHONE			UMETA(DisplayName = "Phone"),
	STATE_BALL			UMETA(DisplayName = "Ball"),
	STATE_LADDER		UMETA(DisplayName = "Ladder"),
	STATE_DOOR			UMETA(DisplayName = "Door"),
	STATE_CHAINSAW1		UMETA(DisplayName = "Chainsaw1"),
	STATE_CHAINSAW2		UMETA(DisplayName = "Chainsaw2"),
	STATE_PET			UMETA(DisplayName = "Pet"),
	STATE_KEY			UMETA(DisplayName = "Key"),
};

UCLASS()
class ARCHITECTUREEXPLORER_API AHandController : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AHandController();

	void SetHand(EControllerHand Hand) { MotionController->SetTrackingSource(Hand); }

	UFUNCTION(BlueprintCallable)
	void Grip();
	UFUNCTION(BlueprintCallable)
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

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
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

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = HandAnimation)
	bool bIsHoldingPhone = false;

	// Default sub object
	UPROPERTY(VisibleAnywhere)
	UMotionControllerComponent* MotionController;
private:
	// Parameters
	UPROPERTY(EditDefaultsOnly)
	class UHapticFeedbackEffect_Base * HapticEffect;

	// Callbacks

	UFUNCTION(BlueprintCallable)
	void ActorBeginOverlap(AActor* OverlappedActor, AActor* OtherActor);	// I nested both of these functions. There might be a 
	UFUNCTION(BlueprintCallable)																// better solution than the if(!bIsGripping)
	void ActorEndOverlap(AActor* OverlappedActor, AActor* OtherActor);

	// Helpers
	UFUNCTION(BlueprintCallable)
	void CanInteract();
	
	//USceneComponent * OverlappingKnob = nullptr;

public:
	// State
	
	bool bIsClimbing = false;
	FVector ClimbingStartLocation;

private:

	bool bCanClimb = false;
	bool bNewCanClimb = false;
public:
	UPROPERTY(BlueprintReadWrite)
	bool bCanUseDoor = false;
	UPROPERTY(BlueprintReadWrite)
	bool bCanGrab = false;

	UPROPERTY(BlueprintReadWrite)
	AActor* OverlappingDoor = nullptr;
	UPROPERTY(BlueprintReadWrite)
	UPrimitiveComponent * OverlappingKnob = nullptr;
private:
	bool bIsUsingDoor = false;
	bool bNewCanUseDoor = false;
	FVector UsingDoorLocation;

	

	bool bCanUseDrawer = false;
	bool bIsUsingDrawer = false;
	bool bNewCanUseDrawer = false;

	
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
	UPROPERTY(BlueprintReadWrite)
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
	void AttachHandMeshToDoor(class ADoor* TheDoor);

	const FVector HandMeshDoorOffset = FVector(3.182271, 15.935795, 1.304686);

	// Stops the player is they are holding on to door handle and moving too far away
	void CheckDoorDistance();

	void PlayCanGrabHapticEffect();

private:
	// Debug functions
	void DrawDebugLines(float DeltaTime);

	ADog *Dog = nullptr;

	class AVRCharacter *Player = nullptr;

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = HandAnimation)
	HandControllerState State;

	FVector BallOffset = FVector::ZeroVector;

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void UpdateAnimation();

	UPrimitiveComponent *CollisionCapsule = nullptr;

	// grab scenecomponents

	USceneComponent *GrabSceneOffset = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USceneComponent *GrabFlashlight = nullptr;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USceneComponent *GrabBall = nullptr;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USceneComponent *GrabPhone = nullptr;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USceneComponent *GrabKey = nullptr;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USceneComponent *GrabSaw1 = nullptr;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USceneComponent *GrabSaw2 = nullptr;

	void DrawGrabSceneOffset();
};
