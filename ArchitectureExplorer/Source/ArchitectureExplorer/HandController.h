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

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector DeltaLocation = FVector::ZeroVector;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

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

	bool bCanGrab = false;
	bool bIsGrabbing = false;
	bool bNewCanGrab = false;

	bool bIsGripping = false;

	// Actor that the hand controller can pick up
	AActor * GrabActor = nullptr;
	FQuat GrabQuat;

	AGrabbable * ActorBeingGrabbed = nullptr;

	USkeletalMeshComponent * HandMesh;

private:

	// Stops the player is they are holding on to door handle and moving too far away
	void CheckDoorDistance();

private:
	// Debug functions
	void DrawDebugLines(float DeltaTime);

};
