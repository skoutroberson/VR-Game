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

	CameraA = (USceneCaptureComponent2D*)PlaneA->GetChildComponent(0);
	CameraB = (USceneCaptureComponent2D*)PlaneB->GetChildComponent(0);

	PlaneANormal = PlaneA->GetForwardVector().RotateAngleAxis(90, FVector(0, 0, 1));
	PlaneBNormal = PlaneB->GetForwardVector().RotateAngleAxis(90, FVector(0, 0, 1));

	ALoc = PlaneA->GetComponentLocation();
	BLoc = PlaneB->GetComponentLocation();

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
		PortalCheck(PlaneA, DistA, PlaneB);
	}
	else if (DistB < 400)
	{
		PortalCheck(PlaneB, DistB, PlaneA);
	}
	
	
}

void APortal::PortalCheck(UStaticMeshComponent* PortalMesh, float Dist, UStaticMeshComponent* TargetMesh)
{
	FVector PortalNormal = PortalMesh->GetForwardVector().RotateAngleAxis(90, FVector(0, 0, 1));
	FVector TargetNormal = TargetMesh->GetForwardVector().RotateAngleAxis(90, FVector(0, 0, 1));
	FVector Point1 = PortalMesh->GetComponentLocation() + PortalMesh->GetForwardVector() * PortalHalfWidth;
	FVector Point2 = PortalMesh->GetComponentLocation() + PortalMesh->GetForwardVector() * -PortalHalfWidth;
	//FVector P = PlayerCamLoc;
	FVector TargetLoc = TargetMesh->GetComponentLocation();
	
	DrawDebugSphere(GetWorld(), Point1, 8, 6, FColor::Magenta);
	DrawDebugSphere(GetWorld(), Point2, 8, 6, FColor::Magenta);
	//float d = (P.X - Point1.X)*(Point2.Y - Point1.Y) - (P.Y - Point1.Y)*(Point2.X - Point1.X);
	//side = (d > 0) ? 1 : -1;
	//UE_LOG(LogTemp, Warning, TEXT("%d"), side);
	FPlane PortalPlane = FPlane(PortalMesh->GetComponentLocation(), PortalNormal);
	float PortalDot = PortalPlane.PlaneDot(PlayerCamera->GetComponentLocation());
	bool IsInFrontOfPortal = (PortalDot >= 0) ? true : false;
	//UE_LOG(LogTemp, Warning, TEXT("%d"), IsInFrontOfPortal);

	bool IsIntersect = FMath::SegmentPlaneIntersection(
		PlayerCamera->GetComponentLocation(),
		PlayerCamLoc,
		PortalPlane,
		IntersectionPoint
	);

	UE_LOG(LogTemp, Warning, TEXT("camera %f"), PlayerCamera->GetComponentRotation().Yaw);
	UE_LOG(LogTemp, Warning, TEXT("player %f"), Player->GetActorRotation().Yaw);

	//DrawDebugLine(GetWorld(), PlayerCamLoc, PlayerCamLoc + PlayerCamera->GetForwardVector() * 1000, FColor::Purple);

	if (IsIntersect && Dist < PortalHalfWidth && !IsInFrontOfPortal && LastInFront)
	{
		//test = true;
		//Player->SetActorLocation(FVector(TargetLoc.X, TargetLoc.Y, Player->GetActorLocation().Z));
		//Player->SetActorRotation(TargetNormal.Rotation());
		//PlayerCamera->SetWorldRotation(TargetNormal.Rotation());

		FVector NewLocation = ConvertLocationToActorSpace(PlayerCamLoc, PortalMesh, TargetMesh);
		FRotator NewRotation = ConvertRotationToActorSpace(PlayerCamera->GetComponentRotation(), PortalMesh, TargetMesh);
		NewRotation.Yaw += 180;
		Player->SetActorLocation(NewLocation);
		PlayerCamera->SetWorldRotation(NewRotation);

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

FRotator APortal::ConvertRotationToActorSpace(FRotator Rotation, UStaticMeshComponent* Reference, UStaticMeshComponent* Target)
{
	if (Reference == nullptr || Target == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("ah poop!"));
		return FRotator::ZeroRotator;
	}
	
	FTransform SourceTransform = Reference->GetComponentTransform();
	FTransform TargetTransform = Target->GetComponentTransform();
	FQuat QuatRotation = FQuat(Rotation);

	FQuat LocalQuat = SourceTransform.GetRotation().Inverse() * QuatRotation;
	FQuat NewWorldQuat = TargetTransform.GetRotation() * LocalQuat;

	return NewWorldQuat.Rotator();
}
