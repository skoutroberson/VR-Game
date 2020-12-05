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

	//LeftController->SetTrackingSource(EControllerHand::Left);
	//LeftController->bDisplayDeviceModel = true;
	// Create the hand mesh for visualization

	//RightController->SetTrackingSource(EControllerHand::Right);
	//RightController->bDisplayDeviceModel = true;

	DestinationMarker = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DestinationMarker"));
	DestinationMarker->SetupAttachment(GetRootComponent());

	CamHeightParams.AddIgnoredActor(this);

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
}

void AVRCharacter::UpdateCapsuleHeight()
{

	GetWorld()->LineTraceSingleByChannel(CamHeightHit, Camera->GetComponentLocation(),
		Camera->GetComponentLocation() + WorldDownVector * 500,
		ECollisionChannel::ECC_WorldDynamic, CamHeightParams);

	//float NewCapsuleHeight = Camera->GetComponentLocation().Z - CamHeightHit.Location.Z;
	
	//UE_LOG(LogTemp, Warning, TEXT("Capsule Height: %f"), GetCapsuleComponent()->GetUnscaledCapsuleHalfHeight() * 2.f);
	//UE_LOG(LogTemp, Warning, TEXT("Cam Distance: %f"), CamHeightHit.Distance);
	//UE_LOG(LogTemp, Warning, TEXT("Root: %f"), VRRoot->GetComponentLocation().Z);
	//UE_LOG(LogTemp, Warning, TEXT("Came: %f"), Camera->GetComponentLocation().Z);


	
	FVector RootVector = VRRoot->GetComponentLocation();
	RootVector.Z = CamHeightHit.ImpactPoint.Z;
	GetCapsuleComponent()->SetCapsuleHalfHeight(CamHeightHit.Distance / 2.f);
	VRRoot->SetWorldLocation(RootVector);

	/*
	if (NewCapsuleHeight < 10.f)
	{
		GetCapsuleComponent()->SetCapsuleHalfHeight(5.f);
	}
	else if (NewCapsuleHeight > 200.f)
	{
		GetCapsuleComponent()->SetCapsuleHalfHeight(100.f);
	}
	else
	{
		GetCapsuleComponent()->SetCapsuleHalfHeight(NewCapsuleHeight / 2.f);
	}
	*/
}

// Called every frame
void AVRCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//GetWorld()->GetFirstPlayerController()->SetControlRotation(Camera->GetComponentRotation());

	//	Need to do this every frame so the collision capsule stays on top of the player's camera
	CorrectCameraOffset();

	//	Updates the capsule height to be the height from the floor to the HMD
	UpdateCapsuleHeight();
	

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

		if (bDodge)
		{
			Dodge();
		}
		else if (bSprint)
		{
			MoveForward(1.0f);
		}
	}
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
	PlayerInputComponent->BindAction(TEXT("Teleport"), IE_Released, this, &AVRCharacter::BeginTeleport);
	PlayerInputComponent->BindAction(TEXT("Action1"), IE_Pressed, this, &AVRCharacter::EnableAction1);
	PlayerInputComponent->BindAction(TEXT("Action2"), IE_Pressed, this, &AVRCharacter::EnableAction2);
	PlayerInputComponent->BindAction(TEXT("Action1"), IE_Released, this, &AVRCharacter::DisableAction1);
	PlayerInputComponent->BindAction(TEXT("Action2"), IE_Released, this, &AVRCharacter::DisableAction2);
	PlayerInputComponent->BindAction(TEXT("Sprint"), IE_Pressed, this, &AVRCharacter::Sprint);
	PlayerInputComponent->BindAction(TEXT("Sprint"), IE_Released, this, &AVRCharacter::StopSprint);
	//PlayerInputComponent->BindAction(TEXT("Click"), IE_Pressed, this, &AVRCharacter::Click);

	PlayerInputComponent->BindAction(TEXT("GripLeft"), IE_Pressed, this, &AVRCharacter::GripLeft);
	PlayerInputComponent->BindAction(TEXT("GripRight"), IE_Pressed, this, &AVRCharacter::GripRight);
	PlayerInputComponent->BindAction(TEXT("GripLeft"), IE_Released, this, &AVRCharacter::ReleaseLeft);
	PlayerInputComponent->BindAction(TEXT("GripRight"), IE_Released, this, &AVRCharacter::ReleaseRight);

	PlayerInputComponent->BindAction(TEXT("PressA"), IE_Pressed, this, &AVRCharacter::PressA);
	PlayerInputComponent->BindAction(TEXT("PressA"), IE_Released, this, &AVRCharacter::ReleaseA);

	PlayerInputComponent->BindAction(TEXT("PressX"), IE_Pressed, this, &AVRCharacter::PressX);
	PlayerInputComponent->BindAction(TEXT("PressX"), IE_Released, this, &AVRCharacter::ReleaseX);

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
			roundf(Outhit.Location.Z/FloorHeight));
	}
}

void AVRCharacter::Sprint()
{
	UE_LOG(LogTemp, Warning, TEXT("Sprint"));
	bSprint = true;
}

void AVRCharacter::StopSprint()
{
	UE_LOG(LogTemp, Warning, TEXT("StopSprint"));
	bSprint = false;
}



void AVRCharacter::MoveForward(float throttle)
{
	if(!bSprint)
	{
		AddMovementInput(throttle * GetActorForwardVector(), 0.4f);
	}
}

void AVRCharacter::MoveRight(float throttle)
{
	if (!bDodge)
	{
		AddMovementInput(throttle * Camera->GetRightVector(), 0.5f);
	}
}

void AVRCharacter::TurnRight(float throttle)
{
	AddControllerYawInput(throttle);
}

void AVRCharacter::LookUp(float throttle)
{
	AddControllerPitchInput(-throttle);

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

void AVRCharacter::EnableAction1()
{
	bAction1 = true;
	if (bAction2)
	{
		Sprint();
	}
	//UE_LOG(LogTemp, Warning, TEXT("Action1"));
}

void AVRCharacter::EnableAction2()
{
	bAction2 = true;
	if (bAction1)
	{
		Sprint();
	}
	//UE_LOG(LogTemp, Warning, TEXT("Action2"));
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