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

UCLASS(BlueprintType)
class UFlickerLight : public UObject
{
	GENERATED_BODY()

public:
	AActor *LightActor;
	// Clamped from 1.0f to 5.0f;
	float SpeedCoefficient;
	float FlickerTime;
	float LightIntensity;
	float EmissivePower;
	bool bOn = true;
	FVector LightColor;
};


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

	// lights that will be flickered
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSet<UFlickerLight*> FlickerLights;

	// returns the reference to the added item in FlickerLights
	UFUNCTION(BlueprintCallable)
	void AddFlickerLight(AActor *LightActor, float SpeedCoefficient = 1.0f, float LightIntensity = 1.0f, float EmissivePower = 1.0f, FVector LightColor = FVector(1.0f, 1.0f, 1.0f));

	// linearly checks each FlickerLight and removes the one that matches LightActor
	UFUNCTION(BlueprintCallable)
	void RemoveFlickerLight(AActor *LightActor);

	// linearly checks each FlickerLight for LightActor, and edits this one
	UFUNCTION(BlueprintCallable)
	void EditFlickerLight(AActor *LightActor, FVector LightColor = FVector(1.0f, 1.0f, 1.0f), float SpeedCoefficient = -1.0f,
		float LightIntensity = -1.0f, float EmissivePower = -1.0f, bool bOn = true);
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxFlickerTime = 10.0f;

	float CurrentFlickerTime = 0.0f;

	// checks each FlickerLight in FlickerLights and flickers them if their FlickerTime is less than CurrentFlickerTime
	void Flicker(float DeltaTime);

private:

	void FillLightsMap();

};