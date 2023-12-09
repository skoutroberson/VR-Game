// Fill out your copyright notice in the Description page of Project Settings.


#include "PortalRoom.h"
#include "Components/StaticMeshComponent.h"
#include "DrawDebugHelpers.h"
#include "GameFramework/PlayerController.h"
#include "Camera/CameraComponent.h"
#include "VRCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Engine/EngineTypes.h"
#include "VRCharacter.h"
#include "GameFramework/PlayerController.h"
#include "Components/PrimitiveComponent.h"
#include "Components/CapsuleComponent.h"
#include "Kismet/GameplayStatics.h"
#include "BoxTrigger.h"
#include "Door.h"
#include "Radio.h"
#include "Phone.h"
#include "Components/AudioComponent.h"
#include "Sound/SoundClass.h"
#include "Sound/SoundSubmix.h"

// Sets default values
APortalRoom::APortalRoom()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	
}

// Called when the game starts or when spawned
void APortalRoom::BeginPlay()
{
	Super::BeginPlay();

	// get hand controller mesh pointers so we can teleport them with the player if they are currently grabbing an item
	VRCharacter = Cast<AVRCharacter>(UGameplayStatics::GetActorOfClass(GetWorld(), AVRCharacter::StaticClass()));
	
	RightHandController = VRCharacter->RightController;
	LeftHandController = VRCharacter->LeftController;

	ThePhone = Cast<APhone>(UGameplayStatics::GetActorOfClass(GetWorld(), APhone::StaticClass()));
	PhoneRing = Cast<UAudioComponent>(ThePhone->GetComponentsByTag(UAudioComponent::StaticClass(), FName("Ring"))[0]);
	WorldSoundClass = PhoneRing->Sound->GetSoundClass();
	WorldSoundSubmix = WorldSoundClass->Properties.DefaultSubmix;
}

// Called every frame
void APortalRoom::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (bUpdateSoundsAndLighting)
	{
		UpdateSoundsAndLightingBasedOnDoorAngle(DeltaTime);
	}
}

// This was the old Teleport function
void APortalRoom::FakeFunction()
{
	TArray<AActor*> OverlappingActors;
	GetOverlappingActors(OverlappingActors);

	for (AActor* OverlappingActor : OverlappingActors)
	{
		if (OverlappingActor->ActorHasTag(TEXT("Player")))
		{
			APlayerController * PlayerController = GetWorld()->GetFirstPlayerController();
			AVRCharacter* VRChar = Cast<AVRCharacter>(OverlappingActor);
			FVector SavedVelocity = VRChar->GetCharacterMovement()->GetLastUpdateVelocity();
			FRotator PlayerRotation = OverlappingActor->GetActorRotation();
			

			FVector DeltaPosition = OverlappingActor->GetActorLocation() - GetActorLocation();
			//FVector NewDeltaPosition = DeltaPosition.RotateAngleAxis(DeltaRotation, FVector(0, 0, 1.f));
			FVector NewDeltaPosition = FVector(-DeltaPosition.Y, DeltaPosition.X, DeltaPosition.Z);	// This is only if the DeltaRotation is 90.f

			FVector TeleportLocation = TargetLocation + NewDeltaPosition;
			float TeleportYaw = PlayerRotation.Yaw + DeltaRotation;
			FRotator TeleportRotation = FRotator(PlayerRotation.Pitch, TeleportYaw, PlayerRotation.Roll);
			FVector NewVelocity = SavedVelocity.RotateAngleAxis(DeltaRotation, FVector(0, 0, 1.f));

			FVector TargetNormal = TeleportRotation.Vector();
			TargetNormal.Normalize();
			float VelocityLength = SavedVelocity.Size();
			FVector ResultVector = TargetNormal * VelocityLength;

			//FVector VelocityOffset = SavedVelocity / (1 / GetWorld()->DeltaTimeSeconds) * 2.f;
			//TeleportLocation -= VelocityOffset;
			//VRChar->GetCharacterMovement()->Velocity.Set(0, 0, 0);
			
			VRChar->GetCharacterMovement()->Velocity.Set(NewVelocity.X, NewVelocity.Y, NewVelocity.Z);
			PlayerController->SetControlRotation(TeleportRotation);
			OverlappingActor->SetActorLocationAndRotation(TeleportLocation, TeleportRotation);
			
			// CHANGE STAGE CHECK!!!!!!!!! IF TRUE, THEN SET A BOOL TO TRUE TO CHANGE THE STAGE

			//VRChar->CorrectCameraOffset();
			
			// Break so this isn't called multiple times per frame on player...
			break;
		}
	}
}

void APortalRoom::TeleportPlayer(UPARAM(ref)AActor * TargetRoom, UPARAM(ref)AActor * Player)
{
	FVector PL = GetActorLocation();
	FVector TPL = TargetRoom->GetActorLocation();
	APlayerController * PlayerController = GetWorld()->GetFirstPlayerController();
	AVRCharacter* VRChar = Cast<AVRCharacter>(Player);
	FVector SavedVelocity = VRChar->GetCharacterMovement()->GetLastUpdateVelocity();
	FRotator PlayerRotation = Player->GetActorRotation();
	FVector DeltaPosition = Player->GetActorLocation() - PL;
	//FVector NewDeltaPosition = DeltaPosition.RotateAngleAxis(DeltaRotation, FVector(0,0,1));		// This works but RotateAngleAxis() has a bit of error past the second decimal (this is fine to use, just not perfect though)
	FVector NewDeltaPosition = FVector(DeltaPosition.Y, -DeltaPosition.X, DeltaPosition.Z);			// This only works for a 90 degree delta rotation
	FVector TargetLocation = TPL + NewDeltaPosition;
	float TeleportYaw = PlayerRotation.Yaw + DeltaRotation;
	FRotator TeleportRotation = FRotator(PlayerRotation.Pitch, TeleportYaw, PlayerRotation.Roll);
	FVector NewVelocity = SavedVelocity.RotateAngleAxis(DeltaRotation, FVector(0, 0, 1.f));
	FVector TargetNormal = TeleportRotation.Vector().GetSafeNormal();
	float VelocityLength = SavedVelocity.Size();
	FVector ResultVector = TargetNormal * VelocityLength;


	// get all overlapping grabbable actors in the portal room bounds,
	// teleport them to the target portal with the player

	//int counter = 0;

	int n = OverlappingGrabbables.Num();

	for (int i = 0; i < n; i++)
	{
		// I've crashed here before if I don't have this check because the array index is out of bounds.
		// I think it is due to a big delta time and OverlappingGrabbables gets updated before this loop ends??
		// if that's not the reason then idk what else would be wrong here:
		if (i < OverlappingGrabbables.Num())
		{
			// position
			FVector GrabDeltaPosition = OverlappingGrabbables[i]->GetActorLocation() - PL;
			FVector GrabNewDeltaPosition = FVector(GrabDeltaPosition.Y, -GrabDeltaPosition.X, GrabDeltaPosition.Z);
			FVector GrabTargetLocation = TPL + GrabNewDeltaPosition;
			// rotation
			FRotator GrabRotation = OverlappingGrabbables[i]->GetActorRotation();
			float GrabTeleportYaw = GrabRotation.Yaw + DeltaRotation;
			FRotator GrabTeleportRotation = FRotator(GrabRotation.Pitch, GrabTeleportYaw, GrabRotation.Roll);
			// velocity
			FVector GrabSavedVelocity = OverlappingGrabbables[i]->GetVelocity();
			FVector GrabNewVelocity = GrabSavedVelocity.RotateAngleAxis(DeltaRotation, FVector(0, 0, 1.f));

			OverlappingGrabbables[i]->GetVelocity().Set(GrabNewVelocity.X, GrabNewVelocity.Y, GrabNewVelocity.Z);
			OverlappingGrabbables[i]->SetActorLocationAndRotation(GrabTargetLocation, GrabTeleportRotation);
			//counter++;
		}
	}

	//UE_LOG(LogTemp, Warning, TEXT("Items: %d"), counter);
	//UE_LOG(LogTemp, Warning, TEXT("1: %f %f %f"), DeltaPosition.X, DeltaPosition.Y, DeltaPosition.Z);
	//UE_LOG(LogTemp, Warning, TEXT("2: %f %f %f"), NewDeltaPosition.X, NewDeltaPosition.Y, NewDeltaPosition.Z);
	VRChar->GetCharacterMovement()->Velocity.Set(NewVelocity.X, NewVelocity.Y, NewVelocity.Z);
	PlayerController->SetControlRotation(TeleportRotation);
	Player->SetActorLocationAndRotation(TargetLocation, TeleportRotation);

	// so a footstep sound doesn't play on teleport
	VRChar->DeltaLocation = TargetLocation;
}

void APortalRoom::UpdateSoundsAndLightingBasedOnDoorAngle(float DeltaTime)
{
	const float Theta = 0.087;
	const float ThetaMultiplier = 1.0f / Theta;

	const FVector FV = GetActorForwardVector();
	const FVector PL = VRCharacter->GetActorLocation();
	const FVector HL = DoorEndHinge->GetComponentLocation();
	FVector Disp = PL - HL;
	Disp = Disp.GetSafeNormal();

	const float Dot = FVector::DotProduct(Disp, FV);

	if (Dot < 0.04f)
	{
		const float DoorAngle = TheEndDoor->CurrentDoorAngle;
		float ILI = DoorAngle * ThetaMultiplier;
		ILI = FMath::Clamp(ILI, 0.0f, 1.0f);
		if (DoorAngle >= Theta && ILI != 1.0f)
		{
			ILI = 1.0f;
		}
		PPV->Settings.IndirectLightingIntensity = ILI;
		//WorldSoundClass->Properties.Volume = ILI;
		WorldSoundSubmix->SetSubmixOutputVolume(GetWorld(), ILI);
		//WorldSoundClass->Properties.DefaultSubmix->SetSubmixOutputVolume(GetWorld(), ILI);
		//PhoneRing->SetVolumeMultiplier(ILI);
	}
}
