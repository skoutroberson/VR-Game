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
#include "Engine/SkeletalMeshSocket.h"
#include "Math/RotationAboutPointMatrix.h"
#include "Bottle.h"
#include "DestructibleComponent.h"

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

	HandMeshRelativeTransform = HandMesh->GetRelativeTransform();
	ChainsawOffset = Cast<USceneComponent>(GetComponentsByTag(USceneComponent::StaticClass(), FName("Saw"))[0]);

	DeltaLocation = GetActorLocation();
}

// Called every frame
void AHandController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	DeltaLocation = DeltaLocation - GetActorLocation();

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
				if (!ActorBeingGrabbed->bTwoHanded)
				{
					if (ActorBeingGrabbed == SisterController->ActorBeingGrabbed)
					{
						SisterController->Release();
					}
				}
				
				//	TWO HANDED MECHANICS
				if (!ActorBeingGrabbed->bBeingHeld)
				{
					bIsControllingItem = true;
					ActorBeingGrabbed->bBeingHeld = true;

					UPrimitiveComponent * Mesh;
					Mesh = Cast<UPrimitiveComponent>(GrabActor->GetComponentByClass(UPrimitiveComponent::StaticClass()));
					if (Mesh != nullptr)
					{
						Mesh->SetSimulatePhysics(false);
						Mesh->SetEnableGravity(false);
						GripSize = ActorBeingGrabbed->ItemGripSize;
						USceneComponent* Root = GrabActor->GetRootComponent();
						bool b = Root->AttachToComponent(GetRootComponent(), FAttachmentTransformRules::SnapToTargetNotIncludingScale);
						
						FVector ChainsawOffset = ActorBeingGrabbed->HandHoldOffset1;

						if (bLeft)
						{
							ChainsawOffset.Y = -ChainsawOffset.Y;
							ActorBeingGrabbed->SetActorRelativeLocation(ChainsawOffset);
						}
						else
						{
							ActorBeingGrabbed->SetActorRelativeLocation(ChainsawOffset);
						}
					}
				}
				else
				{
					HandMesh->AttachToComponent(ActorBeingGrabbed->HandHold2, FAttachmentTransformRules::SnapToTargetNotIncludingScale);
					GripSize = ActorBeingGrabbed->ItemGripSize;

					ActorBeingGrabbed->MC1OffsetComponent = ChainsawOffset;
					ActorBeingGrabbed->MotionController1 = this;
					ActorBeingGrabbed->MotionController2 = SisterController;
					ActorBeingGrabbed->bRotateTwoHand = true;
					// also need to add the offset so the hand lines up perfectly with the mesh
				}



				// I NEED TO FIX THIS CODE
				/*
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
					else if (GrabActor->ActorHasTag(TEXT("Bot")))
					{
						UE_LOG(LogTemp, Warning, TEXT("Grabbing Bot"));
						bIsHoldingBottle = true;
						SocketName = TEXT("ChainSocket");
					}
					else if (GrabActor->ActorHasTag(TEXT("Ball")))
					{
						UE_LOG(LogTemp, Warning, TEXT("Grabbing ball!"));
						bIsHoldingBall = true;
						SocketName = TEXT("ChainSocket");
					}
					
					Mesh->SetSimulatePhysics(false);
					GripSize = ActorBeingGrabbed->ItemGripSize;
					GrabActor->AttachToComponent(HandMesh, FAttachmentTransformRules::SnapToTargetNotIncludingScale, SocketName);
					
					// if this is a left hand then rotate the item being picked up 180 degrees around the socket's up vector
					//	THIS IF() MIGHT NOT BE NECCASARY
					if (bLeft)
					{
						USceneComponent * HandMeshCasted;
						HandMeshCasted = Cast<USceneComponent>(HandMesh);

						if (HandMeshCasted != nullptr)
						{
							
							FQuat Q = GrabActor->GetActorQuat();
							FVector FV = GrabActor->GetActorForwardVector();
							FVector UV = GrabActor->GetActorUpVector();

							FQuat NewRot = FQuat(UV, PI);

							GrabActor->SetActorRelativeRotation(NewRot);

						}
					}

					//UE_LOG(LogTemp, Warning, TEXT("%s"), *ActorToGrab->GetName());
				}
				*/
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

			//OverlappingKnob = OverlappingDoor->GetRootComponent()->GetChildComponent(2);	/////////////////////////////////
			//UE_LOG(LogTemp, Warning, TEXT("O: %s"), OverlappingKnob->GetName());

			ADoor* CurrentDoor = Cast<ADoor>(OverlappingDoor);

			if (CurrentDoor != nullptr)
			{
				CurrentDoor->PassController(this);
				CurrentDoor->SetIsBeingUsed(true);
				GripSize = 80.f;

				// Attach this hand controller's skeletal mesh to the doorknob.

				// Initiate knob turn mechanics if the door is currently closed all the way.

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

		// Attach HandMesh to this hand controller

		//free(OverlappingDoor);
	}

	if (bIsGrabbing)
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
				bIsHoldingChainsaw = false;
			}
			else if (GrabActor->ActorHasTag(TEXT("Bot")))
			{
				bIsHoldingBottle = false;
			}
			else if (GrabActor->ActorHasTag(TEXT("Ball")))
			{
				bIsHoldingBall = false;
			}

			// two handed mechanics
			if (ActorBeingGrabbed != nullptr)
			{
				if (bIsControllingItem)
				{
					ActorBeingGrabbed->bBeingHeld = false;
					bIsControllingItem = false;

					UPrimitiveComponent * Mesh = nullptr;
					Mesh = Cast<UPrimitiveComponent>(GrabActor->GetComponentByClass(UPrimitiveComponent::StaticClass()));
					if (Mesh != nullptr)
					{
						USceneComponent* Root = GrabActor->GetRootComponent();
						Root->DetachFromComponent(FDetachmentTransformRules::KeepWorldTransform);

						Mesh->SetSimulatePhysics(true);
						Mesh->SetEnableGravity(true);


						GrabActor = nullptr;
					}
				}
				else
				{
					UE_LOG(LogTemp, Warning, TEXT("Not Controlling item"));
					HandMesh->DetachFromParent();
					HandMesh->AttachToComponent(GetRootComponent(), FAttachmentTransformRules::SnapToTargetIncludingScale);
					HandMesh->SetRelativeTransform(HandMeshRelativeTransform);
					ActorBeingGrabbed->bRotateTwoHand = false;
					// stop attaching handmesh to handhold
				}
					
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
	TArray<UPrimitiveComponent*> OverlappingComponents;
	GetOverlappingActors(OverlappingActors);
	GetOverlappingComponents(OverlappingComponents);
	for (AActor* OverlappingActor : OverlappingActors)
	{
		if (OverlappingActor->ActorHasTag(TEXT("Grab")))
		{
			UE_LOG(LogTemp, Warning, TEXT("%s"), *OverlappingActor->GetName());

			bNewCanGrab = true;
			GrabActor = OverlappingActor;
			return;
		}
		else if (OverlappingActor->ActorHasTag(TEXT("Climbable")))
		{
			bNewCanClimb = true;
			return;
		}
		/*
		else if (OverlappingActor->ActorHasTag(TEXT("Door")))
		{
			bNewCanUseDoor = true;
			OverlappingDoor = OverlappingActor;
			return;
		}
		*/
	}
	for (UPrimitiveComponent* OC : OverlappingComponents)
	{
		if (OC->ComponentHasTag(TEXT("Knob")))
		{
			bNewCanUseDoor = true;
			OverlappingKnob = OC;
			OverlappingDoor = OC->GetOwner();
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

void AHandController::PrintSocketOffsets(float DeltaTime)
{
	USceneComponent * HandMeshCasted;
	HandMeshCasted = Cast<USceneComponent>(HandMesh);

	if (HandMeshCasted != nullptr)
	{
		if (GrabActor != nullptr)
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
			FRotator SocketRotation = HandMeshCasted->GetSocketRotation(SocketName);
			FVector SocketLocation = HandMeshCasted->GetSocketLocation(SocketName);
			FMatrix SockRotPonMat = FRotationAboutPointMatrix::Make(SocketRotation, SocketLocation);
			FVector SFV = SockRotPonMat.GetScaledAxis(EAxis::X);
			FVector SRV = SockRotPonMat.GetScaledAxis(EAxis::Y);
			FVector SUV = SockRotPonMat.GetScaledAxis(EAxis::Z);

			FQuat SQ = HandMeshCasted->GetSocketQuaternion(SocketName);
			FQuat SI = FQuat(SockRotPonMat.Inverse());
			
			DrawDebugLine(GetWorld(), SocketLocation, SocketLocation + SQ.GetForwardVector() * 15.f, FColor::Red, false, 2 * DeltaTime);
			DrawDebugLine(GetWorld(), SocketLocation, SocketLocation + SQ.GetRightVector() * 15.f, FColor::Green, false, 2 * DeltaTime);
			DrawDebugLine(GetWorld(), SocketLocation, SocketLocation + SQ.GetUpVector() * 15.f, FColor::Blue, false, 2 * DeltaTime);
			DrawDebugPoint(GetWorld(), GrabActor->GetActorLocation(), 10.f, FColor::White, false, 2 * DeltaTime);

			DrawDebugLine(GetWorld(), SocketLocation, SocketLocation + SI.GetForwardVector() * 7.f, FColor::Magenta, false, 2 * DeltaTime);
			DrawDebugLine(GetWorld(), SocketLocation, SocketLocation + SI.GetRightVector() * 7.f, FColor::Emerald, false, 2 * DeltaTime);
			DrawDebugLine(GetWorld(), SocketLocation, SocketLocation + SI.GetUpVector() * 7.f, FColor::Cyan, false, 2 * DeltaTime);
		}
		
	}
}