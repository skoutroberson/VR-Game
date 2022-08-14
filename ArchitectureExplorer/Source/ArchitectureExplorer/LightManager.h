// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "Materials/MaterialInstanceDynamic.h" 
#include "Materials/MaterialInterface.h"
#include "Components/PointLightComponent.h"
#include "Components/SpotLightComponent.h"
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
		TArray<UPointLightComponent*> LightComponents;
		bool bOn = false;
	};

	//Light Lights[100] = { };

	TMap<FString, Light*> LightsMap;

	// Set Emmissive Value for light material. 0 is off
	void SetEmmissive(float Value, int index);

	UFUNCTION(BlueprintCallable)
	void TurnOn(FString Name, float LightIntensity = 100.f, float EmissiveValue = 100.f);
	void TurnOff(FString Name, float LightIntensity = 0, float EmissiveValue = 0);

	// edits light intensity and material emmisive value
	UFUNCTION(BlueprintCallable)
	void EditLight(AActor *LightActor, float LightIntensity = 100.f, float EmissiveValue = 100.f, FVector EmissiveColor = FVector(1.0f,1.0f,1.0f));

private:

	void FillLightsMap();

};