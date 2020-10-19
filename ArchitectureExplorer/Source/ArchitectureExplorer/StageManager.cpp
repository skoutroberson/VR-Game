   // Fill out your copyright notice in the Description page of Project Settings.


#include "StageManager.h"
#include "Stage1.h"
#include "Stage2.h"
#include "Stage3.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/StaticMeshActor.h"
#include "Components/StaticMeshComponent.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "Materials/MaterialInterface.h"
#include "VRCharacter.h"
#include "DoorManager.h"

// Sets default values
AStageManager::AStageManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	InitializeDoorTriggers();
}

// Called when the game starts or when spawned
void AStageManager::BeginPlay()
{
	Super::BeginPlay();
	InitializeStageNodes();
	InitializeStartEndDoors();
}

// Called every frame
void AStageManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


	//CurrentStageCompleted();

}

void AStageManager::InitializeStageNodes()
{
	StageNode1 = new StageNode;
	StageNode2 = new StageNode;
	StageNode3 = new StageNode;

	CurrentNode = StageNode1;

	StageNode1->StageClass = AStage1::StaticClass();
	StageNode1->NextStage.push_back(StageNode2);

	StageNode2->StageClass = AStage2::StaticClass();
	StageNode2->NextStage.push_back(StageNode3);

	StageNode3->StageClass = AStage3::StaticClass();

	CurrentStageActor = GetWorld()->SpawnActor<AStage>(StageNode1->StageClass);
	
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
		int FlagCount = TestStage->FlagCount;

		// check if all stage flags are true; this can be edited so it can do stuff if only some of them are true;
		for (int i = 0; i < FlagCount; i++)
		{
			if (TestStage->Flags[i] == false)
			{
				return false;
			}
		}

		
		GetWorld()->DestroyActor(TestStage);
		CurrentStageActor = GetWorld()->SpawnActor<AStage>(CurrentNode->NextStage[0]->StageClass);
		//CurrentStageActor = GetWorld()->SpawnActor<AStage>(StageNode2->StageClass);
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

			StartDoor->bCloseDoorFast = true;

			//CurrentNode->StageClass->

			// Advance to new stage?

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

			EndDoor->bCloseDoorFast = true;

			CurrentStageCompleted();

			break;
		}
	}
}

void AStageManager::InitializeStartEndDoors()
{

	AActor * DM = UGameplayStatics::GetActorOfClass(GetWorld(), ADoorManager::StaticClass());
	ADoorManager * DoorManager = Cast<ADoorManager>(DM);

	for (auto Elem : DoorManager->DoorsMap)
	{
		UE_LOG(LogTemp, Warning, TEXT("KEY: %s"), *Elem.Key);
	}

	if (DoorManager != nullptr)
	{
		FString SDN = "BP_Door1";
		FString EDN = "BP_Door2_5";
		StartDoor = DoorManager->GetDoor(SDN);
		EndDoor = DoorManager->GetDoor(EDN);
	}

	StartDoorTrigger->SetWorldLocation(FVector(-560.f, 0, 116));
	EndDoorTrigger->SetWorldLocation(FVector(620, -2005, 115));

	StartDoorTrigger->SetBoxExtent(FVector(10, 80, 100));
	EndDoorTrigger->SetBoxExtent(FVector(240, 10, 100));
}

void AStageManager::InitializeDoorTriggers()
{
	StartDoorTrigger = CreateDefaultSubobject<UBoxComponent>(TEXT("StartDoorTrigger"));
	EndDoorTrigger = CreateDefaultSubobject<UBoxComponent>(TEXT("EndDoorTrigger"));

	StartDoorTrigger->SetCollisionProfileName(TEXT("PlayerTrigger"));
	EndDoorTrigger->SetCollisionProfileName(TEXT("PlayerTrigger"));

	StartDoorTrigger->OnComponentBeginOverlap.AddDynamic(this, &AStageManager::BeginOverlapStartDoorTrigger);
	EndDoorTrigger->OnComponentBeginOverlap.AddDynamic(this, &AStageManager::BeginOverlapEndDoorTrigger);
}