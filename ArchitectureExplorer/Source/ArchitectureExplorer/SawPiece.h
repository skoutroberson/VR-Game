// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SawPiece.generated.h"

UENUM(BlueprintType)
enum class SawPieceState : uint8
{
	STATE_WAITING					UMETA(DisplayName = "Waiting"),
	STATE_UPDATING_FLDOT			UMETA(DisplayName = "UpdatingFLDot"),
	STATE_FADING_OUT				UMETA(DisplayName = "FadingOut"),
	STATE_FADING_IN					UMETA(DisplayName = "FadingIn"),
	STATE_FADED_IN					UMETA(DisplayName = "FadedIn"),
	STATE_FOUND						UMETA(DisplayName = "Found"),
};

UCLASS()
class ARCHITECTUREEXPLORER_API ASawPiece : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASawPiece();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite);
	class UStaticMeshComponent *Mesh = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite);
	class USphereComponent *SphereCollision = nullptr;

	// Returns true if the saw piece and flashlight have line of sight of eachother.
	UFUNCTION(BlueprintCallable)
	bool FlashlightLOS();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	SawPieceState State;

private:

	class UWorld *World = nullptr;

	AActor *Flashlight = nullptr;
	USceneComponent *FLC = nullptr;

	

};
