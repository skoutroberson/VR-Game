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
		BlinkerMaterialInstance->SetScalarParameterValue(FName("Radius"), 2.f);
	}

	FootstepMap.Add(FName("wood"), WoodFootStepSound);
	FootstepMap.Add(FName("tile"), TileFootstepSound);
	FootstepMap.Add(FName("conc"), ConcreteFootStepSound);
	FootstepMap.Add(FName("stai"), StairFootstepSound);
	FootstepMap.Add(FName("dirt"), DirtFootStepSound);
}

void AVRCharacter::UpdateCapsuleHeight()
{
	//	NEED TO CHECK IF BLOCKING HIT ACTOR HAS THE TAG "FLOOR".
	FRotator DR;
	FVector DP;
	UHeadMountedDisplayFunctionLibrary::GetOrientationAndPosition(DR, DP);
	TArray<AActor*> EmptyActors;
	UKismetSystemLibrary::SphereTraceSingle(GetWorld(), Camera->GetComponentLocation(), Camera->GetComponentLocation() + WorldDownVector * (DP.Z + 20.f),
		GetCapsuleComponent()->GetScaledCapsuleRadius(), ETraceTypeQuery::TraceTypeQuery1, true, EmptyActors, EDrawDebugTrace::ForOneFrame, CamHeightHit,
		true, FLinearColor::Red, FLinearColor::Green, 1.f);

	//UE_LOG(LogTemp, Warning, TEXT("DP.Z: %f"), DP.Z);

	/*
	bool Trace = GetWorld()->LineTraceSingleByChannel(CamHeightHit, Camera->GetComponentLocation(),
		Camera->GetComponentLocation() + WorldDownVector * (DP.Z + 20.f),
		ECollisionChannel::ECC_WorldDynamic, CamHeightParams);
	*/
	//GetCapsuleComponent()->SphereTrace

	DrawDebugSphere(GetWorld(), GetActorLocation(), 5.f, 6, FColor::Red, false, GetWorld()->DeltaTimeSeconds * 2.f);
	DrawDebugPoint(GetWorld(), VRRoot->GetComponentLocation(), 4.f, FColor::Green, false, GetWorld()->DeltaTimeSeconds * 2.f, ESceneDepthPriorityGroup::SDPG_MAX);

	if (CamHeightHit.bBlockingHit)
	{
		// I probably need to change this to check if the actor has a tag: "Floor"
		FVector RootVector = VRRoot->GetComponentLocation();
		//RootVector.Z = CamHeightHit.ImpactPoint.Z;
		float NewCapsuleHalfHeight = FVector::Distance(Camera->GetComponentLocation(), CamHeightHit.ImpactPoint) / 2;
		if (NewCapsuleHalfHeight < 20.f)
		{
			NewCapsuleHalfHeight = 20.f;
		}
		RootVector.Z = CamHeightHit.ImpactPoint.Z;
		
		GetCapsuleComponent()->SetCapsuleHalfHeight(NewCapsuleHalfHeight);
		VRRoot->SetWorldLocation(RootVector);
	}
	else
	{
		if (GEngine)
			GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Yellow, TEXT("UpdateCapsuleHeight Trace not hitting!!"));
	}
	
	//float NewCapsuleHeight = Camera->GetComponentLocation().Z - CamHeightHit.Location.Z;
	
	//UE_LOG(LogTemp, Warning, TEXT("Capsule Height: %f"), GetCapsuleComponent()->GetUnscaledCapsuleHalfHeight() * 2.f);
	//UE_LOG(LogTemp, Warning, TEXT("Cam Distance: %f"), CamHeightHit.Distance);
	//UE_LOG(LogTemp, Warning, TEXT("Root: %f"), VRRoot->GetComponentLocation().Z);
	//UE_LOG(LogTemp, Warning, TEXT("Came: %f"), Camera->GetComponentLocation().Z);
		//UE_LOG(LogTemp, Warning, TEXT("HMD: %f"), DP.Z);
		//UE_LOG(LogTemp, Warning, TEXT("CAM: %f"), CamHeightHit.Distance);
		//UE_LOG(LogTemp, Warning, TEXT("DIF = %f"), CamHeightHit.Distance - DP.Z);
	
		/*
		//UE_LOG(LogTemp, Warning, TEXT("CC: %f"), CamHeightHit.ImpactPoint.Z);
		if (DP.Z < 3.f)
		{
			DP.Z = 3.f;
			UE_LOG(LogTemp, Warning, TEXT("HMD IS TOO LOW!"));
		}
		
		if (fabsf(DP.Z - HMDZPos) > 8.f)
		{
			UE_LOG(LogTemp, Warning, TEXT("CHANGE ROOT POSITION"));
			HMDZPos = DP.Z;
			FVector RL = GetActorLocation();
			RL.Z -= DP.Z * 0.5f;
			//RL.X = 0;
			//RL.Y = 0;
			RootVector.Z = RL.Z;
			GetCapsuleComponent()->SetCapsuleHalfHeight(DP.Z * 0.5f);
			VRRoot->SetRelativeLocation(FVector(0,0, RL.Z));
		}
		*/
}

void AVRCharacter::PressA(bool bLeft)
{
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
		
		FL->PressButton();
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
	const float V = (DeltaLocation - GetActorLocation()).Size();

	// I should also make the noise quieter if the capsule height is smaller

	if (V > VelocityThreshold)
	{
		DistanceMoved += V;

		if (DistanceMoved > DistanceThreshold)
		{
			// Play Sound
			DistanceMoved = 0.f;
			
			//UE_LOG(LogTemp, Warning, TEXT("Right Step"));
			UGameplayStatics::PlaySoundAtLocation(GetWorld(), FootstepSound, 
				VRRoot->GetComponentLocation() + Camera->GetRightVector() * 2.f, V*2.f);
				bRightStep = false;
			
		}
	}
	else
	{
		if (DistanceMoved > 0)	// why did i do this? im too lazy to check this right now
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

	bool FloorTrace = GetWorld()->LineTraceSingleByChannel(HitResult, FootLocation + UV * 5.f, FootLocation - UV * 15.f, ECollisionChannel::ECC_WorldStatic, CamHeightParams);

	if (FloorTrace)
	{
		TArray<FName> &Tags = HitResult.Component->ComponentTags;

		if (Tags.Num() > 0)
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

	//GetWorld()->GetFirstPlayerController()->SetControlRotation(Camera->GetComponentRotation());

	//	Need to do this every frame so the collision capsule stays on top of the player's camera
	CorrectCameraOffset();

	//	Updates the capsule height to be the height from the floor to the HMD
	//();
	

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
//PlayerInputComponent->BindAction(TEXT("Click"), IE_Pressed, this, &AVRCharacter::Click);

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
	DrawDebugLine(GetWorld(), Start, End, FColor(255, 0, 0), true, 1.0f);
	FHitResult Outhit;
	FCollisionQueryParams ColParams;
	ColParams.AddIgnoredActor(this);

	if (GetWorld()->LineTraceSingleByChannel(Outhit, Start, End, ECollisionChannel::ECC_WorldDynamic, ColParams))
	{
		int NodeDist = AErrol::NodeDist;
		int FloorHeight = AErrol::FloorHeight;
		FVector ClosestNode = FVector(
			roundf(Outhit.Location.X / NodeDist) * NodeDist,
			roundf(Outhit.Location.Y / NodeDist) * NodeDist,
			Outhit.Location.Z);

		DrawDebugSphere(GetWorld(), ClosestNode, 10, 8, FColor::White, false, 1.0f);

		UE_LOG(LogTemp, Warning, TEXT("%f, %f, %f"),
			roundf(Outhit.Location.X / NodeDist),
			roundf(Outhit.Location.Y / NodeDist),
			roundf(Outhit.Location.Z / FloorHeight));
	}
}

void AVRCharacter::Sprint()
{
	UE_LOG(LogTemp, Warning, TEXT("Sprint"));
	bSprint = true;
	StepVolumeMultiplier = 6.f;
}

void AVRCharacter::StopSprint()
{
	UE_LOG(LogTemp, Warning, TEXT("StopSprint"));
	bSprint = false;
	StepVolumeMultiplier = 1.8f;
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
	if ((Controller != NULL) && (Value > 0.001f))
	{
		//UE_LOG(LogTemp, Warning, TEXT("LT: %f"), Value);
		LeftTriggerAxisValue = Value;
	}
	
}

void AVRCharacter::RightGripAxis(float Value)
{
	if ((Controller != NULL) && (Value > 0.001f))
	{
		//UE_LOG(LogTemp, Warning, TEXT("RT: %f"), Value);

		RightGripAxisValue = Value;
	}
}

void AVRCharacter::LeftGripAxis(float Value)
{
	if ((Controller != NULL) && (Value > 0.001f))
	{
		//UE_LOG(LogTemp, Warning, TEXT("RT: %f"), Value);

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