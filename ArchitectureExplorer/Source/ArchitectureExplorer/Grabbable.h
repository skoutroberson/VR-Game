// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Grabbable.generated.h"

UCLASS()
class ARCHITECTUREEXPLORER_API AGrabbable : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGrabbable();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay();

public:	
	// Called every frame
	//virtual void Tick(float DeltaTime);

public:
	float ItemGripSize = 100.f;
	FRotator ItemRotation = FRotator(0, 0, 0);
	FVector ItemLocation = FVector(0, 0, 0);
	//FRotator ItemRotation = FRotator(0, -75.f, -85.f);
	//FVector ItemLocation = FVector(4.f, 11.f, -3.5f);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = CustomVariables)
	bool bOneHandHeld = false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = CustomVariables)
	bool bTwoHandHeld = false;

	void Grab();

};
