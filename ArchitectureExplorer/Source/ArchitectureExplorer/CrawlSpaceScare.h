// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Scare.h"
#include "Camera/CameraComponent.h"
#include "CrawlSpaceScare.generated.h"

/**
 * 
 */
UCLASS()
class ARCHITECTUREEXPLORER_API ACrawlSpaceScare : public AScare
{
	GENERATED_BODY()

protected:

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:

	UFUNCTION(BlueprintCallable)
	bool ShouldFlyAtPlayer();

	UFUNCTION(BlueprintCallable)
	bool FlyAtPlayer(float DeltaTime);

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float FlyAtDistance = 200.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CurrentFlyAtSpeed = 1000.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxFlyAtSpeed = 60000.f;

private:
	class AVRCharacter *Player = nullptr;
	
	UCameraComponent *PlayerCam = nullptr;

	USkeletalMeshComponent *Crawlerman = nullptr;


	
};
