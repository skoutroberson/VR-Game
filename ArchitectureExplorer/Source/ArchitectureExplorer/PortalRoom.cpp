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
			UE_LOG(LogTemp, Warning, TEXT("TELEPORT PLAYER!"));

			APlayerController * PlayerController = GetWorld()->GetFirstPlayerController();
			AVRCharacter* VRChar = Cast<AVRCharacter>(OverlappingActor);
			FVector SavedVelocity = VRChar->GetCharacterMovement()->GetLastUpdateVelocity();
			FRotator PlayerRotation = OverlappingActor->GetActorRotation();
			
			FVector DeltaPosition = OverlappingActor->GetActorLocation() - GetActorLocation();
			FVector NewDeltaPosition = DeltaPosition.RotateAngleAxis(DeltaRotation, FVector(0, 0, 1));

			//DrawDebugSphere(GetWorld(), GetActorLocation(), 10, 10, FColor::Red, true);
			//DrawDebugSphere(GetWorld(), TargetLocation, 10, 10, FColor::Red, true);
			//DrawDebugSphere(GetWorld(), DeltaPosition + GetActorLocation(), 10, 10, FColor::Cyan, true);
			//DrawDebugSphere(GetWorld(), NewDeltaPosition + TargetLocation, 10, 10, FColor::Cyan, true);
			//DrawDebugLine(GetWorld(), GetActorLocation(), GetActorLocation() + DeltaPosition, FColor::Purple, true);
			//DrawDebugLine(GetWorld(), TargetLocation, TargetLocation + NewDeltaPosition, FColor::Purple, true);

			FVector TeleportLocation = TargetLocation + NewDeltaPosition;
			float TeleportYaw = PlayerRotation.Yaw + DeltaRotation;
			FRotator TeleportRotation = FRotator(PlayerRotation.Pitch, TeleportYaw, PlayerRotation.Roll);

			FVector NewVelocity = SavedVelocity.RotateAngleAxis(DeltaRotation, FVector(0, 0, 1));
			
			OverlappingActor->SetActorLocation(TeleportLocation);
			PlayerController->SetControlRotation(TeleportRotation);

			VRChar->GetCharacterMovement()->Velocity.Set(NewVelocity.X, NewVelocity.Y, NewVelocity.Z);
			
			// So this isn't called multiple times per frame on player...
			break;
		}
	}
}



