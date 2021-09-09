// Fill out your copyright notice in the Description page of Project Settings.


#include "Crawler.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "DrawDebugHelpers.h"
#include "GameFramework/PawnMovementComponent.h"
#include "Kismet/KismetMathLibrary.h"

// Sets default values
ACrawler::ACrawler()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	CrawlerRoot = CreateDefaultSubobject<UBoxComponent>(TEXT("CrawlerRoot"));
	CrawlerRoot->SetupAttachment(GetRootComponent());
	CrawlerRoot->SetBoxExtent(FVector(2.4f,1.0f,0.1f));
}

// Called when the game starts or when spawned
void ACrawler::BeginPlay()
{
	Super::BeginPlay();

	World = GetWorld();

	//UE_LOG(LogTemp, Warning, TEXT("%f"), GetActorLocation().Y);
	State = CrawlerState::STATE_MOVE;

	TraceParams.AddIgnoredActor(this);
}

// Called every frame
void ACrawler::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//UE_LOG(LogTemp, Warning, TEXT("%f"), GetActorLocation().Y);

	switch (State)
	{
	case CrawlerState::STATE_IDLE:
		break;

	case CrawlerState::STATE_MOVE:
		
		break;
	}
}
 
bool ACrawler::ForwardTrace(float DeltaTime)
{

	return false;
}

bool ACrawler::DownTrace(float DeltaTime)
{
	
	return false;
}

void ACrawler::MoveForward(float DeltaTime)
{
	FVector FV = GetActorForwardVector();
	FVector AL = GetActorLocation();
	float MoveDistance = Speed * DeltaTime;
	AL += FV * MoveDistance;
	SetActorLocation(AL);
}

void ACrawler::Swerve(float DeltaTime)
{
}

void ACrawler::StartSwerve()
{
	// set swerve values
	World->GetTimerManager().SetTimer(SwerveTimer, this, &ACrawler::StartSwerve, SwerveTime);
}

void ACrawler::RotateToNormal(UPARAM()FVector NormalVector)
{
	FVector UpVector = GetActorUpVector();
	FVector RotationAxis = FVector::CrossProduct(UpVector, NormalVector);
	RotationAxis.Normalize();
	float DotProduct = FVector::DotProduct(UpVector, NormalVector);
	float RotationAngle = acosf(DotProduct);
	FQuat RotQuat = FQuat(RotationAxis, RotationAngle);
	FQuat MyQuat = GetActorQuat();
	FQuat NewQuat = RotQuat * MyQuat;

	SetActorRotation(NewQuat);
}

void ACrawler::HitRigidBody(UPARAM(ref)FHitResult HitResult)
{
}
