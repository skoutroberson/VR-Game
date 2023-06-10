// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Ball.h"
#include "Dog.generated.h"

UENUM(BlueprintType)
enum class DogState : uint8
{
	STATE_IDLE			UMETA(DisplayName = "Idle"),
	STATE_LAYING		UMETA(DisplayName = "Laying"),
	STATE_SITTING		UMETA(DisplayName = "Sitting"),
	STATE_STANDINGUP    UMETA(DisplayName = "StandingUp"),
	STATE_SITTINGDOWN   UMETA(DisplayName = "SittingDown"),
	STATE_STAYWALKRUN	UMETA(DisplayName = "StayWalkRun"),
	STATE_FETCHING		UMETA(DisplayName = "Fetching"),
	STATE_RETURNING		UMETA(DisplayName = "Returning"),
	STATE_PICKUP		UMETA(DisplayName = "PickUp"),
	STATE_DROP			UMETA(DisplayName = "Dropping"),
};

UCLASS()
class ARCHITECTUREEXPLORER_API ADog : public ACharacter
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADog();

	//UPROPERTY(EditAnywhere, BlueprintReadWrite)
	//class USkeletalMeshComponent *SkeletalMesh = nullptr;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USoundCue *BarkSound = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USoundCue *HappySound = nullptr;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dog")
	DogState State;

	UPROPERTY(BlueprintReadWrite)
	ABall *Ball = nullptr;

	UPROPERTY(BlueprintReadWrite)
	AActor *Player = nullptr;

	// pick up ball when close to the ball
	void ShouldPickUpBall();

	// drop the ball when close to the player
	void ShouldDropBall();

	// stop the open mouth montage and change state to sitting down
	//UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	//void DropBall();

	// called by anim notify
	UFUNCTION(BlueprintCallable)
	void PickupBall();

	// fetch the ball if bWantsToFetch = true and state != Fetching

	UFUNCTION(BlueprintCallable)
	void FetchBall();

	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bWantsToFetch = true;

	UFUNCTION(BlueprintCallable)
	void DropBall();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void WaitAndDropBall();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int Fetches = 0;

	// makes the dog run towards the house if the ball is over 300uu away from the player
	UFUNCTION(BlueprintCallable)
	void CheckBallDistance();

	UFUNCTION(BlueprintImplementableEvent)
	void RunTowardsHouse();

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	bool bRanTowardsHouse = false;

private:
	void RotateToFacePlayer();

	float PickupBallDistance = 150.f;
};
