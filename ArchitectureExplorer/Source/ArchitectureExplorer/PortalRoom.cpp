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

// Sets default values
APortalRoom::APortalRoom()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	PRRoot = CreateDefaultSubobject<USceneComponent>(TEXT("PRRoot"));
	SetRootComponent(PRRoot);

	RoomMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RoomMesh"));
	RoomMesh->SetupAttachment(PRRoot);

	TeleLoc = CreateDefaultSubobject<USceneComponent>(TEXT("TeleLoc"));
	TeleLoc->SetupAttachment(PRRoot);


}

// Called when the game starts or when spawned
void APortalRoom::BeginPlay()
{
	Super::BeginPlay();

	DrawDebugLine(GetWorld(), PRRoot->GetComponentLocation(), PRRoot->GetComponentLocation() + PRRoot->GetForwardVector() * 100, FColor::Purple, true);

	Player = GetWorld()->GetFirstPlayerController()->GetPawn();
	PlayerCamera = Player->FindComponentByClass<UCameraComponent>();

	
}

// Called every frame
void APortalRoom::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!bTele)
	{
		if (FVector::Dist(Player->GetActorLocation(), RoomMesh->GetComponentLocation()) < 200)
		{
			Teleport();
			bTele = true;
		}

	}
}

void APortalRoom::Teleport()
{
	APlayerController* PlayerController = GetWorld()->GetFirstPlayerController();
	AVRCharacter* VRChar = nullptr;
	//UCameraComponent* CharCam = nullptr;
	VRChar = Cast<AVRCharacter>(Player);
	//CharCam = Cast<UCameraComponent>(VRChar->GetComponentByClass(UCameraComponent::StaticClass()));

	//FVector NewLocation = GetTeleportLocation(CharCam);
	
	FVector Dif = Player->GetActorLocation() - GetActorLocation();
	DrawDebugLine(GetWorld(), GetActorLocation(), GetActorLocation() + Dif, FColor::Orange, true);
	DrawDebugSphere(GetWorld(), PRRoot->GetComponentLocation(), 8, 16, FColor::Red, true);
	DrawDebugSphere(GetWorld(), PRRoot->GetComponentLocation() + Dif, 8, 16, FColor::Emerald, true);
	Dif.RotateAngleAxis(180, FVector(0, 0, 1));
	
	//Player->SetActorLocation(TeleLoc->GetComponentLocation() + Dif);
	FVector NewLocation = FVector(TeleLoc->GetComponentLocation().X, TeleLoc->GetComponentLocation().Y, Player->GetActorLocation().X) + Dif;
	//PlayerCamera->SetWorldLocation(NewLocation);
	//Player->SetActorLocation(NewLocation);
	
	//VRChar->SetActorEnableCollision(false);
	//VRChar->SetActorLocationAndRotation(TeleLoc->, TeleLoc->GetComponentRotation());

	Player->SetActorLocation(FVector(350, -930, Player->GetActorLocation().Z), false);
	SetActorLocation(TeleLoc->GetComponentLocation());
	SetActorRotation(TeleLoc->GetComponentRotation());
	//PlayerCamera->SetWorldLocation(TeleLoc->GetComponentLocation());
	//VRChar->SetActorLocation(NewLocation);
}

FVector APortalRoom::GetTeleportLocation(UCameraComponent* CharCam)
{
	FVector Dir = CharCam->GetComponentLocation() - GetActorLocation();
	FVector Dots = FVector::ZeroVector;
	FVector NewLoc = FVector::ZeroVector;
	Dots.X = FVector::DotProduct(Dir, GetActorForwardVector());
	Dots.Y = FVector::DotProduct(Dir, GetActorForwardVector());
	Dots.Z = FVector::DotProduct(Dir, GetActorUpVector());

	FVector NewDirection = Dots.X * TeleLoc->GetForwardVector()
		+ Dots.Y * TeleLoc->GetRightVector()
		+ Dots.Z * TeleLoc->GetUpVector();

	return TeleLoc->GetComponentLocation() + NewDirection;
}

FVector APortalRoom::ConvertLocationToActorSpace(FVector Location, AActor* Reference, USceneComponent* Target)
{
	if (Reference == nullptr || Target == nullptr)
	{
		return FVector::ZeroVector;
	}

	FVector Direction = Location - Reference->GetActorLocation();
	FVector TargetLocation = Target->GetComponentLocation();

	FVector Dots;
	Dots.X = FVector::DotProduct(Direction, Reference->GetActorForwardVector());
	Dots.Y = FVector::DotProduct(Direction, Reference->GetActorRightVector());
	Dots.Z = FVector::DotProduct(Direction, Reference->GetActorUpVector());

	FVector NewDirection = Dots.X * Target->GetForwardVector()
		+ Dots.Y * Target->GetRightVector()
		+ Dots.Z * Target->GetUpVector();

	return TargetLocation + NewDirection;
}

FRotator APortalRoom::ConvertRotationToActorSpace(FRotator Rotation, AActor* Reference, USceneComponent* Target)
{
	if (Reference == nullptr || Target == nullptr)
	{
		return FRotator::ZeroRotator;
	}

	FTransform SourceTransform = Reference->GetTransform();
	FTransform TargetTransform = Target->GetComponentTransform();
	FQuat QuatRotation = FQuat(Rotation);

	FQuat LocalQuat = SourceTransform.GetRotation().Inverse() * QuatRotation;
	FQuat NewWorldQuat = TargetTransform.GetRotation() * LocalQuat;

	return NewWorldQuat.Rotator();
}

