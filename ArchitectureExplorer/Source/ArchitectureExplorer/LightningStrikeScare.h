// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Scare.h"
#include "LightningStrikeScare.generated.h"

/**
 * 
 */
UCLASS()
class ARCHITECTUREEXPLORER_API ALightningStrikeScare : public AScare
{
	GENERATED_BODY()

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	UPROPERTY(BlueprintReadWrite)
	bool bActivated = false;

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void UnlockAndOpenWindow();

	virtual void StartScareInternal() override;
	virtual void EndScareInternal() override;

	virtual void Tick(float DeltaTime) override;

	UPROPERTY(BlueprintReadWrite)
	bool bOverlappingWindowTrigger = false;

	float PlayerCameraDotValue = 0.0f;

	// if PlayerCameraDotValue goes over this, then we advance the scare
	UPROPERTY(EditAnywhere)
	float PlayerCameraDotThreshold = 3.0f;

	void ComputePlayerCameraDotValue(float DeltaTime);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void LightningStrike();

	USceneComponent *PlayerCamera = nullptr;

	USkeletalMeshComponent *ErrolMesh = nullptr;
	USkeletalMeshComponent *ErrolMesh2 = nullptr;

	UPROPERTY(BlueprintReadWrite)
	bool bSpawnPeekErrolTrigger = false;

	void UnHideErrolMesh();

	UPROPERTY(BlueprintReadWrite)
	bool bEndPeekWhenSeen = false;
	void EndPeekWhenSeen();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void EndWindowPeek();

	float GetPlayerCameraDot();

	UFUNCTION(BlueprintImplementableEvent)
	void PlayLeavesRustleSound();
	
};
