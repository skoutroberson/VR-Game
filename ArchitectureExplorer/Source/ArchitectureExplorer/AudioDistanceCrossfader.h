// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/AudioComponent.h"
#include "AudioDistanceCrossfader.generated.h"

// The player should never spawn colliding with ACol or BCol.

UCLASS()
class ARCHITECTUREEXPLORER_API AAudioDistanceCrossfader : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAudioDistanceCrossfader();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere)
	USceneComponent *ADCRoot = nullptr;

	// collision boxes for detecting player overlaps

	/**
	* THE COLLISIONS MUST BE PLACED IN A WAY THAT THE PLAYER CAN ONLY ENTER/EXIT THEM PARRALEL TO THE UP(Z) VECTOR.
	* IF THE COLLISION IS VERY WIDE, YOU NEED TO MAKE SURE TO MAKE THE COLLISION LONGER SO THAT A DOT PRODUCT CAN TELL WHAT SIDE OF THE Z AXIS YOU ARE ON WHEN YOU END OVERLAP.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UBoxComponent *ACol = nullptr;

	/**
	* THE COLLISIONS MUST BE PLACED IN A WAY THAT THE PLAYER CAN ONLY ENTER/EXIT THEM PARRALEL TO THE UP(Z) VECTOR.
	* IF THE COLLISION IS VERY WIDE, YOU NEED TO MAKE SURE TO MAKE THE COLLISION LONGER SO THAT A DOT PRODUCT CAN TELL WHAT SIDE OF THE Z AXIS YOU ARE ON WHEN YOU END OVERLAP.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UBoxComponent *BCol = nullptr;

	// needs to be set in blueprint by SetAAudio event
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UAudioComponent*> AudioA;
	// needs to be set in blueprint by SetBAudio event
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UAudioComponent*> AudioB;

	UPROPERTY(VisibleAnywhere)
	float VolumeA;

	UPROPERTY(VisibleAnywhere)
	float VolumeB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float InterpSpeed = 10.f;

	class UWorld *World;

	// Player camera collision. Represents the player's head.
	UPROPERTY(BlueprintReadOnly)
	class USphereComponent *CameraCollision = nullptr;

	UFUNCTION(BlueprintCallable)
	bool ShouldStopCrossfading(USceneComponent *Col);

	// add the audio components to AudioA and AudioB
	UFUNCTION(BlueprintImplementableEvent)
	void InitializeAudioArrays();

private:

	// called in tick
	void CrossfadeAB(float DeltaTime);

	// Distance between ACol and BCol. Set in BeginPlay()
	float DistanceAB = 0.0f;


};
