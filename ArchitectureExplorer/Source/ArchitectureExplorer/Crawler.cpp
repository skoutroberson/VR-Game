// Fill out your copyright notice in the Description page of Project Settings.


#include "Crawler.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "DrawDebugHelpers.h"
#include "Kismet/KismetMathLibrary.h"

// Sets default values
ACrawler::ACrawler()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	SetRootComponent(Root);

	Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
	Mesh->AttachTo(Root);

}

// Called when the game starts or when spawned
void ACrawler::BeginPlay()
{
	Super::BeginPlay();

	World = GetWorld();

	//UE_LOG(LogTemp, Warning, TEXT("%f"), GetActorLocation().Y);
	State = CrawlerState::STATE_MOVE;

	
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
		if (!ForwardTrace(DeltaTime))
		{
			MoveForward(DeltaTime);
		}
		break;
	}
}

bool ACrawler::ForwardTrace(float DeltaTime)
{
	FVector UV = GetActorUpVector();
	FVector FV = GetActorForwardVector();
	FVector AL = GetActorLocation() + UV * 0.1f;
	float MoveDistance = Speed * DeltaTime;

	bool bTrace = World->LineTraceSingleByChannel(HitResult, AL, AL + FV * MoveDistance, ECollisionChannel::ECC_Visibility);

	if (bTrace)
	{
		FVector NL = HitResult.ImpactPoint;
		FVector N = HitResult.ImpactNormal;
		float Dot = FVector::DotProduct(FV, N);
		if (Dot > 0)
		{
			N = -N;
			UE_LOG(LogTemp, Warning, TEXT("Flip Normal"));
		}

		/*
		//	project FV onto the intersect plane (to turn left or right)
		FVector Proj = N * Dot;
		Proj = FV - Proj;
		FQuat AQ = FV.ToOrientationQuat();
		FQuat NQ = Proj.ToOrientationQuat();
		NQ = AQ * NQ;
		*/
		RotateToNormal(N);
		SetActorLocation(HitResult.ImpactPoint);
	}

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