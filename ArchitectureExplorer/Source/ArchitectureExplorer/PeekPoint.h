// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PeekPoint.generated.h"

UCLASS()
class ARCHITECTUREEXPLORER_API APeekPoint : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APeekPoint();

	UPROPERTY(EditAnywhere)
	USceneComponent * PeekRoot = nullptr;

	//	Visual representations of where Errol will face if he peeks from this PeekPoint. Also used to determine if Errol should do a left or right peek from this point.
	UPROPERTY(EditAnywhere)
	class UArrowComponent * LeftPeekVector = nullptr;
	UPROPERTY(EditAnywhere)
	class UArrowComponent * RightPeekVector = nullptr;

	//	Used for visualizing where the peek point is. This will always be hidden in game
	UPROPERTY(EditAnywhere)
	class UStaticMeshComponent * Sphere = nullptr;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//	Determine if this point is valid for Errol to peek from based on if the player is looking and if Errol will have a line of sight to the player when peeking
	bool IsValid(const float Threshold);

	UPROPERTY(EditAnywhere)
	bool bDisabled = false;
	
private:
	AActor * ErrolActor = nullptr;

	FCollisionQueryParams QueryParams;

	FTimerHandle InitializerHandle;
	//	called after a small delay to insure that the player's hand controllers are spawned in
	void InitializeHandControllerPointers();
	
	class AVRCharacter * Player = nullptr;

	//	Used for the starting point of the line of sight trace
	FVector HeadLocation = FVector::ZeroVector;

	UWorld * World = nullptr;

	class UCameraComponent * PlayerCamera = nullptr;
	AActor * LeftHandController = nullptr;
	AActor * RightHandController = nullptr;

};
