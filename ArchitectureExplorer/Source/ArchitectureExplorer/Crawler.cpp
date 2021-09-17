 // Fill out your copyright notice in the Description page of Project Settings.


#include "Crawler.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "DrawDebugHelpers.h"
#include "GameFramework/PawnMovementComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/KismetSystemLibrary.h"

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
		
		
		DownTrace(DeltaTime);

		// add gravity to front and back of crawler
		CrawlerRoot->AddForce(GravityDir);

		CrawlerRoot->AddForce(MoveDir * Speed);

		DrawDebugLine(World, GetActorLocation(), GetActorLocation() - GravityDir * 100.f, FColor::Orange, false, DeltaTime * 2.f);
		DrawDebugLine(World, GetActorLocation(), GetActorLocation() + MoveDir * 100.f, FColor::Cyan, false, DeltaTime * 2.f);

		break;
	}
}
 
bool ACrawler::ForwardTrace(float DeltaTime)
{

	return false;
}

bool ACrawler::DownTrace(float DeltaTime)
{
	FVector AL = GetActorLocation();
	FVector UV = GetActorUpVector();
	FVector FV = GetActorForwardVector();
	bool bTrace = World->LineTraceSingleByChannel(HitResult, AL + UV * 0.1f, AL - UV * 6.8f, ECollisionChannel::ECC_PhysicsBody, TraceParams);

	//DrawDebugPoint(World, AL + FV * (CrawlerRoot->GetScaledBoxExtent().X), 4.f, FColor::Purple, false, DeltaTime * 2.f);
	//DrawDebugPoint(World, AL - FV * (CrawlerRoot->GetScaledBoxExtent().X * 0.8f), 4.f, FColor::White, false, DeltaTime * 2.f);
	

	if (bTrace)
	{
		FVector N = HitResult.ImpactNormal;
		float Dot = FVector::DotProduct(UV, N);
		
		if (Dot < 0)
		{
			N = -N;
		}
		GravityDir = -N;

		if (!bShouldTraverse)
		{
			SetActorLocation(HitResult.ImpactPoint, true);
			Dot = FVector::DotProduct(N, FV);
			N *= Dot;
			MoveDir = FV - N;
			MoveDir = MoveDir.GetSafeNormal();
		}
	}
	else
	{
		bool bSphereTrace = UKismetSystemLibrary::SphereTraceSingle(World, AL, AL - UV * 0.1f, 0.5f, ETraceTypeQuery::TraceTypeQuery_MAX, true, TraceIgnoreActors, EDrawDebugTrace::ForDuration,
			HitResult, true);

		if (bSphereTrace)
		{
			RotateToNormal(HitResult.ImpactNormal);	// this might give me issues
			SetActorLocation(HitResult.ImpactPoint, true);

			//DrawDebugPoint(World, HitResult.ImpactPoint, 4.f, FColor::Green, false, 2 * DeltaTime);
			//DrawDebugLine(World, HitResult.ImpactPoint, HitResult.ImpactPoint + HitResult.ImpactNormal * 100.f, FColor::Black, true);
		}
		
		//CrawlerRoot->PutRigidBodyToSleep();
		//CrawlerRoot->WakeRigidBody();
		//CrawlerRoot->AddTorqueInRadians(GetActorRightVector() * World->DeltaTimeSeconds * 10.f);
	}

	return bTrace;
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

void ACrawler::HitRigidBody(UPARAM(ref)FHitResult HitResult, UPARAM()FVector ImpulseNormal)
{

	CrawlerRoot->PutRigidBodyToSleep();

	FVector AL = GetActorLocation();
	FVector FV = GetActorForwardVector();
	FVector UV = GetActorUpVector();

	HitPoint = HitResult.ImpactPoint;
	FVector Disp = HitPoint - AL;

	FVector Extent = CrawlerRoot->GetScaledBoxExtent();

	float LengthSquared = (Extent.X * 0.5f) * (Extent.X * 0.5f);
	float MagSquared = Disp.SizeSquared();
	float Dot = FVector::DotProduct(Disp, FV);
	
	CrawlerRoot->WakeRigidBody();

	
	if (Dot > 0 && MagSquared > 6.7f)
	{
		bShouldTraverse = true;

		DrawDebugLine(World, HitResult.ImpactPoint, HitResult.ImpactPoint + ImpulseNormal * 1000.f, FColor::White, false, 2 * World->DeltaTimeSeconds);

		/*
		CrawlerRoot->AddTorqueInRadians(GetActorRightVector() * -60 * Dot);
		FVector N = HitResult.ImpactNormal;
		Dot = FVector::DotProduct(N, FV);

		if (Dot > 0)
		{
			N = -N;
		}
		GravityDir = -N * 2.f;
		/*
		N *= Dot;
		MoveDir = FV - N;
		MoveDir = MoveDir.GetSafeNormal();
		*/
	}
	else
	{
		bShouldTraverse = false;
	}
	
	
}
