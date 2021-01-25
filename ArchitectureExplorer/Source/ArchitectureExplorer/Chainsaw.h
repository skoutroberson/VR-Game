// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Grabbable.h"
#include "Chainsaw.generated.h"

/**
 * 
 */
UCLASS()
class ARCHITECTUREEXPLORER_API AChainsaw : public AGrabbable
{
	GENERATED_BODY()
public:

	AChainsaw();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION()
	void BladeBeginOverlap(UPrimitiveComponent * FirstComponent, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult);

	class UBoxComponent * BladeCollision = nullptr;
};
