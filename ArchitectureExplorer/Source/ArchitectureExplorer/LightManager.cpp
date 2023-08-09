// Fill out your copyright notice in the Description page of Project Settings.


#include "LightManager.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/StaticMeshActor.h"
#include "Components/StaticMeshComponent.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "Materials/MaterialInterface.h"
#include "Flashlight.h"

// Sets default values
ALightManager::ALightManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ALightManager::BeginPlay()
{
	Super::BeginPlay();

	Flashlight = Cast<AFlashlight>(UGameplayStatics::GetActorOfClass(GetWorld(), AFlashlight::StaticClass()));

	//constexpr size_t sizeOfT = sizeof(Light);

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

	/*
	if (LightsMap.Contains(TEXT("BP_Lamp1")))
	{
		FString LN = "BP_Lamp1";
		TurnOn(LN, 1.6f, 25.f);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("FUCK didn't work!!"));
	}
	*/
}

// Called every frame
void ALightManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	Flicker(DeltaTime);
}

void ALightManager::SetEmmissive(float Value, int index)
{
	//Lights[index].Mesh->SetScalarParameterValueOnMaterials(TEXT("EmissiveWeight"), Value);
}

void ALightManager::Flicker(float DeltaTime)
{
	float NewFlickerTime = CurrentFlickerTime + DeltaTime;

	CurrentFlickerTime = (NewFlickerTime > MaxFlickerTime) ? NewFlickerTime - MaxFlickerTime : NewFlickerTime;
	//UE_LOG(LogTemp, Warning, TEXT("FlickerTime: %f"), CurrentFlickerTime);

	for (auto &FlickerLight : FlickerLights)
	{
		const float FlickerTime = FlickerLight->FlickerTime;
		
		if (CurrentFlickerTime > FlickerTime && (CurrentFlickerTime - FlickerTime) < 5.f)
		{
			float RandTime;

			bool bOn = FlickerLight->bOn;
			FlickerLight->bOn = !bOn;

			AActor *LA = FlickerLight->LightActor;

			//UE_LOG(LogTemp, Warning, TEXT("TIME: %f"), FlickerTime);

			// if flashlight, then we need to update volumetrics
			if (LA == Flashlight)
			{
				Flashlight->UpdateLightVolumetrics(!bOn);
			}
			
			if (bOn)
			{
				RandTime = CurrentFlickerTime + FMath::RandRange(0.04f, FlickerLight->SpeedCoefficient);
				EditLight(LA, FlickerLight->LightIntensity, FlickerLight->EmissivePower, FlickerLight->LightColor);
			}
			else
			{
				float MFR = FlickerLight->SpeedCoefficient; //* 0.25f;
				//MFR = FMath::Clamp(MFR, 0.18f, 0.4f);
				RandTime = CurrentFlickerTime + FMath::RandRange(0.04f, MFR);
				EditLight(LA, 0.f, 0.f, FlickerLight->LightColor);
			}
			NewFlickerTime = (RandTime > MaxFlickerTime) ? RandTime - MaxFlickerTime : RandTime;
			FlickerLight->FlickerTime = NewFlickerTime;
		}
	}
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

			TArray<UActorComponent*> TempArray = Actor->GetComponentsByClass(UPointLightComponent::StaticClass());
			for (auto lc : TempArray)
			{
				ThisLight->LightComponents.Add(Cast<UPointLightComponent>(lc));
			}
			UE_LOG(LogTemp, Warning, TEXT("name: %s"), *Actor->GetName());
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

		for (auto lc : ThisLight->LightComponents)
		{
			if (lc != nullptr)
			{
				lc->SetIntensity(LightIntensity);
			}
		}
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
		for (auto lc : ThisLight->LightComponents)
		{
			if (lc != nullptr)
			{
				lc->SetIntensity(LightIntensity);
			}
		}
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("LightsMap doesn't contain the specified key. TurnOff()"));
	}
}

void ALightManager::EditLight(AActor *LightActor, float LightIntensity, float EmissiveValue, FVector EmissiveColor)
{
	//UStaticMeshComponent * SM = Cast<UStaticMeshComponent>(LightActor->GetRootComponent());
	UStaticMeshComponent * SM = Cast<UStaticMeshComponent>(LightActor->GetComponentByClass(UStaticMeshComponent::StaticClass()));
	if (SM != nullptr)
	{
		SM->SetScalarParameterValueOnMaterials(TEXT("EmissiveWeight"), EmissiveValue);
		SM->SetVectorParameterValueOnMaterials(TEXT("Emissive Color"), EmissiveColor);
	}

	TArray<UActorComponent*> LightComponents = LightActor->GetComponentsByClass(ULightComponent::StaticClass());

	for (int i = 0; i < LightComponents.Num(); i++)
	{
		ULightComponent *LC = Cast<ULightComponent>(LightComponents[i]);
		if (LC != nullptr)
		{
			LC->SetIntensity(LightIntensity);
		}
	}
}

void ALightManager::AddFlickerLight(AActor *LightActor, float SpeedCoefficient, float LightIntensity, float EmissivePower, FVector LightColor)
{
	if (LightActor != nullptr)
	{
		UFlickerLight *NewFlickerLight = NewObject<UFlickerLight>();

		NewFlickerLight->LightActor = LightActor;
		NewFlickerLight->SpeedCoefficient = SpeedCoefficient;
		NewFlickerLight->LightIntensity = LightIntensity;
		NewFlickerLight->EmissivePower = EmissivePower;
		NewFlickerLight->LightColor = LightColor;

		float RandTime = FMath::FRand() * SpeedCoefficient;
		FMath::Clamp(RandTime, 0.04f, 5.0f);
		RandTime += CurrentFlickerTime;

		NewFlickerLight->FlickerTime = (RandTime > MaxFlickerTime) ? RandTime - MaxFlickerTime : RandTime;

		FlickerLights.Add(NewFlickerLight);
		//return FlickerLights[FlickerLights.Add(NewFlickerLight)];
	}
}

void ALightManager::RemoveFlickerLight(AActor *LightActor)
{
	for (auto &Elem : FlickerLights)
	{
		if (Elem->LightActor == LightActor)
		{
			FlickerLights.Remove(Elem);
		}
	}
}

void ALightManager::EditFlickerLight(AActor *LightActor, FVector LightColor, float SpeedCoefficient, float LightIntensity, float EmissivePower, bool bOn)
{
	
	UFlickerLight *FL = nullptr;
	for (auto &Elem : FlickerLights)
	{
		if (Elem->LightActor == LightActor)
		{
			FL = Elem;
			break;
		}
	}
	
	if (FL != nullptr)
	{
		if (SpeedCoefficient > 0)
		{
			FL->SpeedCoefficient = SpeedCoefficient;
		}
		if (LightIntensity > 0)
		{
			FL->LightIntensity = LightIntensity;
		}
		if (EmissivePower > 0)
		{
			FL->EmissivePower = EmissivePower;
		}
		FL->LightColor = LightColor;
	}
	
}
