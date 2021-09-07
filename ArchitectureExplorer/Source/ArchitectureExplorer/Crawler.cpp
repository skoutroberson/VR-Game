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
		ForwardTrace(DeltaTime);
		DownTrace(DeltaTime);
		break;
	}
}

bool ACrawler::ForwardTrace(float DeltaTime)
{
	FVector UV = GetActorUpVector();
	FVector FV = GetActorForwardVector();
	FVector AL = GetActorLocation();
	float MoveDistance = Speed * DeltaTime;

	bool bTrace = World->LineTraceSingleByChannel(HitResult, AL + UV * 0.1f, AL + UV * 0.1f + FV * MoveDistance, ECollisionChannel::ECC_Visibility, TraceParams);
	DrawDebugLine(World, AL + UV * 0.1f, AL + UV * 0.1f + FV * MoveDistance, FColor::Magenta, false, 2 * DeltaTime);

	if (bTrace)
	{
		FVector NL = HitResult.ImpactPoint;
		FVector N = HitResult.ImpactNormal;

		FVector Disp = AL - NL;

		float Dot = FVector::DotProduct(Disp, N);
		if (Dot < 0)
		{
			N = -N;
			N.RotateAngleAxis(180.f, N);
			UE_LOG(LogTemp, Warning, TEXT("Flip Normal Forward Trace"));
		}
		DrawDebugPoint(World, HitResult.ImpactPoint, 4.f, FColor::Cyan, false, 2 * DeltaTime);
		DrawDebugLine(World, NL, NL + N * 2.f, FColor::Orange, false, 2 * DeltaTime);

		RotateToNormal(N);
		SetActorLocation(HitResult.ImpactPoint);
		
		return true;
	}
		/*
		//	project FV onto the intersect plane (to turn left or right)
		FVector Proj = N * Dot;
		Proj = FV - Proj;
		FQuat AQ = FV.ToOrientationQuat();
		FQuat NQ = Proj.ToOrientationQuat();
		NQ = AQ * NQ;
		*/

	return false;
}

bool ACrawler::DownTrace(float DeltaTime)
{
	float MoveDistance = Speed * DeltaTime;
	FVector DV = -GetActorUpVector();		//	down vector
	FVector BV = -GetActorForwardVector();	//	back vector
	FVector FV = GetActorForwardVector();	//	forward vector
	FVector AL = GetActorLocation();
	FVector ML = AL + FV * MoveDistance;	//	move location
	FVector TSL = ML - DV * 0.1f;			//	trace start location
	FVector TEL = ML + DV * MoveDistance;	//	trace end location

	bool bTrace = World->LineTraceSingleByChannel(HitResult, TSL, TEL, ECollisionChannel::ECC_Visibility, TraceParams);
	DrawDebugLine(World, AL - DV, AL + DV, FColor::Red, false, 2 * DeltaTime);

	if (bTrace)
	{
		FVector NL = HitResult.ImpactPoint;
		FVector Disp = TSL - NL;
		FVector N = HitResult.ImpactNormal;

		float Dot = FVector::DotProduct(Disp, N);
		if (Dot < 0)
		{
			N = -N;
			N.RotateAngleAxis(180.f, N);
			UE_LOG(LogTemp, Warning, TEXT("Flip Normal Down Trace1"));
		}
		RotateToNormal(N);
		SetActorLocation(NL);
		UE_LOG(LogTemp, Warning, TEXT("Down Trace Rotation"));
		return true;
	}
	else
	{
		bTrace = World->LineTraceSingleByChannel(HitResult, TEL, AL, ECollisionChannel::ECC_Visibility, TraceParams);

		if (bTrace)
		{
			FVector N = HitResult.ImpactNormal;
			FVector NL = HitResult.ImpactPoint;
			FVector Disp = NL - TEL;
			float Dot = FVector::DotProduct(Disp, N);

			if (Dot > 0)
			{
				//N = -N;
				//N.RotateAngleAxis(180.f, N);
				UE_LOG(LogTemp, Warning, TEXT("Flip Normal Down Trace2"));
			}
			RotateToNormal(N);
			SetActorLocation(NL);
		}
		else
		{
			SetActorLocation(ML);
			State = CrawlerState::STATE_FALL;
		}
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