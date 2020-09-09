// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MotionControllerComponent.h"
#include "MotionControllerComponent.h"
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

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	bool bLeft = false;

public:
	// Animation stuff

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = HandAnimation)
	float GripSize = 25.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = HandAnimation)
	float GripSizeDefault = 25.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = HandAnimation)
	float GripSizeMax = 100.f;

	float GripSizeCanGrab = 35.f;

private:
	// Default sub object
	UPROPERTY(VisibleAnywhere)
	UMotionControllerComponent* MotionController;

	// Parameters
	UPROPERTY(EditDefaultsOnly)
	class UHapticFeedbackEffect_Base * HapticEffect;

	// Callbacks

	UFUNCTION()
	void ActorBeginOverlap(AActor* OverlappedActor, AActor* OtherActor);
	UFUNCTION()
	void ActorEndOverlap(AActor* OverlappedActor, AActor* OtherActor);

	// Helpers
	void CanInteract();
	AActor* OverlappingDoor = nullptr;

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

	AActor * GrabActor;

};
