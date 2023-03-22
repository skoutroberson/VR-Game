// Fill out your copyright notice in the Description page of Project Settings.


#include "PortalLadderRoom.h"
#include "Engine/World.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "HandController.h"

// Sets default values
APortalLadderRoom::APortalLadderRoom()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RoomMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RoomMesh"));
	SetRootComponent(RoomMesh);

	TeleportTrigger = CreateDefaultSubobject<UBoxComponent>(TEXT("TeleportTrigger"));
	TeleportTrigger->AttachToComponent(RoomMesh, FAttachmentTransformRules::KeepWorldTransform);
}

// Called when the game starts or when spawned
void APortalLadderRoom::BeginPlay()
{
	Super::BeginPlay();

	World = GetWorld();
	
	TArray<AActor*> HCs;
	UGameplayStatics::GetAllActorsOfClass(World, AHandController::StaticClass(), HCs);
	for (auto i : HCs)
	{
		AHandController *HC = Cast<AHandController>(i);
		HandControllers.Add(HC);
	}

}

// Called every frame
void APortalLadderRoom::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (bUpdateSoundsAndLighting)
	{
		UpdateSoundsAndLightingBasedOnDoorAngle(DeltaTime);
	}
}

void APortalLadderRoom::Teleport()
{
	const FVector AL = GetActorLocation();
	
	FVector ClimbingStartLocation;

	// set ClimbingStartLocation
	for (auto i : HandControllers)
	{
		if (i->bIsClimbing)
		{
			ClimbingStartLocation = i->ClimbingStartLocation;
			break;
		}
	}
	


	
}

void APortalLadderRoom::UpdateSoundsAndLightingBasedOnDoorAngle(float DeltaTime)
{
}

