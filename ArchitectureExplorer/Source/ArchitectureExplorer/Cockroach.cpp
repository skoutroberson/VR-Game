// Fill out your copyright notice in the Description page of Project Settings.


#include "Cockroach.h"
#include "DrawDebugHelpers.h"
#include "Kismet/KismetSystemLibrary.h"

// Sets default values
ACockroach::ACockroach()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Root = CreateDefaultSubobject<USphereComponent>(TEXT("Root"));
	Root->SetupAttachment(GetRootComponent());

	Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
	Mesh->SetupAttachment(Root);

}

// Called when the game starts or when spawned
void ACockroach::BeginPlay()
{
	Super::BeginPlay();

	World = GetWorld();
	TraceParams.AddIgnoredActor(this);
	TraceIgnoreActors.Add(this);
	
	State = RoachState::STATE_MOVE;
}

// Called every frame
void ACockroach::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//UE_LOG(LogTemp, Warning, TEXT("Hits: %d"), HitsThisFrame);

	FVector AL = GetActorLocation();
	DrawDebugLine(World, AL, AL + MoveDirection * 10.f, FColor::Cyan, false, 1.1 * DeltaTime);
	DrawDebugLine(World, AL, AL - GravityDirection * 10.f, FColor::Orange, false, 1.1 * DeltaTime);

	switch (State)
	{
	case RoachState::STATE_MOVE:

		Root->AddForce(GravityDirection * 2.f);
		Move(DeltaTime);

		if (HitsThisFrame == 0 && bToggle)
		{
			DownTrace(DeltaTime);
		}

		break;
	}

	if (bToggle)
	{
		HitsThisFrame = 0;
	}
	else
	{
		bToggle = true;
	}
}

void ACockroach::Move(float DeltaTime)
{
	Root->AddForce(MoveDirection * Speed);

}

void ACockroach::DownTrace(float DeltaTime)
{
	FVector AL = GetActorLocation();
	float Radius = Root->GetScaledSphereRadius();

	if (HitsThisFrame == 0)
	{
		bool Result = UKismetSystemLibrary::SphereTraceSingle(World, AL + GravityDirection, AL + GravityDirection * 1.01f, Radius * 1.5f, ETraceTypeQuery::TraceTypeQuery1,
			false, TraceIgnoreActors, EDrawDebugTrace::ForDuration, HitResult, true, FLinearColor::Red, FLinearColor::Green, DeltaTime * 1.1f);

		if (Result)
		{
			FVector N = HitResult.ImpactNormal;
			FVector HL = HitResult.ImpactPoint;

			GravityDirection = GravityDirection.GetSafeNormal();

			float Dot = fabsf(FVector::DotProduct(N, GravityDirection));

			if (fabsf(Dot) < 1 - 0.0001f)
			{
				float Theta = acosf(Dot) * (180.f / PI);

				MoveDirection = MoveDirection.GetSafeNormal();

				FVector Axis = FVector::CrossProduct(N, GravityDirection);

				MoveDirection = MoveDirection.RotateAngleAxis(Theta, Axis);
				GravityDirection = -N;

				FVector V = Root->GetPhysicsLinearVelocity();
				V = V.RotateAngleAxis(Theta, Axis);
				Root->SetPhysicsLinearVelocity(V);

				SetActorLocation(HL, true);
				DrawDebugLine(World, HL, HL + N * 10.f, FColor::Purple, false, DeltaTime * 1.1f);
				HitsThisFrame++;
				bToggle = false;
			}
			
		}
		else
		{
			State = RoachState::STATE_FALL;
			Root->PutRigidBodyToSleep();
		}
	}
}

void ACockroach::HitRigidBody(UPARAM(ref)FHitResult HitResult, UPARAM()FVector ImpulseNormal)
{
	FVector AL = GetActorLocation();
	FVector HL = HitResult.ImpactPoint;
	FVector N = ImpulseNormal;
	N = N.GetSafeNormal();

	//DrawDebugPoint(World, HL, 4.f, FColor::Blue, false, 2 * World->DeltaTimeSeconds);

	HitsThisFrame++;
}

void ACockroach::RotateToNormal(UPARAM()FVector NormalVector)
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