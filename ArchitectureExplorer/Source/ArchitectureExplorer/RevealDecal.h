// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/DecalComponent.h"
#include "RevealDecal.generated.h"

UENUM(BlueprintType)
enum class RevealState : uint8
{
	STATE_WAITING					UMETA(DisplayName = "Waiting"),
	STATE_UPDATING_FLDOT			UMETA(DisplayName = "UpdatingFLDot"),
	STATE_FADING_OUT				UMETA(DisplayName = "FadingOut"),
	STATE_FADING_IN					UMETA(DisplayName = "FadingIn"),
	STATE_FADED_IN					UMETA(DisplayName = "FadedIn"),
};

UCLASS()
class ARCHITECTUREEXPLORER_API ARevealDecal : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ARevealDecal();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	RevealState State = RevealState::STATE_WAITING;

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void FadeIn();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void UpdateFLDot();

	// 4 traces to each corner of the decal collision, returns true if LOSTraces traces hit the decal
	UFUNCTION(BlueprintCallable)
	bool FlashlightLineOfSight(int LOSTraces);

private:
	class UWorld *World = nullptr;

	class UDecalComponent *DecalComponent = nullptr;

	FVector Corner1 = FVector::ZeroVector;
	FVector Corner2 = FVector::ZeroVector;
	FVector Corner3 = FVector::ZeroVector;
	FVector Corner4 = FVector::ZeroVector;
	TArray<FVector> CornerLocations;

	FCollisionQueryParams LOSParams;

	AActor *Flashlight = nullptr;
	USceneComponent *FLC = nullptr;

	void SetIgnoreActorCollisions();

	void InitializeCornerLocations();
};
