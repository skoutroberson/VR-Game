// Fill out your copyright notice in the Description page of Project Settings.


#include "HandController.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/PlayerController.h"
#include "Door.h"
#include "XRMotionControllerBase.h"

// Sets default values
AHandController::AHandController()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MotionController = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("MotionController"));
	SetRootComponent(MotionController);
}

// Called when the game starts or when spawned
void AHandController::BeginPlay()
{
	Super::BeginPlay();

	OnActorBeginOverlap.AddDynamic(this, &AHandController::ActorBeginOverlap);
	OnActorEndOverlap.AddDynamic(this, &AHandController::ActorEndOverlap);
}

// Called every frame
void AHandController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (bIsClimbing)
	{
		FVector HandControllerDelta = GetActorLocation() - ClimbingStartLocation;
		GetAttachParentActor()->AddActorWorldOffset(-HandControllerDelta);
		UE_LOG(LogTemp, Warning, TEXT("CLIMBINGGGGGGGG"));
	}

}

void AHandController::Grip()
{
	// climb
	if (bCanClimb)
	{
		if (!bIsClimbing)
		{
			bIsClimbing = true;
			ClimbingStartLocation = GetActorLocation();
		}
	}
	// door
	if (bCanUseDoor)
	{
		if (!bIsUsingDoor)
		{
			bIsUsingDoor = true;
			ADoor* CurrentDoor = Cast<ADoor>(OverlappingDoor);

			if (CurrentDoor != nullptr)
			{
				CurrentDoor->PassController(this);
				CurrentDoor->SetIsBeingUsed(true);

			}
			else
			{
				UE_LOG(LogTemp, Warning, TEXT("CurrentDoor cast failed!!!"));
			}
			//UsingDoorLocation = GetActorLocation();
		}
	}
}

void AHandController::Release()
{
	//climb
	if (bIsClimbing)
	{
		bIsClimbing = false;
	}
	// door
	if (bIsUsingDoor)
	{
		bIsUsingDoor = false;
		ADoor* CurrentDoor = Cast<ADoor>(OverlappingDoor);

		if (CurrentDoor != nullptr)
		{
			CurrentDoor->SetIsBeingUsed(false);
		}
		//free(OverlappingDoor);
	}
}

void AHandController::ActorBeginOverlap(AActor* OverlappedActor, AActor* OtherActor)
{
	// Set bNewCanClimb and bNewCanUseDoor
	CanInteract();

	// Climb mechanics
	if (!bCanClimb && bNewCanClimb)
	{
		UE_LOG(LogTemp, Warning, TEXT("Can Climb!"));

		APawn* Pawn = Cast<APawn>(GetAttachParentActor());
		if (Pawn != nullptr)
		{
			APlayerController* Controller = Cast<APlayerController>(Pawn->GetController());

			if (Controller != nullptr)
			{
				Controller->PlayHapticEffect(HapticEffect, MotionController->GetTrackingSource());
			}
		}
	}
	bCanClimb = bNewCanClimb;
	// Door mechanics
	if (!bIsUsingDoor && !bCanUseDoor && bNewCanUseDoor)
	{
		UE_LOG(LogTemp, Warning, TEXT("Can use door!"));

		APawn* Pawn = Cast<APawn>(GetAttachParentActor());
		if (Pawn != nullptr)
		{
			APlayerController* Controller = Cast<APlayerController>(Pawn->GetController());

			if (Controller != nullptr)
			{
				Controller->PlayHapticEffect(HapticEffect, MotionController->GetTrackingSource());
			}
		}
	}
	bCanUseDoor = bNewCanUseDoor;
}

void AHandController::ActorEndOverlap(AActor* OverlappedActor, AActor* OtherActor)
{
	//bCanClimb = CanClimb();
	CanInteract();
	bCanClimb = bNewCanClimb;
	bCanUseDoor = bNewCanUseDoor;
}

void AHandController::CanInteract()
{
	TArray<AActor*> OverlappingActors;
	GetOverlappingActors(OverlappingActors);
	for (AActor* OverlappingActor : OverlappingActors)
	{
		if (OverlappingActor->ActorHasTag(TEXT("Climbable")))
		{
			bNewCanClimb = true;
			return;
		}
		if (OverlappingActor->ActorHasTag(TEXT("Door")))
		{
			bNewCanUseDoor = true;
			OverlappingDoor = OverlappingActor;
			return;
		}
	}
	bNewCanClimb = false;
	bNewCanUseDoor = false;
}

