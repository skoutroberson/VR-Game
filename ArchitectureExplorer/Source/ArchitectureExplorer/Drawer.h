// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SphereComponent.h"
#include "Drawer.generated.h"

UCLASS()
class ARCHITECTUREEXPLORER_API ADrawer : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADrawer();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void GrabDrawer(AActor* HC);
	void ReleaseDrawer();

	// set by the HandController when it grabs the drawer
	UPROPERTY(VisibleAnywhere)
	bool bBeingGrabbed = false;

	// called in tick to push/pull the drawer when bBeingGrabbed is true
	void UseDrawer(float DeltaTime);

	AActor * HandController;

	// needs to be set before BeginPlay()
	UPROPERTY(EditAnywhere)
	float MaxSlideSize = 10.f;

	bool bFullyClosed = false;
	bool bFullyOpen = false;

private:

	USceneComponent * Handle = nullptr;

	FVector LastHCLocation;

	FVector FV;

	FVector ClosedPosition;

	FVector OpenPosition;

	/**
	If the drawer is fully open or closed, we only want to move it if the hand controller is back at the location where it was
	when the drawer was fully opened or closed. This will greatly improve the feel of the drawer.
	*/
	void FullyOpenClosedChecker();

};
