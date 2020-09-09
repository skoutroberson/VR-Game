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
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ALightManager::BeginPlay()
{
	Super::BeginPlay();

	//constexpr size_t sizeOfT = sizeof(Light);

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

}

// Called every frame
void ALightManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ALightManager::SetEmmissive(float Value, int index)
{
	Lights[index].Mesh->SetScalarParameterValueOnMaterials(TEXT("EmissiveWeight"), Value);
}

