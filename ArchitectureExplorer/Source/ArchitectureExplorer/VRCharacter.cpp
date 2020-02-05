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

// Sets default values
AVRCharacter::AVRCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	VRRoot = CreateDefaultSubobject<USceneComponent>(TEXT("VRRoot"));
	VRRoot->SetupAttachment(GetRootComponent());

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(VRRoot);

	LeftController = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("LeftController"));
	LeftController->SetupAttachment(VRRoot);
	LeftController->SetTrackingSource(EControllerHand::Left);
	LeftController->bDisplayDeviceModel = true;

	RightController = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("RightController"));
	RightController->SetupAttachment(VRRoot);
	RightController->SetTrackingSource(EControllerHand::Right);
	RightController->bDisplayDeviceModel = true;

	DestinationMarker = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DestinationMarker"));
	DestinationMarker->SetupAttachment(GetRootComponent());

}

// Called when the game starts or when spawned
void AVRCharacter::BeginPlay()
{
	Super::BeginPlay();
	
	DestinationMarker->SetVisibility(false);

	MCLeftPos = LeftController->GetComponentLocation().Z;
	MCRightPos = RightController->GetComponentLocation().Z;

	//UE_LOG(LogTemp, Warning, TEXT("%f %f %f"), GetActorUp)
}

// Called every frame
void AVRCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector NewCameraOffset = Camera->GetComponentLocation() - GetActorLocation();
	NewCameraOffset.Z = 0;
	///////
	AddActorWorldOffset(NewCameraOffset);
	VRRoot->AddWorldOffset(-NewCameraOffset);

	if (bTeleportEnabled)
	{
		UpdateDestinationMarker();
	}

	if (bAction1 && bAction2)
	{
		InterpretMCMotion();

		if (bSprint)
		{
			MoveForward(1.0f);
		}
	}
}

void AVRCharacter::InterpretMCMotion()
{
	if (TickCounter % 4 == 0)
	{
		// (x >= 0) ? x : -x
		float LeftZOffset = LeftController->GetComponentLocation().Z - MCLeftPos;
		float RightZOffset = RightController->GetComponentLocation().Z - MCRightPos;

		if (LeftZOffset < 0)
			LeftZOffset = -LeftZOffset;
		if (RightZOffset < 0)
			RightZOffset = -RightZOffset;

		//UE_LOG(LogTemp, Warning, TEXT("LEFT: %f"), LeftZOffset);
		//UE_LOG(LogTemp, Warning, TEXT("RIGHT: %f"), RightZOffset);
		//UE_LOG(LogTemp, Warning, TEXT("TOTAL: %f"), LeftZOffset + RightZOffset);
		//UE_LOG(LogTemp, Warning, TEXT("-------------------------------------------------------------"));

		if (LeftZOffset > 6 && RightZOffset > 6)
		{
			bSprint = true;
			StopSprintChecks = 0;
		}
		else
		{
			StopSprintChecks ++;
			if (StopSprintChecks > StopSprintMax)
				bSprint = false;
		}

		MCLeftPos = LeftController->GetComponentLocation().Z;
		MCRightPos = RightController->GetComponentLocation().Z;
	}

	if (TickCounter > 10000)
	{
		TickCounter = 0;
	}
	TickCounter++;

}

void AVRCharacter::UpdateDestinationMarker()
{
	FVector Start = RightController->GetComponentLocation();
	FVector End = Start + RightController->GetForwardVector() * MaxTeleportDistance;

	
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
	PlayerInputComponent->BindAction(TEXT("Teleport"), IE_Released, this, &AVRCharacter::BeginTeleport);
	PlayerInputComponent->BindAction(TEXT("Action1"), IE_Pressed, this, &AVRCharacter::EnableAction1);
	PlayerInputComponent->BindAction(TEXT("Action2"), IE_Pressed, this, &AVRCharacter::EnableAction2);
	PlayerInputComponent->BindAction(TEXT("Action1"), IE_Released, this, &AVRCharacter::DisableAction1);
	PlayerInputComponent->BindAction(TEXT("Action2"), IE_Released, this, &AVRCharacter::DisableAction2);

}

void AVRCharacter::MoveForward(float throttle)
{
	if (bSprint)
	{
		AddMovementInput(Camera->GetForwardVector());
	}
	else
	{
		AddMovementInput(throttle * Camera->GetForwardVector(), 0.5f);
	}
}

void AVRCharacter::MoveRight(float throttle)
{
	AddMovementInput(throttle * Camera->GetRightVector());
}

void AVRCharacter::TurnRight(float throttle)
{
	AddControllerYawInput(throttle);
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
	UE_LOG(LogTemp, Warning, TEXT("Action1"));
}

void AVRCharacter::EnableAction2()
{
	bAction2 = true;
	UE_LOG(LogTemp, Warning, TEXT("Action2"));
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

