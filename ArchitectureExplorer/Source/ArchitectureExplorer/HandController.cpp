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
#include "DrawDebugHelpers.h"
#include "Components/SkeletalMeshComponent.h"

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

	UActorComponent * MeshComponent = GetComponentByClass(USkeletalMeshComponent::StaticClass());
	HandMesh = Cast<USkeletalMeshComponent>(MeshComponent);
	if (HandMesh == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("Skeletal Mesh cast failed in HandController.cpp"));
	}

}

// Called every frame
void AHandController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//DrawDebugLines(DeltaTime);	///////////////////// DEBUG HELPER

	if (bIsClimbing)
	{
		FVector HandControllerDelta = GetActorLocation() - ClimbingStartLocation;
		GetAttachParentActor()->AddActorWorldOffset(-HandControllerDelta);
		UE_LOG(LogTemp, Warning, TEXT("CLIMBINGGGGGGGG"));
	}
	else if (bIsUsingDoor)
	{
		CheckDoorDistance();
	}
}

void AHandController::Grip()
{
	bIsGripping = true;

	if (bCanGrab)
	{
		if (!bIsGrabbing)
		{
			bIsGrabbing = true;
			//AGrabbable * ActorToGrab = Cast<AGrabbable>(GrabActor);
			ActorBeingGrabbed = Cast<AGrabbable>(GrabActor);

			if (ActorBeingGrabbed != nullptr)
			{

				if (ActorBeingGrabbed == SisterController->ActorBeingGrabbed)
				{
					SisterController->Release();
				}

				// I could make this mesh global
				UPrimitiveComponent * Mesh;
				Mesh = Cast<UPrimitiveComponent>(GrabActor->GetComponentByClass(UPrimitiveComponent::StaticClass()));
				if (Mesh != nullptr)
				{
					FName SocketName = TEXT("");
					if (GrabActor->ActorHasTag(TEXT("Flashlight")))
					{
						bIsHoldingFlashlight = true;
						SocketName = TEXT("GrabSocket");
					}
					else if (GrabActor->ActorHasTag(TEXT("Chainsaw")))
					{
						bIsHoldingChainsaw = true;
						SocketName = TEXT("ChainSocket");
					}
					
					Mesh->SetSimulatePhysics(false);
					GripSize = ActorBeingGrabbed->ItemGripSize;
					GrabActor->AttachToComponent(HandMesh, FAttachmentTransformRules::SnapToTargetNotIncludingScale, SocketName);
					
					//UE_LOG(LogTemp, Warning, TEXT("%s"), *ActorToGrab->GetName());
				}
			}
			else
			{
				UE_LOG(LogTemp, Warning, TEXT("ActorBeingGrabbed cast failed!"));
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

			OverlappingKnob = OverlappingDoor->GetRootComponent()->GetChildComponent(2);	/////////////////////////////////

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
	bIsGripping = false;

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

	if (bIsGrabbing)	// NEED TO FIX THIS CODE TO NOT DROP AN ITEM IF THE OTHER HAND IS HOLDING IT
	{
		bIsGrabbing = false;

		if (GrabActor != nullptr)
		{
			if (GrabActor->ActorHasTag(TEXT("Flashlight")))
			{
				bIsHoldingFlashlight = false;
			}
			else if (GrabActor->ActorHasTag(TEXT("Chainsaw")))
			{
				bIsHoldingChainsaw = true;
			}

			UPrimitiveComponent * Mesh = nullptr;
			Mesh = Cast<UPrimitiveComponent>(GrabActor->GetComponentByClass(UPrimitiveComponent::StaticClass()));
			if (Mesh != nullptr)
			{
				GrabActor->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
				Mesh->SetSimulatePhysics(true);
				GrabActor = nullptr;
			}
		}
		
	}

	if (GripSize != GripSizeDefault)
	{
		GripSize = GripSizeDefault;
	}
}

void AHandController::ActorBeginOverlap(AActor* OverlappedActor, AActor* OtherActor)
{
	if (!bIsGripping)
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
}

void AHandController::ActorEndOverlap(AActor* OverlappedActor, AActor* OtherActor)
{
	if (!bIsGripping)
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
}

void AHandController::CanInteract()
{
	TArray<AActor*> OverlappingActors;
	GetOverlappingActors(OverlappingActors);
	for (AActor* OverlappingActor : OverlappingActors)
	{
		if (OverlappingActor->ActorHasTag(TEXT("Grab")))
		{
			//UE_LOG(LogTemp, Warning, TEXT("%s"), *OverlappingActor->GetName());

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

void AHandController::CheckDoorDistance()
{
	
}

void AHandController::DrawDebugLines(float DeltaTime)
{
	DrawDebugLine(GetWorld(), GetActorLocation(), GetActorLocation() + GetActorUpVector() * 20.f, FColor::Red, false, 2 * DeltaTime);
	DrawDebugLine(GetWorld(), GetActorLocation(), GetActorLocation() + GetActorRightVector() * 20.f, FColor::Blue, false, 2 * DeltaTime);
	DrawDebugLine(GetWorld(), GetActorLocation(), GetActorLocation() + GetActorForwardVector() * 20.f, FColor::Green, false, 2 * DeltaTime);
	FVector RotVec = GetActorUpVector();
	RotVec = RotVec.RotateAngleAxis(45.f, GetActorRightVector());

	DrawDebugLine(GetWorld(), GetActorLocation(), GetActorLocation() + RotVec * 20.f, FColor::Magenta, false, 2 * DeltaTime);
}

void AHandController::PressFlashlightButton()
{
	if (bIsHoldingFlashlight)
	{
		ButtonPress = 50.f;
	}
}

void AHandController::ReleaseFlashlightButton()
{
	if (bIsHoldingFlashlight)
	{
		ButtonPress = 35.f;
	}
}

void AHandController::SetSisterController(AHandController * Sister)
{
	SisterController = Sister;
}