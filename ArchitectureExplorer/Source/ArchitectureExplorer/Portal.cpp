// Fill out your copyright notice in the Description page of Project Settings.


#include "Portal.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SceneCaptureComponent2D.h"
#include "Engine/TextureRenderTarget2D.h"
#include "Components/ActorComponent.h"
#include "GameFramework/Actor.h"
#include "Engine/World.h"
#include "Camera/CameraComponent.h"
#include "DrawDebugHelpers.h"
#include "Math/Rotator.h"
#include "Components/SceneComponent.h"
#include "Math/Plane.h"
#include "Math/Quat.h"
#include "Math/TransformNonVectorized.h"
#include "GameFramework/PlayerController.h"
#include "Engine/LocalPlayer.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "VRCharacter.h"

// Sets default values
APortal::APortal()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	PortalRoot = CreateDefaultSubobject<USceneComponent>(TEXT("PortalRoot"));
	//PortalRoot->SetupAttachment(GetRootComponent());
	SetRootComponent(PortalRoot);
	//PortalRoot->Mobility = EComponentMobility::Static;

	PlaneA = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PlaneA"));
	PlaneA->SetupAttachment(PortalRoot);

	PlaneB = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PlaneB"));
	PlaneB->SetupAttachment(PortalRoot);

	//CameraA = CreateDefaultSubobject<USceneCaptureComponent2D>(TEXT("CameraA"));
	//CameraA->SetupAttachment(PlaneA);
	//CameraA->RegisterComponent();

	//CameraB = CreateDefaultSubobject<USceneCaptureComponent2D>(TEXT("CameraB"));
	//CameraB->SetupAttachment(PlaneB);
	//CameraB->RegisterComponent();

	//TextureA = CreateDefaultSubobject<UTextureRenderTarget2D>(TEXT("TextureA"));
	//TextureB = CreateDefaultSubobject<UTextureRenderTarget2D>(TEXT("TextureB"));

}

void APortal::InitPortal(USceneCaptureComponent2D* Portal)
{

}

// Called when the game starts or when spawned
void APortal::BeginPlay()
{
	Super::BeginPlay();

	Player = GetWorld()->GetFirstPlayerController()->GetPawn();
	PlayerCamera = Player->FindComponentByClass<UCameraComponent>();

	APlayerController* PlayerController = GetWorld()->GetFirstPlayerController();
	

	CameraA = (USceneCaptureComponent2D*)PlaneA->GetChildComponent(0);
	CameraB = (USceneCaptureComponent2D*)PlaneB->GetChildComponent(0);

	PlaneANormal = PlaneA->GetForwardVector().RotateAngleAxis(90, FVector(0, 0, 1));
	PlaneBNormal = PlaneB->GetForwardVector().RotateAngleAxis(90, FVector(0, 0, 1));

	ALoc = PlaneA->GetComponentLocation();
	BLoc = PlaneB->GetComponentLocation();
	
	CameraA->TextureTarget->SizeX = 1920;
	CameraA->TextureTarget->SizeY = 1080;
	CameraB->TextureTarget->SizeX = 1920;
	CameraB->TextureTarget->SizeY = 1080;
	

	PlayerCamLoc = PlayerCamera->GetComponentLocation();
}

// Called every frame
void APortal::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	DistA = FVector::Dist(PlayerCamera->GetComponentLocation(), PlaneA->GetComponentLocation());
	DistB = FVector::Dist(PlayerCamera->GetComponentLocation(), PlaneB->GetComponentLocation());

	if (DistA < 400)
	{
		PortalCheck(PlaneA, DistA, PlaneB, CameraB);
	}
	else if (DistB < 400)
	{
		PortalCheck(PlaneB, DistB, PlaneA, CameraA);
	}
}

void APortal::PortalCheck(UStaticMeshComponent* PortalMesh, float Dist, UStaticMeshComponent* TargetMesh, USceneCaptureComponent2D* TargetCam)
{
	FVector PortalNormal = PortalMesh->GetForwardVector().RotateAngleAxis(90, FVector(0, 0, 1));
	FVector TargetNormal = TargetMesh->GetForwardVector().RotateAngleAxis(90, FVector(0, 0, 1));
	FVector Point1 = PortalMesh->GetComponentLocation() + PortalMesh->GetForwardVector() * PortalHalfWidth;
	FVector Point2 = PortalMesh->GetComponentLocation() + PortalMesh->GetForwardVector() * -PortalHalfWidth;
	//FVector P = PlayerCamLoc;
	FVector TargetLoc = TargetMesh->GetComponentLocation();

	AVRCharacter* VRChar = nullptr;
	FVector SavedVelocity = FVector::ZeroVector;

	APlayerController* PlayerController = GetWorld()->GetFirstPlayerController();

	CameraA->SetWorldLocation(FVector(CameraA->GetComponentLocation().X, CameraA->GetComponentLocation().Y, PlayerCamLoc.Z));
	CameraB->SetWorldLocation(FVector(CameraB->GetComponentLocation().X, CameraB->GetComponentLocation().Y, PlayerCamLoc.Z));
	
	DrawDebugSphere(GetWorld(), Point1, 8, 6, FColor::Magenta);
	DrawDebugSphere(GetWorld(), Point2, 8, 6, FColor::Magenta);

	VRChar = Cast<AVRCharacter>(Player);
	SavedVelocity = VRChar->GetCharacterMovement()->GetLastUpdateVelocity();
	
	//FVector SavedVelocity = 

	//float d = (P.X - Point1.X)*(Point2.Y - Point1.Y) - (P.Y - Point1.Y)*(Point2.X - Point1.X);
	//side = (d > 0) ? 1 : -1;
	//UE_LOG(LogTemp, Warning, TEXT("%d"), side);

	FPlane PortalPlane = FPlane(PortalMesh->GetComponentLocation(), PortalNormal);
	float PortalDot = PortalPlane.PlaneDot(PlayerCamera->GetComponentLocation());
	bool IsInFrontOfPortal = (PortalDot >= 0) ? true : false;

	bool IsIntersect = FMath::SegmentPlaneIntersection(
		PlayerCamera->GetComponentLocation(),
		PlayerCamLoc,
		PortalPlane,
		IntersectionPoint
	);

	
	
	FVector NewLocationP = ConvertLocationToActorSpaceP(PlayerCamLoc, PortalMesh, TargetMesh);
	FRotator NewRotation = ConvertRotationToActorSpace(PlayerCamera->GetComponentRotation(), PortalMesh, TargetMesh);
	
	NewRotation.Yaw += 180;
	TargetCam->SetWorldRotation(NewRotation);
	TargetCam->SetWorldLocation(NewLocationP);
	
	//UE_LOG(LogTemp, Warning, TEXT("%f"), ConCamOffset);
	//DrawDebugSphere(GetWorld(), NewLocation, 10, 10, FColor::Red);
	//DrawDebugSphere(GetWorld(), PlayerCamLoc, 10, 10, FColor::Red);

	//UE_LOG(LogTemp, Warning, TEXT("Src: %f, %f"), PlayerCamLoc.X - PortalMesh->GetComponentLocation().X, PlayerCamLoc.Y - PortalMesh->GetComponentLocation().Y);
	//UE_LOG(LogTemp, Warning, TEXT("Tgt: %f, %f"), NewLocation.X - TargetMesh->GetComponentLocation().X, NewLocation.Y - TargetMesh->GetComponentLocation().Y);

	//DrawDebugLine(GetWorld(), PlayerCamLoc, PlayerCamLoc + PlayerCamera->GetForwardVector() * 1000, FColor::Purple);
	//DrawDebugLine(GetWorld(), NewLocation, NewLocation + NewRotation.Vector() * 1000, FColor::Red);
	float ConCamOffset = PlayerController->GetControlRotation().Yaw - PlayerCamera->GetComponentRotation().Yaw;
	//UE_LOG(LogTemp, Warning, TEXT("%f"), ConCamOffset);

	if (IsIntersect && Dist < PortalHalfWidth) //&& !IsInFrontOfPortal && LastInFront
	{
		
		PlayerController->SetIgnoreLookInput(true);
		PlayerController->SetControlRotation(FRotator(NewRotation.Pitch, NewRotation.Yaw + ConCamOffset, NewRotation.Roll));
		//PlayerCamera->SetWorldRotation(NewRotation);
		//PlayerCamera->SetWorldRotation(NewRotation);
		PlayerController->SetIgnoreLookInput(false);

		
		float VelLen = VRChar->GetCharacterMovement()->Velocity.Size();
		FVector VelRes = VelLen * TargetNormal;


		FVector NewLocation = ConvertLocationToActorSpace(PlayerCamLoc, PortalMesh, TargetMesh);
		//FVector NewLocation = ConvertLocationToActorSpace(PlayerCamLoc, PortalMesh, TargetMesh);
		//FRotator NewRotation = ConvertRotationToActorSpace(PlayerCamera->GetComponentRotation(), PortalMesh, TargetMesh);

		Player->SetActorLocation(NewLocation);
		VRChar->GetCharacterMovement()->Velocity.Set(VelRes.X,VelRes.Y,VelRes.Z);

		//DrawDebugLine(GetWorld(), PlayerCamLoc, PlayerCamLoc + PlayerCamera->GetComponentRotation().Vector() * 1000, FColor::Purple, true);
		//DrawDebugLine(GetWorld(), PlayerCamLoc, PlayerCamLoc + NewRotation.Vector() * 1000, FColor::Red, true);
	}

	LastInFront = IsInFrontOfPortal;
	PlayerCamLoc = PlayerCamera->GetComponentLocation();
}

FVector APortal::ConvertLocationToActorSpace(FVector Location, UStaticMeshComponent* Reference, UStaticMeshComponent* Target)
{
	if (Reference == nullptr || Target == nullptr)
	{
		return FVector::ZeroVector;
	}

	FVector Direction = Location - Reference->GetComponentLocation();
	FVector TargetLocation = Target->GetComponentLocation();

	FVector Dots;
	Dots.X = FVector::DotProduct(Direction, Reference->GetForwardVector());
	Dots.Y = FVector::DotProduct(Direction, Reference->GetRightVector());
	Dots.Z = FVector::DotProduct(Direction, Reference->GetUpVector());

	FVector NewDirection = Dots.X * Target->GetForwardVector()
		+ Dots.Y * Target->GetRightVector()
		+ Dots.Z * Target->GetUpVector();

	return TargetLocation + NewDirection;
}

FVector APortal::ConvertLocationToActorSpaceP(FVector Location, UStaticMeshComponent* Reference, UStaticMeshComponent* Target)
{
	if (Reference == nullptr || Target == nullptr)
	{
		return FVector::ZeroVector;
	}

	FVector Direction = Location - Reference->GetComponentLocation();
	FVector TargetLocation = Target->GetComponentLocation();

	FVector Dots;
	Dots.X = FVector::DotProduct(Direction, Reference->GetForwardVector());
	Dots.Y = FVector::DotProduct(Direction, Reference->GetRightVector());
	Dots.Z = FVector::DotProduct(Direction, Reference->GetUpVector());

	FVector NewDirection = Dots.X * Target->GetForwardVector()
		+ Dots.Y * Target->GetRightVector()
		+ Dots.Z * Target->GetUpVector();

	return TargetLocation - NewDirection;
}

FRotator APortal::ConvertRotationToActorSpace(FRotator Rotation, UStaticMeshComponent* Reference, UStaticMeshComponent* Target)
{
	if (Reference == nullptr || Target == nullptr)
	{
		return FRotator::ZeroRotator;
	}
	
	FTransform SourceTransform = Reference->GetComponentTransform();
	FTransform TargetTransform = Target->GetComponentTransform();
	FQuat QuatRotation = FQuat(Rotation);

	FQuat LocalQuat = SourceTransform.GetRotation().Inverse() * QuatRotation;
	FQuat NewWorldQuat = TargetTransform.GetRotation() * LocalQuat;

	return NewWorldQuat.Rotator();
}
