// Fill out your copyright notice in the Description page of Project Settings.


#include "PortalRoom.h"
#include "Components/StaticMeshComponent.h"
#include "DrawDebugHelpers.h"
#include "GameFramework/PlayerController.h"
#include "Camera/CameraComponent.h"
#include "VRCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"

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
	//TeleLoc->SetupAttachment(PRRoot);


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

	float RotDif = GetActorRotation().Yaw - PlayerController->GetControlRotation().Yaw;

	float ConCamOffset = PlayerController->GetControlRotation().Yaw - PlayerCamera->GetComponentRotation().Yaw;

	float NewYaw = TeleLoc->GetComponentRotation().Yaw + RotDif + ConCamOffset;

	FVector LocOffset = PlayerCamera->GetComponentLocation() - GetActorLocation();

	SetActorLocation(TeleLoc->GetComponentLocation());
	SetActorRotation(TeleLoc->GetComponentRotation());

	VRChar = Cast<AVRCharacter>(Player);
	
	FVector NewLocation = ConvertLocationToActorSpace(Player->GetActorLocation(), this, TeleLoc);
	FRotator NewRotation = ConvertRotationToActorSpace(PlayerCamera->GetComponentRotation(), this, TeleLoc);
	NewRotation.Yaw += 90;

	float VelLen = VRChar->GetCharacterMovement()->Velocity.Size();
	FVector VelRes = VelLen * TeleLoc->GetForwardVector();

	Player->SetActorLocation(NewLocation);

	

	PlayerController->SetIgnoreLookInput(true);
	PlayerController->SetControlRotation(NewRotation);
	PlayerController->SetIgnoreLookInput(false);

	VRChar->GetCharacterMovement()->Velocity.Set(VelRes.X, VelRes.Y, VelRes.Z);
	
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

