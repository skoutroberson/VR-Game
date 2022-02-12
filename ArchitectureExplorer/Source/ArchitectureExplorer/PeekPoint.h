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

};
