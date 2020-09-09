// Fill out your copyright notice in the Description page of Project Settings.


#include "HandController.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/PlayerController.h"
#include "Door.h"
#include "XRMotionControllerBase.h"
#include "Kismet/KismetMathLibrary.h"
#include "Flashlight.h"
#include "Grabbable.h"
#include "Components/StaticMeshComponent.h"

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
	if (bCanGrab)
	{
		if (!bIsGrabbing)
		{
			bIsGrabbing = true;
			AGrabbable * ActorToGrab = Cast<AGrabbable>(GrabActor);
			if (ActorToGrab != nullptr)
			{
				// I could make this mesh global
				UStaticMeshComponent * Mesh;
				Mesh = Cast<UStaticMeshComponent>(GrabActor->GetComponentByClass(UStaticMeshComponent::StaticClass()));
				if (Mesh != nullptr)
				{
					UE_LOG(LogTemp, Warning, TEXT("%s"), *ActorToGrab->GetName());
					GripSize = ActorToGrab->ItemGripSize;
					FName SocketName = TEXT("GrabSocket");
					Mesh->SetSimulatePhysics(false);
					//GrabActor->AttachToComponent(this->GetRootComponent(), FAttachmentTransformRules::SnapToTargetNotIncludingScale, SocketName);
					
					GrabActor->AttachToActor(this, FAttachmentTransformRules::SnapToTargetNotIncludingScale, SocketName);
				}
			}
			else
			{
				UE_LOG(LogTemp, Warning, TEXT("CAST FAILED!!!!!"));
			}
			return;
		}
	}
	else if (bCanClimb)
	{
		if (!bIsClimbing)
		{
			bIsClimbing = true;
			ClimbingStartLocation = GetActorLocation();
			GripSize = 80.f;
			return;
		}
	}
	else if (bCanUseDoor)
	{
		if (!bIsUsingDoor)
		{
			bIsUsingDoor = true;
			ADoor* CurrentDoor = Cast<ADoor>(OverlappingDoor);

			if (CurrentDoor != nullptr)
			{
				CurrentDoor->PassController(this);
				CurrentDoor->SetIsBeingUsed(true);
				GripSize = 80.f;
				return;
			}
			else
			{
				UE_LOG(LogTemp, Warning, TEXT("CurrentDoor cast failed!!!"));
			}
			//UsingDoorLocation = GetActorLocation();
		}
	}
	GripSize = GripSizeMax;
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

	if (bIsGrabbing)
	{
		bIsGrabbing = false;

		UStaticMeshComponent * Mesh;
		Mesh = Cast<UStaticMeshComponent>(GrabActor->GetComponentByClass(UStaticMeshComponent::StaticClass()));
		if (Mesh != nullptr)
		{
			GrabActor->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
			Mesh->SetSimulatePhysics(true);
			GrabActor = nullptr;
		}
	}

	if (GripSize != GripSizeDefault)
	{
		GripSize = GripSizeDefault;
	}
}

void AHandController::ActorBeginOverlap(AActor* OverlappedActor, AActor* OtherActor)
{
	// Set bNewCanClimb and bNewCanUseDoor
	CanInteract();

	// Grab mechanics
	if (!bCanGrab && bNewCanGrab)
	{
		UE_LOG(LogTemp, Warning, TEXT("Can Grab!"));
		GripSize = GripSizeCanGrab;

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
	bCanGrab = bNewCanGrab;
	// Climb mechanics
	if (!bCanClimb && bNewCanClimb)
	{
		UE_LOG(LogTemp, Warning, TEXT("Can Climb!"));
		GripSize = GripSizeCanGrab;

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
		GripSize = GripSizeCanGrab;

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
	bCanGrab = bNewCanGrab;

	if (GripSize == GripSizeCanGrab)
	{
		GripSize = GripSizeDefault;
	}
}

void AHandController::CanInteract()
{
	TArray<AActor*> OverlappingActors;
	GetOverlappingActors(OverlappingActors);
	for (AActor* OverlappingActor : OverlappingActors)
	{
		if (OverlappingActor->ActorHasTag(TEXT("Grab")))
		{
			bNewCanGrab = true;
			GrabActor = OverlappingActor;
			return;
		}
		else if (OverlappingActor->ActorHasTag(TEXT("Climbable")))
		{
			bNewCanClimb = true;
			return;
		}
		else if (OverlappingActor->ActorHasTag(TEXT("Door")))
		{
			bNewCanUseDoor = true;
			OverlappingDoor = OverlappingActor;
			return;
		}
	}
	bNewCanClimb = false;
	bNewCanUseDoor = false;
	bNewCanGrab = false;
}



