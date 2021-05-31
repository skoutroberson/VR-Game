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
#include "BoxTrigger.h"

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

}

// Called every frame
void APortalRoom::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

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
	APlayerController * PlayerController = GetWorld()->GetFirstPlayerController();
	AVRCharacter* VRChar = Cast<AVRCharacter>(Player);
	FVector SavedVelocity = VRChar->GetCharacterMovement()->GetLastUpdateVelocity();
	FRotator PlayerRotation = Player->GetActorRotation();
	FVector DeltaPosition = Player->GetActorLocation() - GetActorLocation();
	//FVector NewDeltaPosition = DeltaPosition.RotateAngleAxis(DeltaRotation, FVector(0,0,1));
	FVector NewDeltaPosition = FVector(-DeltaPosition.Y, DeltaPosition.X, DeltaPosition.Z);
	FVector TargetLocation = TargetRoom->GetActorLocation() + NewDeltaPosition;
	float TeleportYaw = PlayerRotation.Yaw + DeltaRotation;
	FRotator TeleportRotation = FRotator(PlayerRotation.Pitch, TeleportYaw, PlayerRotation.Roll);
	FVector NewVelocity = SavedVelocity.RotateAngleAxis(DeltaRotation, FVector(0, 0, 1.f));
	FVector TargetNormal = TeleportRotation.Vector().GetSafeNormal();
	float VelocityLength = SavedVelocity.Size();
	FVector ResultVector = TargetNormal * VelocityLength;

	UE_LOG(LogTemp, Warning, TEXT("1: %f %f %f"), DeltaPosition.X, DeltaPosition.Y, DeltaPosition.Z);
	UE_LOG(LogTemp, Warning, TEXT("2: %f %f %f"), NewDeltaPosition.X, NewDeltaPosition.Y, NewDeltaPosition.Z);
	VRChar->GetCharacterMovement()->Velocity.Set(NewVelocity.X, NewVelocity.Y, 0);
	PlayerController->SetControlRotation(TeleportRotation);
	Player->SetActorLocationAndRotation(TargetLocation, TeleportRotation);
}
