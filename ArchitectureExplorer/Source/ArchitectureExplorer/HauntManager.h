// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HauntManager.generated.h"

UENUM(BlueprintType)
enum class HauntManagerState : uint8
{
	STATE_IDLE					UMETA(DisplayName = "Idle"),
	STATE_TIMER					UMETA(DisplayName = "Timer"),
	STATE_HAUNTING				UMETA(DisplayName = "Haunting"),
	STATE_PAUSED				UMETA(DisplayName = "Paused"),
};

UCLASS()
class ARCHITECTUREEXPLORER_API AHauntManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AHauntManager();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	HauntManagerState State;

	// keeps track of previous state when HauntManager is paused.
	UPROPERTY(VisibleAnywhere)
	HauntManagerState PauseState;

	UFUNCTION(BlueprintCallable)
	void StartHaunting(int HauntLevel, float MinTime, float MaxTime);

	UFUNCTION(BlueprintCallable)
	void StopHaunting();

	UFUNCTION(BlueprintCallable)
	void PauseHaunting();
	UFUNCTION(BlueprintCallable)
	void ResumeHaunting();


	/**
	1: Peek
	2: 
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int HauntLevel = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float HauntTimer = 0.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float HauntTime = 0.f;



	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MinHauntTime = 60.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxHauntTime = 120.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float HauntTimeOffset = 0.0f;



	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void StartHaunt();

	// Sets HauntTime to a random float in the range MinHauntTime - MaxHauntTime.
	UFUNCTION(BlueprintCallable)
	void RollHauntTime();

};
