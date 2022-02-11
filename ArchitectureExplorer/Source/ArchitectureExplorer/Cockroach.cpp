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

	LastDirection = MoveDirection;

	HitsThisFrame = 1;
	
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

		Root->AddForce(GravityDirection * 4.f);
		Move(DeltaTime);
		MoveDirection = MoveDirection.RotateAngleAxis(DeltaTime * 14.f, GravityDirection);

		if (HitsThisFrame == 0)
		{
			DownTrace(DeltaTime);
		}
		else
		{
			SetMeshTransform(DeltaTime);
		}

		break;
	case RoachState::STATE_FALL:
		Root->AddForce(WorldGravity * 2.f);
		DownTrace(DeltaTime);
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

	LastLocation = GetActorLocation();
	LastDirection = MoveDirection;
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
		FVector Disp = LastLocation - AL;
		float MovedDistance = Disp.Size();
		GravityDirection = GravityDirection.GetSafeNormal();

		bool Result = UKismetSystemLibrary::SphereTraceSingle(World, 
			AL,
			AL + GravityDirection * Radius - MoveDirection * Speed, //* 5.f, // need to base the "5.f" on Speed
			Radius,								// need to base radius on speed
			ETraceTypeQuery::TraceTypeQuery_MAX,
			true, TraceIgnoreActors, EDrawDebugTrace::ForDuration, 
			HitResult, true, FLinearColor::Red, FLinearColor::Green, DeltaTime * 1.1f);

		if (Result)
		{
			FVector N = HitResult.ImpactNormal;
			FVector HL = HitResult.ImpactPoint;

			FVector Disp = HL - AL;

			//float Dot = FVector::DotProduct(Disp, MoveDirection);

			float Dot = fabsf(FVector::DotProduct(N, GravityDirection));

			if (fabsf(Dot) < 1)
			{
				/*
				MoveDirection = MoveDirection.GetSafeNormal();
				GravityDirection = -N;

				Dot = FVector::DotProduct(MoveDirection, N);

				FVector Proj = N;

				Proj *= Dot;
				MoveDirection = MoveDirection - Proj;
				MoveDirection = MoveDirection.GetSafeNormal();

				FVector V = Root->GetPhysicsLinearVelocity();
				Dot = FVector::DotProduct(V, N);

				Proj = N;

				Proj *= Dot;
				V = V - Proj;

				Root->SetPhysicsLinearVelocity(V);
				SetActorLocation(HL, true);
				*/
				
				float Theta = acosf(Dot) * (180.f / PI);

				MoveDirection = MoveDirection.GetSafeNormal();

				FVector Axis = FVector::CrossProduct(N, GravityDirection);
				Axis = Axis.GetSafeNormal();

				MoveDirection = MoveDirection.RotateAngleAxis(Theta, Axis);

				GravityDirection = -N;

				FVector V = Root->GetPhysicsLinearVelocity();
				V = V.RotateAngleAxis(Theta, Axis);
				Root->SetPhysicsLinearVelocity(V);

				SetActorLocation(HL, true, nullptr, ETeleportType::None);
				//DrawDebugLine(World, HL, HL + N * 10.f, FColor::Purple, false, DeltaTime * 1.1f);

				AverageLocation += HL;
				
				HitsThisFrame++;
				bToggle = false;
			}
			else
			{
				if (State == RoachState::STATE_FALL)
				{
					State = RoachState::STATE_MOVE;
				}
				GravityDirection = -N;
			}
			
			
		}
		else
		{
			//DrawDebugLine(World, AL, AL + Disp * 10.f, FColor::Cyan, true);
			//DrawDebugLine(World, AL, AL - GravityDirection * 10.f, FColor::Orange, true);
			
			if (State != RoachState::STATE_FALL)
			{
				State = RoachState::STATE_FALL;
				Root->PutRigidBodyToSleep();
			}
		}
	}
}

void ACockroach::HitRigidBody(UPARAM(ref)FHitResult HitResult, UPARAM()FVector ImpulseNormal)
{
	//UE_LOG(LogTemp, Warning, TEXT("Hit: %s"), *HitResult.Actor->GetName());
	if (bShouldHit)
	{
		FVector AL = GetActorLocation();
		FVector HL = HitResult.ImpactPoint;
		FVector N = HitResult.ImpactNormal;
		FVector Disp = HL - AL;
		Disp = Disp.GetSafeNormal();

		//DrawDebugPoint(World, HL, 4.f, FColor::Cyan, false, 1.2f * World->DeltaTimeSeconds, ESceneDepthPriorityGroup::SDPG_MAX);

		float Dot = FVector::DotProduct(Disp, GravityDirection);

		if (fabsf(Dot) < 0.99f)
		{
			//Dot = FVector::DotProduct(Disp, MoveDirection);

			//if (Dot > 0.01f)
			//{
				//Root->PutRigidBodyToSleep();
				

				MoveDirection = MoveDirection.GetSafeNormal();

				FVector Add = (MoveDirection - GravityDirection).GetSafeNormal();

				Dot = FVector::DotProduct(Add, N);

				FVector Proj = N * Dot;

				MoveDirection = Add - Proj;
				MoveDirection = MoveDirection.GetSafeNormal();

				float V = Root->GetPhysicsLinearVelocity().Size();

				//FVector V = Root->GetPhysicsLinearVelocity();

				//Add = (V + GravityDirection).GetSafeNormal();
				//Dot = FVector::DotProduct(Add, N);
				//Proj = N * Dot;

				//V = Add - Proj;

				Root->SetPhysicsLinearVelocity(MoveDirection * V);

				//Root->SetPhysicsLinearVelocity(MoveDirection * V);

				bShouldHit = false;
				GravityDirection = -N;
				SetActorLocation(HL, true, nullptr, ETeleportType::None);

				AverageLocation += HL;
				
				/*
				Dot = FVector::DotProduct(N, GravityDirection);
				float Theta = acosf(Dot) * (180.f / PI);

				MoveDirection = MoveDirection.GetSafeNormal();

				FVector Axis = FVector::CrossProduct(N, GravityDirection);
				Axis = Axis.GetSafeNormal();

				MoveDirection = MoveDirection.RotateAngleAxis(Theta, Axis);
				GravityDirection = -N;

				Dot = FVector::DotProduct(N, MoveDirection);

				FVector Proj = N * Dot;

				MoveDirection = MoveDirection - Proj;
				MoveDirection = MoveDirection.GetSafeNormal();

				FVector V = Root->GetPhysicsLinearVelocity();
				V = V.RotateAngleAxis(Theta, Axis);
				Root->SetPhysicsLinearVelocity(V);
				bToggle = false;
				*/
				//Root->WakeRigidBody();
				
			//
		}
	}
	else
	{
		bShouldHit = true;
	}
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

void ACockroach::SetMeshTransform(float DeltaTime)
{
	if (HitsThisFrame != 0)
	{
		AverageLocation /= HitsThisFrame;
	}

	DrawDebugPoint(World, AverageLocation, 4.f, FColor::Magenta, false, 1.1f * DeltaTime, ESceneDepthPriorityGroup::SDPG_MAX);

	
	Mesh->SetWorldLocation(GetActorLocation());
	Mesh->SetWorldRotation(MoveDirection.Rotation());

	FVector UV = Mesh->GetUpVector();
	FVector RotationAxis = Mesh->GetForwardVector();
	FQuat RotQuat = FQuat(RotationAxis, HALF_PI);
	FQuat MyQuat = Mesh->GetComponentQuat();
	FQuat NewQuat = RotQuat * MyQuat;

	SetActorRotation(NewQuat);
	
	LastAverageLocation = AverageLocation;
}