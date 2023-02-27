// Fill out your copyright notice in the Description page of Project Settings.


#include "HandController.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/PlayerController.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
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
#include "Chainsaw.h"
#include "Drawer.h"
#include "Ball.h"

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

	DeltaLocation = MotionController->GetComponentLocation();

	Dog = Cast<ADog>(UGameplayStatics::GetActorOfClass(GetWorld(), ADog::StaticClass()));
}

// Called every frame
void AHandController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	DeltaLocation = MotionController->GetComponentLocation() - DeltaLocation;
	HandControllerVelocity = DeltaLocation;

	//UE_LOG(LogTemp, Warning, TEXT("DL: %f, %f, %f"), DeltaLocation.X, DeltaLocation.Y, DeltaLocation.Z);

	//DrawDebugLines(DeltaTime);	///////////////////// DEBUG HELPER

	if (bIsClimbing)
	{
		FVector HandControllerDelta = GetActorLocation() - ClimbingStartLocation;
		GetAttachParentActor()->AddActorWorldOffset(-HandControllerDelta);
	}
	else if (bIsUsingDoor)
	{
		CheckDoorDistance();
	}

	DeltaLocation = MotionController->GetComponentLocation();
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
				//if (!ActorBeingGrabbed->bBeingHeld)
				//{
					bIsControllingItem = true;
					ActorBeingGrabbed->bBeingHeld = true;

					UPrimitiveComponent * Mesh;
					Mesh = Cast<UPrimitiveComponent>(GrabActor->GetComponentByClass(UPrimitiveComponent::StaticClass()));
					if (Mesh != nullptr)
					{
						FVector AL = GetActorLocation();
						float D1 = FVector::Distance(AL, ActorBeingGrabbed->HandHold1->GetComponentLocation());
						float D2 = 99999.f;
						USceneComponent* HH2 = ActorBeingGrabbed->HandHold2;

						if (HH2 != nullptr)
						{
							D2 = FVector::Distance(AL, ActorBeingGrabbed->HandHold2->GetComponentLocation());
						} 

						if (D1 > D2)
						{
							HandMesh->AttachToComponent(ActorBeingGrabbed->HandHold2, FAttachmentTransformRules::SnapToTargetNotIncludingScale);
							
							if (ActorBeingGrabbed->MotionController2 == SisterController)
							{
								SisterController->Release();
							}
							ActorBeingGrabbed->MotionController2 = this;
							ActorBeingGrabbed->Gripped(2);
							bHandHold2 = true;
							//need to apply rotation as well
						}
						else
						{
							HandMesh->AttachToComponent(ActorBeingGrabbed->HandHold1, FAttachmentTransformRules::SnapToTargetNotIncludingScale);
							if (ActorBeingGrabbed->MotionController1 == SisterController)
							{
								SisterController->Release();
							}
							ActorBeingGrabbed->MotionController1 = this;
							ActorBeingGrabbed->Gripped(1);
							bHandHold1 = true;
							//need to apply rotation as well
						}

						if (GrabActor->ActorHasTag(TEXT("Flashlight")))
						{
							bIsHoldingFlashlight = true;
							// update animation to holding flashlight pose
							// update location / rotation 
							// EACH GRABBABLE SHOULD HAVE A GRABLOCATION OFFSET AND A GRABROTATION OFFSET FOR EACH HANDHOLD
						}
						else if (GrabActor->ActorHasTag(TEXT("Saw")))
						{
							bIsHoldingChainsaw = true;
						}
						else if (GrabActor->ActorHasTag(TEXT("Ball")))
						{
							// change dog's look at actor to this ball
							// fetch on release
						}

						/*
						// attach handmesh to chainsaw
						// interp chainsaw to HandController
						

						Mesh->SetSimulatePhysics(false);
						Mesh->SetEnableGravity(false);
						GripSize = ActorBeingGrabbed->ItemGripSize;
						USceneComponent* Root = GrabActor->GetRootComponent();
						bool b = Root->AttachToComponent(GetRootComponent(), FAttachmentTransformRules::SnapToTargetNotIncludingScale);
						
						FVector ChainsawOffset = ActorBeingGrabbed->HandHoldOffset1;

						if (bLeft)
						{
							//ActorBeingGrabbed->NegateYAxisOffset
							ChainsawOffset.Y = -ChainsawOffset.Y;
							ActorBeingGrabbed->SetActorRelativeLocation(ChainsawOffset);
						}
						else
						{
							ActorBeingGrabbed->SetActorRelativeLocation(ChainsawOffset);
						}
						*/
					}
				//}
				/*
				else
				{
					HandMesh->AttachToComponent(ActorBeingGrabbed->HandHold2, FAttachmentTransformRules::SnapToTargetNotIncludingScale);
					/*
					
					GripSize = ActorBeingGrabbed->ItemGripSize;

					ActorBeingGrabbed->MC1OffsetComponent = ChainsawOffset;
					ActorBeingGrabbed->MotionController1 = this;
					ActorBeingGrabbed->MotionController2 = SisterController;
					ActorBeingGrabbed->bRotateTwoHand = true;
					*/
					// also need to add the offset so the hand lines up perfectly with the mesh
				//}
				


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

			AVRCharacter * VRChar = Cast<AVRCharacter>(GetAttachParentActor());
			VRChar->bClimbing = true;

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
				//GripSize = 80.f;
				
				AttachHandMeshToDoor(CurrentDoor);

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
	else if (bCanUseDrawer)
	{
		if (!bIsUsingDrawer)
		{
			bIsUsingDrawer = true;

			ADrawer * CurrentDrawer = Cast<ADrawer>(GrabActor);
			
			if (CurrentDrawer != nullptr)
			{
				UE_LOG(LogTemp, Warning, TEXT("BIG DRAWER!!!!!"));
				CurrentDrawer->GrabDrawer(this);
				HandMesh->AttachToComponent(GrabActor->GetRootComponent(), FAttachmentTransformRules::SnapToTargetNotIncludingScale);
				// need to change hand animation and add an offset here to grab the handle
			}
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
		
		// Have the player start updating their capsule height again
		if (!SisterController->bIsClimbing)
		{
			AVRCharacter * VRChar = Cast<AVRCharacter>(GetAttachParentActor());
			VRChar->bClimbing = false;
		}

	}
	// door
	if (bIsUsingDoor)
	{
		bIsUsingDoor = false;
		ADoor* CurrentDoor = Cast<ADoor>(OverlappingDoor);

		if (CurrentDoor != nullptr && !CurrentDoor->bLocked)
		{
			CurrentDoor->SetIsBeingUsed(false);
		}

		DetachHandMeshAndReattachToHC();

		// Attach HandMesh to this hand controller

		//free(OverlappingDoor);
	}
	else if (bIsUsingDrawer)
	{
		bIsUsingDrawer = false;
		ADrawer * CurrentDrawer = Cast<ADrawer>(GrabActor);
		if (CurrentDrawer != nullptr)
		{
			CurrentDrawer->bBeingGrabbed = false;
		}
		DetachHandMeshAndReattachToHC();
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
			else if (GrabActor->ActorHasTag(TEXT("Saw")))
			{
				bIsHoldingChainsaw = false;

				if (bRevvingChainsaw)
				{
					bRevvingChainsaw = false;
					AChainsaw * C = Cast<AChainsaw>(GrabActor);
					C->ReleaseTrigger();
				}
			}
			else if (GrabActor->ActorHasTag(TEXT("Bot")))
			{
				bIsHoldingBottle = false;
			}
			else if (GrabActor->ActorHasTag(TEXT("Ball")))
			{
				bIsHoldingBall = false;

				if (Dog->bWantsToFetch)
				{
					Dog->FetchBall();
				}
				//tell dog to fetch
			}

			// two handed mechanics
			if (ActorBeingGrabbed != nullptr)
			{
				DetachHandMeshAndReattachToHC();

				if (bIsControllingItem)
				{
					ActorBeingGrabbed->bBeingHeld = false;
					bIsControllingItem = false;
				}
				if (bHandHold1)
				{
					ActorBeingGrabbed->Released(1);
					bHandHold1 = false;
				}
				else if (bHandHold2)
				{
					ActorBeingGrabbed->Released(2);
					bHandHold2 = false;
				}
				/*
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
				*/	
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
			//UE_LOG(LogTemp, Warning, TEXT("Can Grab!"));
			GripSize = GripSizeCanGrab;

			PlayCanGrabHapticEffect();
		}
		bCanGrab = bNewCanGrab;
		// Climb mechanics
		if (!bCanClimb && bNewCanClimb)
		{
			//UE_LOG(LogTemp, Warning, TEXT("Can Climb!"));
			GripSize = GripSizeCanGrab;

			PlayCanGrabHapticEffect();
		}
		bCanClimb = bNewCanClimb;
		// Door mechanics
		if (!bIsUsingDoor && !bCanUseDoor && bNewCanUseDoor)
		{
			//UE_LOG(LogTemp, Warning, TEXT("Can use door!"));
			GripSize = GripSizeCanGrab;

			PlayCanGrabHapticEffect();
		}
		bCanUseDoor = bNewCanUseDoor;

		if (!bIsUsingDrawer && !bCanUseDrawer && bNewCanUseDrawer)
		{
			GripSize = GripSizeCanGrab;

			PlayCanGrabHapticEffect();
		}
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
		bCanUseDrawer = bNewCanUseDrawer;

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
			//UE_LOG(LogTemp, Warning, TEXT("%s"), *OverlappingActor->GetName());

			if (OverlappingActor->IsA(ABall::StaticClass()))
			{
				// cant interact if the ball is being fetched
				ABall *Ball = Cast<ABall>(OverlappingActor);
				if (Ball != nullptr)
				{
					if (Ball->bBeingFetched)
					{
						bNewCanGrab = false;
						return;
					}
				}
			}

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
		else if (OC->ComponentHasTag(TEXT("Drawer")))
		{
			bNewCanUseDrawer = true;
			GrabActor = OC->GetAttachmentRootActor();
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

void AHandController::DetachHandMeshAndReattachToHC()
{
	HandMesh->DetachFromComponent(FDetachmentTransformRules::KeepWorldTransform);
	HandMesh->AttachToComponent(GetRootComponent(), FAttachmentTransformRules::SnapToTargetIncludingScale);
	HandMesh->SetRelativeTransform(HandMeshRelativeTransform);
}

void AHandController::AttachHandMeshToDoor(AActor* TheDoor)
{
	HandMesh->AttachToComponent(OverlappingKnob, FAttachmentTransformRules::SnapToTargetNotIncludingScale);

	if (bLeft)
	{
		HandMesh->AddLocalOffset(FVector(-2.795609f,16.379856f,0.054878f));
		HandMesh->AddLocalRotation(FRotator(38.562122f, -8.343560f, 3.542102f));
	}
	else
	{
		HandMesh->AddLocalOffset(HandMeshDoorOffset);
		HandMesh->AddLocalRotation(FRotator(38.562122f, -167.167526f, 8.788214f));
	}
	
}

void AHandController::PlayCanGrabHapticEffect()
{
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