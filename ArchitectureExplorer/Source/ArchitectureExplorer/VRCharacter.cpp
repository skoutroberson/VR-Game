// Fill out your copyright notice in the Description page of Project Settings.


#include "VRCharacter.h"
#include "Camera/CameraComponent.h"
#include "Components/StaticMeshComponent.h"
#include "DrawDebugHelpers.h"
#include "Engine/World.h"
#include "TimerManager.h"
#include "Components/CapsuleComponent.h"
#include "MotionControllerComponent.h"
#include "Misc/FrameRate.h"
#include "GameFramework/PlayerController.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Math/UnrealMathVectorCommon.h"
#include "Math/UnrealMathUtility.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/SkeletalMeshComponent.h"
#include "XRMotionControllerBase.h"
#include "HeadMountedDisplay.h"
#include "Animation/AnimBlueprint.h"
#include "Animation/AnimInstance.h"
#include "Animation/AnimBlueprintGeneratedClass.h"
#include "HandController.h"
#include "Errol.h"
#include "Components/SphereComponent.h"
#include "IHeadMountedDisplay.h"
#include "Engine/Engine.h"
#include "IXRTrackingSystem.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Sound/SoundCue.h"
#include "Flashlight.h"
#include "Chainsaw.h"
#include "Components/PostProcessComponent.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "Door.h"
#include "MotionControllerComponent.h"
#include "PortalRoom.h"
#include "Phone.h"

// Sets default values
AVRCharacter::AVRCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//UHeadMountedDisplayFunctionLibrary::SetTrackingOrigin(EHMDTrackingOrigin::Stage);

	VRRoot = CreateDefaultSubobject<USceneComponent>(TEXT("VRRoot"));
	VRRoot->SetupAttachment(GetRootComponent());

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(VRRoot);

	LeftHandMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("LeftHandMesh"));
	LeftHandMesh->SetupAttachment(VRRoot);

	RightHandMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("RightHandMesh"));
	RightHandMesh->SetupAttachment(VRRoot);

	//LeftController->SetTrackingSource(EControllerHand::Left);
	//LeftController->bDisplayDeviceModel = true;
	// Create the hand mesh for visualization

	//RightController->SetTrackingSource(EControllerHand::Right);
	//RightController->bDisplayDeviceModel = true;

	DestinationMarker = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DestinationMarker"));
	DestinationMarker->SetupAttachment(GetRootComponent());

	CamHeightParams.AddIgnoredActor(this);

	PostProcessComponent = CreateDefaultSubobject<UPostProcessComponent> (TEXT("PostProcessComponent"));
	DestinationMarker->SetupAttachment(GetRootComponent());

	
	//PostProcessComponent->GetProperties().Settings.

	//HeadCollisionSphere = Cast<USphereComponent*>(Camera->GetChildComponent(0));
}

// Called when the game starts or when spawned
void AVRCharacter::BeginPlay()
{
	Super::BeginPlay();
	
	DestinationMarker->SetVisibility(false);

	LeftController = GetWorld()->SpawnActor<AHandController>(HandControllerClass);
	if (LeftController != nullptr)
	{
		LeftController->AttachToComponent(VRRoot, FAttachmentTransformRules::KeepRelativeTransform);
		LeftController->SetHand(EControllerHand::Left);
		LeftController->SetOwner(this);
		LeftController->SetActorScale3D(FVector(1.f,-1.f,1.f));
		LeftController->bLeft = true;
		//LeftController->SetActorRelativeLocation(FVector(-10, -4, -2));
	}

	RightController = GetWorld()->SpawnActor<AHandController>(HandControllerClass);
	if (RightController != nullptr)
	{
		RightController->AttachToComponent(VRRoot, FAttachmentTransformRules::KeepRelativeTransform);
		RightController->SetHand(EControllerHand::Right);
		RightController->SetOwner(this);
	}

	LeftController->SetSisterController(RightController);
	RightController->SetSisterController(LeftController);

	FRotator DR;
	FVector DP;
	UHeadMountedDisplayFunctionLibrary::GetOrientationAndPosition(DR, DP);
	HMDZPos = DP.Z;

	// I don't remember why I did this
	UEngineTypes::ConvertToCollisionChannel(ETraceTypeQuery::TraceTypeQuery1);

	/*
	//	Check if VR is enabled
	IHeadMountedDisplay *pHmd = nullptr;
	TSharedPtr<IStereoRendering, ESPMode::ThreadSafe> pStereo = nullptr;
	if (GEngine) 
	{
		pHmd = GEngine->XRSystem->GetHMDDevice();
		pStereo = GEngine->XRSystem->GetStereoRenderingDevice();
	}
	if (pHmd->IsHMDEnabled() && pHmd->IsHMDConnected() && pStereo->IsStereoEnabled()) 
	{
		// in VR mode
	}
	else
	{
		VRRoot->SetRelativeLocation(FVector(0,0,50.f));
	}
	*/

	DeltaLocation = GetActorLocation();

	TArray<AActor*> GrabActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AGrabbable::StaticClass(), GrabActors);
	for (auto a : GrabActors)
	{
		UE_LOG(LogTemp, Warning, TEXT("UPDATE2"));
		GetCapsuleComponent()->MoveIgnoreActors.Push(a);
	}
	
	if (BlinkerMaterialBase != nullptr)
	{
		BlinkerMaterialInstance = UMaterialInstanceDynamic::Create(BlinkerMaterialBase, this);
		PostProcessComponent->AddOrUpdateBlendable(BlinkerMaterialInstance);
		BlinkerMaterialInstance->SetScalarParameterValue(FName("Radius"), 2.0f);
	}

	if (FadeMaterialBase != nullptr)
	{
		FadeMaterialInstance = UMaterialInstanceDynamic::Create(FadeMaterialBase, this);
		PostProcessComponent->AddOrUpdateBlendable(FadeMaterialInstance);
		FadeMaterialInstance->SetScalarParameterValue(FName("FadeValue"), 1.0f);
	}

	FootstepMap.Add(FName("wood"), WoodFootStepSound);
	FootstepMap.Add(FName("tile"), TileFootstepSound);
	FootstepMap.Add(FName("conc"), ConcreteFootStepSound);
	FootstepMap.Add(FName("stai"), StairFootstepSound);
	FootstepMap.Add(FName("dirt"), DirtFootStepSound);

	GetCapsuleComponent()->SetMaskFilterOnBodyInstance(3); // so roach sweeps ignore the capsule
	Cast<USphereComponent>(GetComponentByClass(USphereComponent::StaticClass()))->SetMaskFilterOnBodyInstance(3);

	PlayerController = GetWorld()->GetFirstPlayerController();
	LastCameraPosition = Camera->GetComponentLocation();

	CamColParams.AddIgnoredActor(this);
	TArray<AActor*> Doors;
	//UGameplayStatics::GetAllActorsOfClass(GetWorld(), ADoor::StaticClass(), Doors);
	//CamColParams.AddIgnoredActors(Doors);
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AGrabbable::StaticClass(), Doors);
	CamColParams.AddIgnoredActors(Doors);
	CamColParams.AddIgnoredActor(LeftController);
	CamColParams.AddIgnoredActor(RightController);

	IsCompInViewParams.AddIgnoredActor(this);
}

void AVRCharacter::UpdateCapsuleHeight()
{
	FRotator DR;
	FVector DP;
	UHeadMountedDisplayFunctionLibrary::GetOrientationAndPosition(DR, DP);
	const float CurrentHalfHeight = GetCapsuleComponent()->GetScaledCapsuleHalfHeight();

	if (!bClimbing)
	{
		float dpz = DP.Z;
		dpz = FMath::Clamp(dpz, 4.f, 220.f);

		const float Diff = CurrentHalfHeight - (dpz * 0.5f);

		GetCapsuleComponent()->SetCapsuleHalfHeight(dpz * 0.5f);
		AddActorWorldOffset(FVector(0, 0, -Diff), true);

		FVector RL = VRRoot->GetComponentLocation();
		RL.Z = (GetCapsuleComponent()->GetComponentLocation().Z - GetCapsuleComponent()->GetScaledCapsuleHalfHeight()) - (dpz * 0.14f);
		//RL.Z = (GetCapsuleComponent()->GetComponentLocation().Z - GetCapsuleComponent()->GetScaledCapsuleHalfHeight());

		VRRoot->SetWorldLocation(RL);
	}
	else
	{
		//GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	}

	
}

void AVRCharacter::PressA(bool bLeft)
{
	UE_LOG(LogTemp, Warning, TEXT("AAAAAAA"));
	AHandController * CurrentController = nullptr;
	if (bLeft)
	{
		CurrentController = LeftController;
	}
	else
	{
		CurrentController = RightController;
	}

	if (CurrentController->bIsHoldingFlashlight)
	{
		AActor * GA = CurrentController->GrabActor;
		AFlashlight * FL = Cast<AFlashlight>(GA);
		bool bOn = FL->bOn;
		
		FL->PressButton(true);
	}
	else if (CurrentController->State == HandControllerState::STATE_PHONE)
	{
		UE_LOG(LogTemp, Warning, TEXT("YOOOO"));
		AActor * GA = CurrentController->GrabActor;
		APhone *Phone = Cast<APhone>(GA);
		Phone->AnswerPhone();
	}
	
}

void AVRCharacter::ReleaseA(bool bLeft)
{
	
}

void AVRCharacter::PressTrigger(bool bLeft)
{
	TriggersPressed++;
	//	if holding chainsaw (or shotgun)

	AHandController * CurrentController = nullptr;
	if (bLeft)
	{
		//	to keep this DRY, I need to call something like:
		//	LeftController->PressTrigger()
		//	then in HandController in PressTrigger:
		//	check if this is holding chainsaw handhold1 and if sister controller is holding chainsaw
		//	if so then REV CHAINSAW!
		//	same type of thing for HandController::ReleaseTrigger()
		CurrentController = LeftController;
	}
	else
	{
		CurrentController = RightController;
	}

	if (CurrentController->bIsHoldingChainsaw && CurrentController->bHandHold1)
	{
		CurrentController->bRevvingChainsaw = true;
		AActor * GA = CurrentController->GrabActor;
		AChainsaw * C = Cast<AChainsaw>(GA);
		C->PressTrigger();
	}

	//	else

	if (TriggersPressed > 1)
	{
		bSprint = true;
	}
}

void AVRCharacter::ReleaseTrigger(bool bLeft)
{
	TriggersPressed--;
	//	if holding chainsaw (or shotgun)

	AHandController * CurrentController = nullptr;
	if (bLeft)
	{
		CurrentController = LeftController;
	}
	else
	{
		CurrentController = RightController;
	}

	if (CurrentController->bIsHoldingChainsaw && CurrentController->bHandHold1)
	{
		CurrentController->bRevvingChainsaw = false;
		AActor * GA = CurrentController->GrabActor;
		AChainsaw * C = Cast<AChainsaw>(GA);
		C->ReleaseTrigger();
	}

	//	else

	if (bSprint)
	{
		bSprint = false;
	}
}

void AVRCharacter::PlayFootStepSound()
{
	const float DeltaTime = GetWorld()->DeltaTimeSeconds;
	const float V = FMath::Clamp((DeltaLocation - GetActorLocation()).Size(), 0.0f, 4.f);

	//UE_LOG(LogTemp, Warning, TEXT("V: %f"), V);

	// I should also make the noise quieter if the capsule height is smaller

	if (bFalling)
	{
		bFalling = false;
		// Play Sound
		DistanceMoved = 0.f;

		//UE_LOG(LogTemp, Warning, TEXT("Right Step"));
		float HH = GetCapsuleComponent()->GetScaledCapsuleHalfHeight();
		FVector StepLocation = GetActorLocation();
		StepLocation.Z -= HH;

		UGameplayStatics::PlaySoundAtLocation(GetWorld(), FootstepSound,
			StepLocation, V*2.f, FMath::Clamp(V * 0.5f, 0.9f, 1.3f));
		bRightStep = false;
	}
	else if (V > VelocityThreshold)
	{
		DistanceMoved += V;

		if (DistanceMoved > DistanceThreshold * SprintDistanceMultiplier)
		{
			// Play Sound
			DistanceMoved = 0.f;
			
			//UE_LOG(LogTemp, Warning, TEXT("Right Step"));
			float HH = GetCapsuleComponent()->GetScaledCapsuleHalfHeight();
			FVector StepLocation = GetActorLocation();
			StepLocation.Z -= HH;

			UGameplayStatics::PlaySoundAtLocation(GetWorld(), FootstepSound, 
				StepLocation, V*2.f, FMath::Clamp(V * 0.5f, 0.9f, 1.3f));
			bRightStep = false;

			if (FootstepSound == WoodFootStepSound) // creak sound if we are on wood floor
			{
				int r = FMath::RandRange(0, 2);
				if (r)
				{
					WoodCreak();
					//UGameplayStatics::PlaySoundAtLocation(GetWorld(), WoodCreakSound, StepLocation, FMath::Clamp(V*2.f, 1.0f, 2.0f), FMath::Clamp(V * 0.5f, 0.9f, 1.1f));
				}
			}
		}
	}
	else
	{
		if (DistanceMoved > 0)
		{
			DistanceMoved -= DistanceMovedDecrementAmount * DeltaTime;
			if (DistanceMoved < 0) { DistanceMoved = 0; }
		}
		
	}
}

bool AVRCharacter::CheckFloor()
{

	FVector FootLocation = GetActorLocation();
	FootLocation.Z -= GetCapsuleComponent()->GetScaledCapsuleHalfHeight();

	FVector UV = GetActorUpVector();

	bool FloorTrace = GetWorld()->LineTraceSingleByChannel(HitResult, FootLocation + UV * 2.f, FootLocation - UV * 5.f, ECollisionChannel::ECC_WorldStatic, CamHeightParams);

	
	if (FloorTrace)
	{
		AActor *HitActor = HitResult.GetActor();
		TArray<FName> &Tags = HitActor->Tags;
		//TArray<FName> &Tags = HitResult.Component->ComponentTags;
		
		//Tags.Append(HitResult.Actor->Tags);
		
		if (HitActor != nullptr && Tags.Num() > 0)
		{
			for (auto &t : Tags)
			{
				USoundCue * Ptr = FootstepMap.FindRef(t);
				if (Ptr != nullptr)
				{
					FootstepSound = Ptr;
				}
			}
		}
		
		return true;
	}
	else
	{
		bFalling = GetCharacterMovement()->IsFalling();
		return !bFalling;
	}

	return false;
}

void AVRCharacter::UpdateFootStepAudio()
{
}

// Called every frame
void AVRCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (bBlinkersEnabled)
	{
		float PlayerVelocityScaled = GetVelocity().Size() * 0.01f;
		BlinkerMaterialInstance->SetScalarParameterValue(FName("Radius"), RadiusVsVelocity->GetFloatValue(PlayerVelocityScaled));
	}

	if (bFadeCamera)
	{
		FadeCamera(DeltaTime);
	}

	if (bStuckInWall)
	{
		UnStickCamera(DeltaTime);
	}

	//GetWorld()->GetFirstPlayerController()->SetControlRotation(Camera->GetComponentRotation());

	//	Need to do this every frame so the collision capsule stays on top of the player's camera
	CorrectCameraOffset();

	//	Updates the capsule height to be the height from the floor to the HMD

	//if (!bClimbing)
	//{
		//UE_LOG(LogTemp, Warning, TEXT("NOT CLIMBING"));
		UpdateCapsuleHeight();
	//}
	//else
	//{
		//UE_LOG(LogTemp, Warning, TEXT("CLIMBING"));
	//}

	if (bTeleportEnabled)
	{
		UpdateDestinationMarker();
	}

	if (bDodge)
	{
		Dodge();
	}

	if (bAction1 && bAction2 && !bDodge)
	{
		InterpretMCMotion();

		if (bSprint)
		{
			MoveForward(1.0f);
		}
	}

	LeftHandMesh->SetWorldLocation(LeftController->GetActorLocation());
	RightHandMesh->SetWorldLocation(RightController->GetActorLocation());
	LeftHandMesh->SetWorldRotation(LeftController->GetActorRotation());
	RightHandMesh->SetWorldRotation(RightController->GetActorRotation());
	//LeftHandMesh->SetWorldLocationAndRotation(LeftController->GetActorLocation(), LeftController->GetActorQuat());
	//RightHandMesh->SetWorldLocationAndRotation(RightController->GetActorLocation(), RightController->GetActorQuat());

	if (CheckFloor())
	{
		PlayFootStepSound();
	}
	
	DeltaLocation = GetActorLocation();
	LastCameraLocation = Camera->GetComponentLocation();
}

void AVRCharacter::LockCameraPosition()
{
	VRRoot->SetRelativeLocation(-Camera->GetRelativeLocation());
}

void AVRCharacter::Dodge()
{
	SetActorLocation(FMath::VInterpTo(GetActorLocation(), DodgePos, GetWorld()->DeltaTimeSeconds, 1.0f));
}

void AVRCharacter::InterpretMCMotion()
{
	
		// (x >= 0) ? x : -x

	FVector LeftOffset = LeftController->GetActorLocation() - MCLeftPos;
	FVector RightOffset = RightController->GetActorLocation() - MCRightPos;

	// This is the float that will determine how fast to move the player (for sprinting).
	MCCrossMag = FVector::CrossProduct(LeftOffset, RightOffset).Size() / 100.f;

	UE_LOG(LogTemp, Warning, TEXT("MCCRoss: %f"), MCCrossMag);

	AddMovementInput(Camera->GetForwardVector(), MCCrossMag);

	MCLeftPos = LeftController->GetActorLocation();
	MCRightPos = RightController->GetActorLocation();
}

void AVRCharacter::UpdateDestinationMarker()
{
	FVector Start = RightController->GetActorLocation();
	FVector End = Start + RightController->GetActorForwardVector() * MaxTeleportDistance;

	
	bool bHit = GetWorld()->LineTraceSingleByChannel(HitResult, Start, End, ECC_Visibility);

	if (bHit)
	{
		if (fabsf(1 - FVector::DotProduct(HitResult.Normal, FVector(0, 0, 1))) < 0.4f)
		{
			DestinationMarker->SetVisibility(true);
			DestinationMarker->SetWorldLocation(HitResult.Location);
		}
		else
		{
			DestinationMarker->SetVisibility(false);
		}
	}
	else
	{
		DestinationMarker->SetVisibility(false);
	}

	//DestinationMarker->SetWorldLocation(CameraTraceResult.ImpactPoint);
}

// Called to bind functionality to input
void AVRCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis(TEXT("Forward"), this, &AVRCharacter::MoveForward);
	PlayerInputComponent->BindAxis(TEXT("Right"), this, &AVRCharacter::MoveRight);
	PlayerInputComponent->BindAxis(TEXT("TurnRight"), this, &AVRCharacter::TurnRight);
	PlayerInputComponent->BindAxis(TEXT("LookUp"), this, &AVRCharacter::LookUp);

	PlayerInputComponent->BindAxis(TEXT("RightTriggerAxis"), this, &AVRCharacter::RightTriggerAxis);
	PlayerInputComponent->BindAxis(TEXT("LeftTriggerAxis"), this, &AVRCharacter::LeftTriggerAxis);

	PlayerInputComponent->BindAxis(TEXT("RightGripAxis"), this, &AVRCharacter::RightGripAxis);
	PlayerInputComponent->BindAxis(TEXT("LeftGripAxis"), this, &AVRCharacter::LeftGripAxis);

PlayerInputComponent->BindAction(TEXT("Teleport"), IE_Released, this, &AVRCharacter::BeginTeleport);

PlayerInputComponent->BindAction(TEXT("Sprint"), IE_Pressed, this, &AVRCharacter::Sprint);
PlayerInputComponent->BindAction(TEXT("Sprint"), IE_Released, this, &AVRCharacter::StopSprint);
PlayerInputComponent->BindAction(TEXT("Click"), IE_Pressed, this, &AVRCharacter::Click);
PlayerInputComponent->BindAction(TEXT("Click"), IE_Released, this, &AVRCharacter::ReleaseClick);

PlayerInputComponent->BindAction(TEXT("GripLeft"), IE_Pressed, this, &AVRCharacter::GripLeft);
PlayerInputComponent->BindAction(TEXT("GripRight"), IE_Pressed, this, &AVRCharacter::GripRight);
PlayerInputComponent->BindAction(TEXT("GripLeft"), IE_Released, this, &AVRCharacter::ReleaseLeft);
PlayerInputComponent->BindAction(TEXT("GripRight"), IE_Released, this, &AVRCharacter::ReleaseRight);

DECLARE_DELEGATE_OneParam(FCustomInputDelegate, const bool);
PlayerInputComponent->BindAction<FCustomInputDelegate>(TEXT("PressA"), IE_Pressed, this, &AVRCharacter::PressA, false);
PlayerInputComponent->BindAction<FCustomInputDelegate>(TEXT("PressA"), IE_Released, this, &AVRCharacter::ReleaseA, false);

PlayerInputComponent->BindAction<FCustomInputDelegate>(TEXT("PressX"), IE_Pressed, this, &AVRCharacter::PressA, true);
PlayerInputComponent->BindAction<FCustomInputDelegate>(TEXT("PressX"), IE_Released, this, &AVRCharacter::ReleaseA, true);

PlayerInputComponent->BindAction<FCustomInputDelegate>(TEXT("Action1"), IE_Pressed, this, &AVRCharacter::PressTrigger, true);
PlayerInputComponent->BindAction<FCustomInputDelegate>(TEXT("Action2"), IE_Pressed, this, &AVRCharacter::PressTrigger, false);

PlayerInputComponent->BindAction<FCustomInputDelegate>(TEXT("Action1"), IE_Released, this, &AVRCharacter::ReleaseTrigger, true);
PlayerInputComponent->BindAction<FCustomInputDelegate>(TEXT("Action2"), IE_Released, this, &AVRCharacter::ReleaseTrigger, false);

// Debug inputs for rotating item being carried.

}

void AVRCharacter::Click()
{
	FVector ForwardVector = Camera->GetForwardVector();
	FVector Start = Camera->GetComponentLocation();
	float len = 10000.0f;
	FVector End = (ForwardVector * len) + Start;
	DrawDebugLine(GetWorld(), Start, End, FColor(255, 0, 0), false, 0.45f);
	FHitResult Outhit;
	FCollisionQueryParams ColParams;
	ColParams.AddIgnoredActor(this);

	if (GetWorld()->LineTraceSingleByChannel(Outhit, Start, End, ECollisionChannel::ECC_WorldDynamic, ColParams))
	{
		AActor *TempA = Outhit.GetActor();

		if (TempA != nullptr)
		{
			UE_LOG(LogTemp, Warning, TEXT("Click: %s"), *TempA->GetName());
			
			if (TempA->IsA(ADoor::StaticClass()))
			{
				ADoor *Door = Cast<ADoor>(TempA);
				OpenDoor(Door);
				APortalRoom *PR = Cast<APortalRoom>(Door->GetParentActor());
				if (PR != nullptr)
				{
					UE_LOG(LogTemp, Warning, TEXT("DOOR parent: %s"), *PR->GetName());
					Door->PassController(nullptr);
				}
			}
	
			if (TempA->IsA(APhone::StaticClass()))
			{
				UE_LOG(LogTemp, Warning, TEXT("AnswerPhoneClick"));
				APhone *Phone = Cast<APhone>(TempA);
				Phone->AnswerPhone();
			}

			if (TempA->IsA(AFlashlight::StaticClass()))
			{
				AFlashlight *FL = Cast<AFlashlight>(TempA);
				FL->PressButton(true);
			}

			if (TempA->IsA(AChainsaw::StaticClass()))
			{
				AChainsaw *C = Cast<AChainsaw>(TempA);

			}
		}
	}

	/*
	AActor *Ball = UGameplayStatics::GetActorOfClass(GetWorld(), ABall::StaticClass());
	UPrimitiveComponent *PC = Cast<UPrimitiveComponent>(Ball->GetRootComponent());
	Ball->SetActorLocation(Camera->GetComponentLocation() + Camera->GetForwardVector() * 5.f);
	PC->SetPhysicsLinearVelocity(FVector::ZeroVector);
	PC->AddImpulse(Camera->GetForwardVector() * 200.f);
	*/
}

void AVRCharacter::ReleaseClick()
{

}

void AVRCharacter::Sprint()
{
	//UE_LOG(LogTemp, Warning, TEXT("Sprint"));
	bSprint = true;
	StepVolumeMultiplier = 6.f;
	SprintDistanceMultiplier = 0.95f;
}

void AVRCharacter::StopSprint()
{
	//UE_LOG(LogTemp, Warning, TEXT("StopSprint"));
	bSprint = false;
	StepVolumeMultiplier = 1.8f;
	SprintDistanceMultiplier = 1.0f;
}



void AVRCharacter::MoveForward(float throttle)
{
	FVector CFV = Camera->GetForwardVector();
	CFV.Z = 0;
	CFV.Normalize();
	if (!bSprint)
	{
		//AddMovementInput(throttle * Camera->GetForwardVector(), 0.4f);
		AddMovementInput(throttle * CFV, 0.4f);

	}
	else
	{
		AddMovementInput(throttle * CFV);
	}
	GetCharacterMovement()->MaxStepHeight;
}

void AVRCharacter::MoveRight(float throttle)
{
	AddMovementInput(throttle * Camera->GetRightVector(), 0.4f);
	//AddMovementInput(throttle * GetActorRightVector(), 0.4f);
}

void AVRCharacter::RightTriggerAxis(float Value)
{
	if ((Controller != NULL) && (Value > 0.001f))
	{
		//UE_LOG(LogTemp, Warning, TEXT("RT: %f"), Value);

		RightTriggerAxisValue = Value;
	}
	
}

void AVRCharacter::LeftTriggerAxis(float Value)
{
	if (Controller != NULL)
	{
		//UE_LOG(LogTemp, Warning, TEXT("LT: %f"), Value);
		
		if (Value > 0.001f)
		{
			LeftTriggerAxisValue = Value;
		}
		else
		{
			LeftTriggerAxisValue = 0.0f;
		}
	}
	
}

void AVRCharacter::RightGripAxis(float Value)
{
	if (Controller != NULL)
	{
		//UE_LOG(LogTemp, Warning, TEXT("Rg: %f"), Value);
		if (Value > 0.001f)
		{
			RightGripAxisValue = Value;
		}
		else
		{
			RightGripAxisValue = 0.0f;
		}
		
	}
}

void AVRCharacter::LeftGripAxis(float Value)
{
	if ((Controller != NULL) && (Value > 0.001f))
	{
		//UE_LOG(LogTemp, Warning, TEXT("Lg: %f"), Value);

		LeftGripAxisValue = Value;
	}
}

void AVRCharacter::TurnRight(float throttle)
{
	AddControllerYawInput(throttle * GetWorld()->DeltaTimeSeconds * 50.f);
}

void AVRCharacter::LookUp(float throttle)
{
	AddControllerPitchInput(-throttle * GetWorld()->DeltaTimeSeconds * 50.f);
}

void AVRCharacter::BeginTeleport()
{
	if (DestinationMarker->IsVisible())
	{
		APlayerController* PC = Cast<APlayerController>(GetController());
		if (PC != nullptr)
		{
			PC->PlayerCameraManager->StartCameraFade(0, 1, TeleportFadeTime, FLinearColor::Black);
		}

		FTimerHandle Handle;
		GetWorldTimerManager().SetTimer(Handle, this, &AVRCharacter::FinishTeleport, TeleportFadeTime / 2);
	}
}

void AVRCharacter::FinishTeleport()
{
	FVector TeleportLocation = DestinationMarker->GetComponentLocation();
	TeleportLocation.Z += GetCapsuleComponent()->GetScaledCapsuleHalfHeight();
	SetActorLocation(TeleportLocation);
	APlayerController* PC = Cast<APlayerController>(GetController());
	if (PC != nullptr)
	{
		PC->PlayerCameraManager->StartCameraFade(1, 0, TeleportFadeTime, FLinearColor::Black);
	}
}

void AVRCharacter::DisableAction1()
{
	bAction1 = false;
	bSprint = false;
}

void AVRCharacter::DisableAction2()
{
	bAction2 = false;
	bSprint = false;
}

void AVRCharacter::CorrectCameraOffset()
{
	FVector NewCameraOffset = Camera->GetComponentLocation() - GetActorLocation();
	NewCameraOffset.Z = 0;
	AddActorWorldOffset(NewCameraOffset);
	VRRoot->AddWorldOffset(-NewCameraOffset);
}

void AVRCharacter::SetBlinkerRadius(float NewRadius)
{
	BlinkerMaterialInstance->SetScalarParameterValue(FName("Radius"), NewRadius);
}

void AVRCharacter::Die()
{
	// fade screen to black
	// play death sound
	// loading screen
	// reset stage
	// respawn player
	
	bDead = true;
	FadeScreenToBlack();
	// respawn player and reset level/scares

}

void AVRCharacter::FadeCamera(float DeltaTime)
{
	if (CameraFadeValue == GoalFadeValue)
	{
		bFadeCamera = false;
	}
	// interp CameraFadeValue based on a curve
	CameraFadeValue = FMath::FInterpTo(CameraFadeValue, GoalFadeValue, DeltaTime, 20.f);
	FadeMaterialInstance->SetScalarParameterValue(FName("FadeValue"), CameraFadeValue);
}

void AVRCharacter::StartCameraFade(float FadeValue, float FadeSpeed, UCurveFloat * FadeCurve)
{
}

void AVRCharacter::StopCameraFade(float DeltaTime, float FadeSpeed, UCurveFloat * FadeCurve)
{
}

void AVRCharacter::CamColStuck()
{
	FRotator DR;
	FVector DP;
	UHeadMountedDisplayFunctionLibrary::GetOrientationAndPosition(DR, DP);
	StuckPosition = DP;

	const FVector CL = Camera->GetComponentLocation();
	const FQuat CQ = FQuat(FVector::ZeroVector, 0.0f);
	const FCollisionShape CS = FCollisionShape::MakeSphere(22.f);

	FHitResult HitResult;
	bool bSweep = GetWorld()->SweepSingleByChannel(HitResult, LastCameraLocation, CL, CQ, ECollisionChannel::ECC_Visibility, CS, CamColParams);

	if (bSweep)
	{
		StuckNormal = HitResult.Normal;
		bStuckInWall = true;
		Camera->bLockToHmd = false;
		PlayerController->SetIgnoreLookInput(true);
		PlayerController->SetIgnoreMoveInput(true);
	}
}

void AVRCharacter::CamColUnStuck()
{
	bStuckInWall = false;
	Camera->bLockToHmd = true;
	PlayerController->SetIgnoreLookInput(false);
	PlayerController->SetIgnoreMoveInput(false);
}

void AVRCharacter::UnStickCamera(float DeltaTime)
{
	FRotator DR;
	FVector DP;
	UHeadMountedDisplayFunctionLibrary::GetOrientationAndPosition(DR, DP);
	FVector Disp = DP - StuckPosition;
	float Dot = FVector::DotProduct(Disp, StuckNormal);
	
	if (Dot > 2.f)
	{
		CamColUnStuck();
	}
}

bool AVRCharacter::IsComponentInView(USceneComponent * SceneComponent)
{
#define HMD_MAX_FOV 0.33f

	const FVector CameraLocation = Camera->GetComponentLocation();
	const FVector ComponentLocation = SceneComponent->GetComponentLocation();
	const FVector CameraForwardVector = Camera->GetForwardVector();
	const FVector Dir = (ComponentLocation - CameraLocation).GetSafeNormal();
	const float Dot = FVector::DotProduct(CameraForwardVector, Dir);

	if (Dot > HMD_MAX_FOV)
	{
		FHitResult Outhit;
		bool bTrace = GetWorld()->LineTraceSingleByChannel(Outhit, CameraLocation, ComponentLocation, ECollisionChannel::ECC_Camera, IsCompInViewParams);

		if (bTrace && Outhit.GetActor() == SceneComponent->GetOwner() || !bTrace)
		{
			return true;
		}		
	}

	return false;
}
