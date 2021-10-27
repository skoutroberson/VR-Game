// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Radio.h"
#include "Door.generated.h"

UCLASS()
class ARCHITECTUREEXPLORER_API ADoor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADoor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Parameters
	UPROPERTY(EditDefaultsOnly)
	class UHapticFeedbackEffect_Base * HapticEffect;

	UPROPERTY(VisibleAnywhere)
	class USceneComponent* DoorRoot;

	class UStaticMeshComponent* DoorMesh;

	class USceneComponent* DoorHinge;

	class USphereComponent * Doorknob;

	AActor* HandController = nullptr;
	FVector LastHCLocation;
	

	// Grip/Release HandController functions
	void PassController(AActor * HC);
	void SetIsBeingUsed(bool Value);


	// Mechanic functions
	void UseDoor(float DeltaTime);
	void Swing(float DeltaTime);
	void CollisionSwing(float DeltaTime);

	// State
	bool bIsBeingUsed = false;

	UPROPERTY(BlueprintReadWrite, Category = DoorMechanics)
	bool bSwing = false;

	UPROPERTY(BlueprintReadWrite, Category = DoorMechanics)
	float SwingVelocity;

	UPROPERTY(BlueprintReadWrite, Category = DoorMechanics)
	bool bCollisionSwing = false;

	UPROPERTY(BlueprintReadWrite, Category = DoorMechanics)
	AActor * CollisionActor = nullptr;

	UPROPERTY(BlueprintReadWrite, Category = DoorMechanics)
	FVector LastCALocation = FVector::ZeroVector;

private:
	
	float SlerpSize;
	const float HingeFriction = 0.008f;
	const float DoorLength = 91.f;
	float MaxAngleRadians = 0;

	bool KnobCollision = false;

	int Push = 0;

	FQuat MinRotation;
	FQuat MaxRotation;

	// Helpers

	FVector2D ConvertVector3D(FVector Vec);
	FQuat CalcGoalQuat(FVector GoalVec);
	float BinarySearchForMaxAngle();

	// Functions to be called in Stage classes!
public:
	// bool for not letting the player use the door if the stage closes/is closing it 
	UPROPERTY(BlueprintReadWrite)
	bool bCloseDoorFast = false;

	UFUNCTION(BlueprintCallable)
	void CloseDoorFast(UPARAM(DisplayName = "DeltaTime") float DeltaTime);


private:
	bool bStageLock = false;
	float CloseDoorFastVelocity = 0.0001f;

public:
	UPROPERTY(BlueprintReadWrite)
	bool bLocked = false;

private:
	float YawAngle = -1.f;
	int DoorCloseDirection = 0;

private:
	UPROPERTY(EditDefaultsOnly)
	class USoundCue * OpenSound;
	UPROPERTY(EditDefaultsOnly)
	class USoundCue * CloseSound;
	UPROPERTY(EditDefaultsOnly)
	class USoundCue * SwingOpenSound;
	UPROPERTY(EditDefaultsOnly)
	class USoundCue * SwingCloseSound;
	UPROPERTY(EditDefaultsOnly)
	class USoundCue * LockedSound;

	UAudioComponent * SwingAudioComponent = nullptr;

	bool bSwingingOpen = false;
	bool bPlayingSwingSound = false;

	float DoorVelocitySoundThreshold = 0.01f;
	
	float SwingOpenSoundDuration = 0;
	float SwingCloseSoundDuration = 0;

	void PlaySwingSound(const float Velocity, const float Ratio);

	float MaxSwingVelocity = 0;

	UPROPERTY(EditAnywhere)
	bool bBackwards = false;
};
