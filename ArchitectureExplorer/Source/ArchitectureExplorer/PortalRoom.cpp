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

// Sets default values
APortalRoom::APortalRoom()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	PRRoot = CreateDefaultSubobject<USceneComponent>(TEXT("PRRoot"));
	SetRootComponent(PRRoot);

}

// Called when the game starts or when spawned
void APortalRoom::BeginPlay()
{
	Super::BeginPlay();

	OnActorBeginOverlap.AddDynamic(this, &APortalRoom::ActorBeginOverlap);
	
}

// Called every frame
void APortalRoom::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APortalRoom::ActorBeginOverlap(AActor * OverlappedActor, AActor * OtherActor)
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

			//UE_LOG(LogTemp, Warning, TEXT("TELEPORT PLAYER!"));
			//DrawDebugSphere(GetWorld(), GetActorLocation(), 10, 10, FColor::Red, true);
			//DrawDebugSphere(GetWorld(), TargetLocation, 10, 10, FColor::Red, true);
			//DrawDebugSphere(GetWorld(), DeltaPosition + GetActorLocation(), 10, 10, FColor::Cyan, true);
			//DrawDebugSphere(GetWorld(), NewDeltaPosition + TargetLocation, 10, 10, FColor::Cyan, true);
			//DrawDebugLine(GetWorld(), GetActorLocation(), GetActorLocation() + DeltaPosition, FColor::Purple, true);
			//DrawDebugLine(GetWorld(), TargetLocation, TargetLocation + NewDeltaPosition, FColor::Purple, true);
			//UE_LOG(LogTemp, Warning, TEXT("DP: %f %f %f"), DeltaPosition.X, DeltaPosition.Y, DeltaPosition.Z);
			//UE_LOG(LogTemp, Warning, TEXT("NP: %f %f %f"), NewDeltaPosition.X, NewDeltaPosition.Y, NewDeltaPosition.Z);
			//UE_LOG(LogTemp, Warning, TEXT("SV: %f %f %f"), SavedVelocity.X, SavedVelocity.Y, SavedVelocity.Z);
			//UE_LOG(LogTemp, Warning, TEXT("NV: %f %f %f"), NewVelocity.X, NewVelocity.Y, NewVelocity.Z);

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
			//OverlappingActor->SetActorLocation(TeleportLocation);
			
			/*
			UCapsuleComponent * PlayerCapsule = Cast<UCapsuleComponent>(OverlappingActor->GetRootComponent());
			if (PlayerCapsule != nullptr)
			{
				PlayerCapsule->AddImpulse(ResultVector);
			}
			*/
			
			
			
			// CHANGE STAGE CHECK!!!!!!!!! IF TRUE, THEN SET A BOOL TO TRUE TO CHANGE THE STAGE
			

			//VRChar->CorrectCameraOffset();
			
			// Break so this isn't called multiple times per frame on player...
			break;
		}
	}
}



