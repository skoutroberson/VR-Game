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

	//Stages.push_back(AStage1::StaticClass());

	
	// RootStageNode.NextStage.push_back(AStage2::StaticClass());
	
}

// Called when the game starts or when spawned
void AStageManager::BeginPlay()
{
	Super::BeginPlay();

	//CurrentStage = GetWorld()->SpawnActor<AStage>(Stages[0]);
	//GetWorld()->DestroyActor(CurrentStage);


	SetupStageNodes();


	//QUICK ON/OFF PROTOTYPE CODE FOR LIGHT FIXTURE MATERIALS
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

void AStageManager::SetupStageNodes()
{
	StageNode0 = new StageNode;
	StageNode0->StageClass = AStage1::StaticClass();

	constexpr size_t sizeOfT = sizeof(StageNode0);

	GetWorld()->SpawnActor<AStage>(StageNode0->StageClass);
}

