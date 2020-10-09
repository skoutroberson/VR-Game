 // Fill out your copyright notice in the Description page of Project Settings.


#include "StageManager.h"
#include "Stage1.h"
#include "Stage2.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/StaticMeshActor.h"
#include "Components/StaticMeshComponent.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "Materials/MaterialInterface.h"
#include "VRCharacter.h"

// Sets default values
AStageManager::AStageManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	StartDoorTrigger = CreateDefaultSubobject<UBoxComponent>(TEXT("StartDoorTrigger"));
	EndDoorTrigger = CreateDefaultSubobject<UBoxComponent>(TEXT("EndDoorTrigger"));

	StartDoorTrigger->OnComponentBeginOverlap.AddDynamic(this, &AStageManager::BeginOverlapStartDoorTrigger);
	EndDoorTrigger->OnComponentBeginOverlap.AddDynamic(this, &AStageManager::BeginOverlapEndDoorTrigger);
}

// Called when the game starts or when spawned
void AStageManager::BeginPlay()
{
	Super::BeginPlay();

	SetupStageNodes();

	StartDoorTrigger->SetWorldLocation(FVector(-560.f, 0, 116));
	EndDoorTrigger->SetWorldLocation(FVector(620, -2005, 115));

	StartDoorTrigger->SetBoxExtent(FVector(10, 80, 100));
	EndDoorTrigger->SetBoxExtent(FVector(240, 10, 100));
}

// Called every frame
void AStageManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


	CurrentStageCompleted();

}

void AStageManager::SetupStageNodes()
{
	StageNode0 = new StageNode;
	StageNode2 = new StageNode;

	CurrentNode = StageNode0;

	StageNode0->StageClass = AStage1::StaticClass();
	StageNode0->NextStage.push_back(StageNode2);

	StageNode2->StageClass = AStage2::StaticClass();

	//constexpr size_t sizeOfT = sizeof(StageNode0);

	CurrentStageActor = GetWorld()->SpawnActor<AStage>(StageNode0->StageClass);
	
	//GetWorld()->DestroyActor(CurrentStage);
}

void AStageManager::TESTLIGHTFUNCTION()
{
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

bool AStageManager::CurrentStageCompleted()
{
	AStage * TestStage = Cast<AStage>(CurrentStageActor);

	if (TestStage != nullptr)
	{
		if (TestStage->bIsCompleted)
		{
			GetWorld()->DestroyActor(TestStage);
			CurrentStageActor = GetWorld()->SpawnActor<AStage>(StageNode2->StageClass);
		}
	}

	return false;
}

void AStageManager::BeginOverlapStartDoorTrigger(UPrimitiveComponent * FirstComponent, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	TArray<AActor*> OverlappingActors;
	StartDoorTrigger->GetOverlappingActors(OverlappingActors, AVRCharacter::StaticClass());

	for (AActor* OverlappingActor : OverlappingActors)
	{
		if (OverlappingActor->ActorHasTag(TEXT("Player")))
		{
			//	Close door
			UE_LOG(LogTemp, Warning, TEXT("Door overlap bro!!!"));
			StartDoorTrigger->SetGenerateOverlapEvents(false);
			EndDoorTrigger->SetGenerateOverlapEvents(true);

			break;
		}
	}
}

void AStageManager::BeginOverlapEndDoorTrigger(UPrimitiveComponent * FirstComponent, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	TArray<AActor*> OverlappingActors;
	EndDoorTrigger->GetOverlappingActors(OverlappingActors, AVRCharacter::StaticClass());

	for (AActor* OverlappingActor : OverlappingActors)
	{
		if (OverlappingActor->ActorHasTag(TEXT("Player")))
		{
			//	Close door and teleport player when its fully closed.
			UE_LOG(LogTemp, Warning, TEXT("End Door overlap bro!!!"));
			EndDoorTrigger->SetGenerateOverlapEvents(false);
			StartDoorTrigger->SetGenerateOverlapEvents(true);

			break;
		}
	}
}

