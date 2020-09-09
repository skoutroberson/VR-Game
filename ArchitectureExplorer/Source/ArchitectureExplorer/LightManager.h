// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "Materials/MaterialInstanceDynamic.h" 
#include "Materials/MaterialInterface.h"
#include "LightManager.generated.h"

UCLASS()
class ARCHITECTUREEXPLORER_API ALightManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALightManager();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	struct Light
	{
		UStaticMeshComponent * Mesh = nullptr;
		UMaterialInterface * MatInterface = nullptr;
		UMaterialInstanceDynamic* DynamicMaterial = nullptr;
	};

	Light Lights[100] = { };

	// Set Emmissive Value for light material. 
	void SetEmmissive(float Value, int index);

};
