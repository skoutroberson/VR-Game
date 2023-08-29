// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Grabbable.h"
#include "HandController.h"
#include "VRCharacter.h"
#include "Components/AudioComponent.h"
#include "Components/ArrowComponent.h"
#include "Chainsaw.generated.h"

UENUM(BlueprintType)
enum class SawState : uint8
{
	STATE_IDLE			UMETA(DisplayName = "Idle"),
	STATE_STARTUP		UMETA(DisplayName = "Startup"),
	STATE_REVVING		UMETA(DisplayName = "Revving"),
	STATE_ENDREV		UMETA(DisplayName = "EndRev"),
};

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
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
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

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
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

	UPROPERTY(BlueprintReadWrite)
	USkeletalMeshComponent * ErrolMainMesh;

	UPROPERTY(BlueprintReadWrite)
	USkeletalMeshComponent * ErrolTopHalfMesh;

	UPROPERTY(BlueprintReadWrite)
	USkeletalMeshComponent * ErrolBottomHalfMesh;

	UPROPERTY(BlueprintReadWrite)
	USkeletalMeshComponent * ErrolChainsawMesh;

	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> BloodFXActor = nullptr;

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

	// How often to spawn blood fx
	UPROPERTY(EditAnywhere)
	float BloodSpawnTime = 0.2f;

	// keeps track of how much time has passed since last blood spawn, gets reset each spawn.
	float BloodSpawnCounter = 0;

	void SpawnBlood(float DeltaTime);


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

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	SawState State = SawState::STATE_IDLE;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAudioComponent *IdleAudio = nullptr;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAudioComponent *StartupAudio = nullptr;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAudioComponent *RevvingAudio = nullptr;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAudioComponent *EndrevAudio = nullptr;

	void EnterIdleState();
	void EnterStartupState();
	void EnterRevvingState();
	void EnterEndrevState();

	void TickIdleState(float DeltaTime);
	void TickStartupState(float DeltaTime);
	void TickRevvingState(float DeltaTime);
	void TickEndrevState(float DeltaTime);

	void ExitIdleState();
	UFUNCTION(BlueprintCallable)
	void ExitStartupState();
	void ExitRevvingState();
	UFUNCTION(BlueprintCallable)
	void ExitEndrevState();

	

};
