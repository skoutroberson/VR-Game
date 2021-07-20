// Fill out your copyright notice in the Description page of Project Settings.


#include "LightManager.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/StaticMeshActor.h"
#include "Components/StaticMeshComponent.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "Materials/MaterialInterface.h"

// Sets default values
ALightManager::ALightManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
}

// Called when the game starts or when spawned
void ALightManager::BeginPlay()
{
	Super::BeginPlay();

	constexpr size_t sizeOfT = sizeof(Light);

	/*
	TArray<AActor*> SMActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AStaticMeshActor::StaticClass(), SMActors);
	UStaticMeshComponent * Lamp = nullptr;
	for (auto SMActor : SMActors)
	{
		if (SMActor->GetName().Equals(FString("Lamp1"), ESearchCase::IgnoreCase))
		{
			Lamp = Cast<UStaticMeshComponent>(SMActor->GetRootComponent());

			if (Lamp != nullptr)
			{
				UE_LOG(LogTemp, Warning, TEXT("Lamp cast worked!"));
				Lights[0].Mesh = Lamp;
				Lights[0].MatInterface = Lights[0].Mesh->GetMaterial(0);
				Lights[0].DynamicMaterial = UMaterialInstanceDynamic::Create(Lights[0].MatInterface, Lamp);
				Lights[0].Mesh->SetMaterial(0, Lights[0].DynamicMaterial);
			}
			else
			{
				UE_LOG(LogTemp, Warning, TEXT("Lamp cast failed!"));
			}
			break;
		}
	}

	SetEmmissive(100.f, 0);

    */
	FillLightsMap();

	if (LightsMap.Contains(TEXT("BP_Lamp_Wall_2")))
	{
		FString LN = "BP_Lamp_Wall_2";
		TurnOn(LN, 1.6f, 25.f);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("FUCK didn't work!!"));
	}

}

// Called every frame
void ALightManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ALightManager::SetEmmissive(float Value, int index)
{
	//Lights[index].Mesh->SetScalarParameterValueOnMaterials(TEXT("EmissiveWeight"), Value);
}

void ALightManager::FillLightsMap()
{
	TArray<AActor*> Lights;
	UGameplayStatics::GetAllActorsOfClassWithTag(GetWorld(), AActor::StaticClass(), TEXT("Light"), Lights);
	for (auto Actor : Lights)
	{
		Light * ThisLight = new Light;
		
		UStaticMeshComponent * SM = Cast<UStaticMeshComponent>(Actor->GetRootComponent());
		if (SM != nullptr)
		{
			ThisLight->Mesh = SM;
			ThisLight->MatInterface = SM->GetMaterial(0);
			ThisLight->DynamicMaterial = UMaterialInstanceDynamic::Create(ThisLight->MatInterface, SM);
			ThisLight->Mesh->SetMaterial(0, ThisLight->DynamicMaterial);
			
			UPointLightComponent * PLC; 
			PLC = Cast<UPointLightComponent>(Actor->GetComponentByClass(UPointLightComponent::StaticClass()));

			if (PLC != nullptr)
			{
				ThisLight->LightComponent = PLC;
			}
			else
			{
				UE_LOG(LogTemp, Warning, TEXT("PLC cast failed in Lightmanager.cpp in FillLightsMap()"));
			}

			LightsMap.Add(Actor->GetName(), ThisLight);
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("Static Mesh Cast failed in FillLightsMap() in LightManager.cpp"));
		}
	}
}

void ALightManager::TurnOn(FString Name, float LightIntensity, float EmissiveValue)
{
	if (LightsMap.Contains(Name))
	{
		Light * ThisLight = LightsMap[Name];
		ThisLight->Mesh->SetScalarParameterValueOnMaterials(TEXT("EmissiveWeight"), EmissiveValue);
		ThisLight->LightComponent->SetIntensity(LightIntensity);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("LightsMap doesn't contain the specified key. TurnOn()"));
	}
}

void ALightManager::TurnOff(FString Name, float LightIntensity, float EmissiveValue)
{
	if (LightsMap.Contains(Name))
	{
		Light * ThisLight = LightsMap[Name];
		ThisLight->Mesh->SetScalarParameterValueOnMaterials(TEXT("EmissiveWeight"), EmissiveValue);
		ThisLight->LightComponent->SetIntensity(LightIntensity);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("LightsMap doesn't contain the specified key. TurnOff()"));
	}
}