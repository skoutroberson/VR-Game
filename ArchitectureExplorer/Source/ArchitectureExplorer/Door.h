// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
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

	AActor* HandController = nullptr;
	FVector LastHCLocation;
	

	// Grip/Release HandController functions
	void PassController(AActor * HC);
	void SetIsBeingUsed(bool Value);


	// Mechanic functions
	void UseDoor(float DeltaTime);
	void Swing(float DeltaTime);

	// State
	bool bIsBeingUsed = false;
	bool bSwing = false;

private:
	float SwingVelocity;
	float SlerpSize;
	float HingeFriction = 0.44f;
	float DoorLength = 91.f;
	float MaxAngleRadians = 0;

	bool KnobCollision = false;

	int Push = 0;

	FQuat MinRotation;
	FQuat MaxRotation;

	// Helpers

	FVector2D ConvertVector3D(FVector Vec);
	FQuat CalcGoalQuat(FVector GoalVec);
	float BinarySearchForMaxAngle();

};
