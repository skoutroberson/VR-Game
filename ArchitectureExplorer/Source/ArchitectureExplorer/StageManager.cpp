// Fill out your copyright notice in the Description page of Project Settings.


#include "StageManager.h"
#include "Stage1.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/StaticMeshActor.h"
#include "Components/StaticMeshComponent.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "Materials/MaterialInterface.h"

// Sets default values
AStageManager::AStageManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AStageManager::BeginPlay()
{
	Super::BeginPlay();
	
	FVector Location(0.0f, 0.0f, 0.0f);
	FRotator Rotation(0.0f, 0.0f, 0.0f);
	FActorSpawnParameters SpawnInfo;

	GetWorld()->SpawnActor<AStage1>(SpawnInfo);
	CurrentStage = UGameplayStatics::GetActorOfClass(GetWorld(), AStage1::StaticClass());
	//GetWorld()->DestroyActor(CurrentStage);

	//////////////////////////////////////////////////////////////////////////////////////////////////////
	
	//FString LampString = FString("Lamp1");
	TArray<AActor*> SMActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AStaticMeshActor::StaticClass(), SMActors);
	UStaticMeshComponent * Lamp = nullptr;
	for (auto SMActor : SMActors)
	{
		if (SMActor->GetName().Equals(FString("Lamp1"), ESearchCase::IgnoreCase))
		{
			Lamp = Cast<UStaticMeshComponent>(SMActor->GetRootComponent());
			break;
		}
	}

	if (Lamp != nullptr)
	{
		UMaterialInterface * LampMatInterface = Lamp->GetMaterial(0);
		UMaterialInstanceDynamic* DynamicMaterial = UMaterialInstanceDynamic::Create(LampMatInterface, Lamp);
		Lamp->SetMaterial(0, DynamicMaterial);
		Lamp->SetScalarParameterValueOnMaterials(TEXT("EmissiveWeight"), 100.f);
	}
	
	

	///////////////////////////////////////////////////////////////////////////////////////////////////////
}

// Called every frame
void AStageManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

