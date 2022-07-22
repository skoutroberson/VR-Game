// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Grabbable.h"
#include "HandController.h"
#include "VRCharacter.h"
#include "Components/AudioComponent.h"
#include "Components/ArrowComponent.h"
#include "Chainsaw.generated.h"

/**
 * 
 */
UCLASS()
class ARCHITECTUREEXPLORER_API AChainsaw : public AGrabbable
{
	GENERATED_BODY()
public:

	AChainsaw();

	virtual void Tick(float DeltaTime);

	virtual void Gripped(int HandHoldNum) override;
	virtual void Released(int HandHoldNum) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION()
	void BladeBeginOverlap(UPrimitiveComponent * FirstComponent, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult);

	class UBoxComponent * BladeCollision = nullptr;

private:
	class USkeletalMeshComponent * SkeletalMesh = nullptr;

	float TwoHandDropThreshold = 15.f;
	float TwoHandDistance = 22.f;
	void RotateTwoHand(float DeltaTime);
	void RotateOneHand(float DeltaTime);
	void InterpToMC(float DeltaTime);

public:

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void PressTrigger();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void ReleaseTrigger();

	//	set in blueprints with PressTrigger() and ReleaseTrigger() events
	bool bPressingTrigger = false;

	float LastTriggerAxisValue;

	//	this will control how fast the saw revs back down when the trigger is not pressed anymore.
	//	the heat level will rise to MaxHeat and go down by DeltaTime * CooldownSpeed
	UPROPERTY(VisibleAnywhere)
	float Heat = 0.0f;

	UPROPERTY(EditAnywhere)
	float MaxHeat = 5.0f;

	UPROPERTY(EditAnywhere)
	float HeatUpSpeed = 5.0f;

	UPROPERTY(EditAnywhere)
	float CooldownSpeed = 2.0f;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	float CurrentEngineValue = 0;

	UPROPERTY(EditAnywhere)
	float MaxEngineValue = 2.f;

	//	state for shaking the chainsaw when pulling the trigger
	UPROPERTY(BlueprintReadWrite)
	bool bRandomShake = false;

	UPROPERTY(BlueprintReadWrite)
	float RevShakeMaxIntensity = 0.2f;

	UPROPERTY(BlueprintReadWrite)
	float RevStartupIntensityMultiplier = 0;

	void TriggerAxisUpdates(float DeltaTime);

	//	Randomly sets RelativeRotation when revving the chainsaw
	void RandomShake(float DeltaTime);

	//	Sets relative rotation to 0 and stops shake
	void StopShake();

	AVRCharacter * Player;

	UAudioComponent * EngineAudio;

	/**
		used to determine if the controller's left or right trigger is controlling the chainsaw trigger.
		This is set by HandController when the chainsaw is grabbed
	*/
	bool bLeftHandIsControllingTrigger = false;

	bool bIsCoolingDown = false;

	// Dismember stuff
	
public:

	// speed that the saw cuts through the body.
	UPROPERTY(EditAnywhere)
	float DismemberCutSpeed = 10.f;
	// speed at which the chainsaw can change pitch during dismemberment
	UPROPERTY(EditAnywhere)
	float DismemberRotateSpeedModifier = 1.f;


	// set in blueprints by BP_FiverrErrol1
	UPROPERTY(BlueprintReadWrite)
	USceneComponent * CutEndLocation;

	UPROPERTY(BlueprintReadWrite)
	USceneComponent * CutStartLocation;

	UPROPERTY(BlueprintReadWrite)
	USceneComponent * Cut1Location;

	UPROPERTY(BlueprintReadWrite)
	USceneComponent * Cut2Location;

	UPROPERTY(BlueprintReadWrite)
	UArrowComponent * CutVectors;

	UPROPERTY(BlueprintReadWrite)
	UArrowComponent * MinCutVector;

	UPROPERTY(BlueprintReadWrite)
	UArrowComponent * MaxCutVector;

	UPROPERTY(BlueprintReadWrite)
	FVector CutUpVector;

	UFUNCTION(BlueprintCallable)
	void StartDismember();

	void EndDismember();

	void TickDismember(float DeltaTime);

	UPROPERTY(BlueprintReadOnly)
	FVector BladeOffset = FVector::ZeroVector;

private:

	

	bool bDismembering = false;

};
