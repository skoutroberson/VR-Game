// Fill out your copyright notice in the Description page of Project Settings.


#include "Roach.h"
#include "Kismet/KismetMathLibrary.h"
#include "Engine/World.h"
#include "DrawDebugHelpers.h"
#include "QuatRotLib.h"
#include "CollisionQueryParams.h"
#include "TimerManager.h"
#include "GameFramework/PlayerController.h"
#include "Kismet/GameplayStatics.h"
#include "VRCharacter.h"

// Sets default values
ARoach::ARoach()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RoachRoot = CreateDefaultSubobject<USceneComponent>(TEXT("RoachRoot"));
	SetRootComponent(RoachRoot);

	RoachParams.AddIgnoredActor(this);
	ComputeLaziness();
	NewSpeed();
	
}

// Called when the game starts or when spawned
void ARoach::BeginPlay()
{
	Super::BeginPlay();

	ReachedGoal();
	UE_LOG(LogTemp, Warning, TEXT("%s - %d"), *GetFName().ToString(), Laziness);
	
	GetWorld()->GetTimerManager().SetTimer(GoalTimerHandle, this, &ARoach::ReachedGoal, GoalTimerRate);

	Player = UGameplayStatics::GetActorOfClass(GetWorld(), AVRCharacter::StaticClass());
}

// Called every frame
void ARoach::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	//	If front/down traces detect a corner, don't move, flee, or swerve, just traverse the corner
	
	if (MoveToGoal || RotateToGoal)
	{
		MoveAndRotateToGoal(DeltaTime);
	}
	else if (IsFalling)
	{
		Fall(DeltaTime);
		//UE_LOG(LogTemp, Warning, TEXT("FALLING!!!"));
	}
	else
	{
		if (!TraversingDownCorner && CheckFront())
		{
			TraversingUpCorner = true;
			//UE_LOG(LogTemp, Warning, TEXT("UP UP UP UP UP"));
		}
		else if (!TraversingUpCorner && !CheckDown())
		{
			TraversingDownCorner = true;
			//UE_LOG(LogTemp, Warning, TEXT("DOWN DOWN DOWN DOWN DOWN"));
		}
		else
		{
			Swerve(DeltaTime);
			Move(DeltaTime);
			FleePlayer(DeltaTime);
			//UE_LOG(LogTemp, Warning, TEXT("Moving"));
		}
		//ZeroRoll(DeltaTime);
	}

}

void ARoach::MoveAndRotateToGoal(float DeltaTime)
{
	FVector CurrentLocation = GetActorLocation();
	FQuat CurrentRotation = GetActorQuat();

	if (CurrentLocation.Equals(GoalLocation, 0.001f))
	{
		MoveToGoal = false;
	}
	else
	{
		// Interp to goal
		SetActorLocation(UKismetMathLibrary::VInterpTo_Constant(CurrentLocation, GoalLocation, DeltaTime, 54.f));
	}

	if (CurrentRotation.Equals(GoalRotation, 0.001f))
	{
		RotateToGoal = false;
	}
	else
	{
		// Lerp to goal
		SetActorRotation(FMath::Lerp(CurrentRotation, GoalRotation, 26.f * DeltaTime));
	}

	if (!MoveToGoal && !RotateToGoal)
	{
		GetWorldTimerManager().UnPauseTimer(GoalTimerHandle);
		GetWorldTimerManager().UnPauseTimer(WaitTimerHandle);
	}

}

//	Make the roach fall until the fall trace hits a static object
void ARoach::Fall(float DeltaTime)
{
	FallTime += DeltaTime;
	FVector RoachLocation = GetActorLocation();
	// Up Down Vector
	FVector UDVector = FVector(0, 0, FallTime * -15.f);

	bool FallTrace = GetWorld()->LineTraceSingleByChannel(HitResult, RoachLocation,
		RoachLocation + UDVector, ECollisionChannel::ECC_WorldStatic, RoachParams);

	if (FallTrace)
	{
		IsFalling = false;
		SetActorLocation(HitResult.ImpactPoint);
		RotateToNormal(HitResult.ImpactNormal);
		FallTime = 0;
		GetWorldTimerManager().UnPauseTimer(GoalTimerHandle);
		GetWorldTimerManager().UnPauseTimer(WaitTimerHandle);
	}
	else
	{

		float NewZ = RoachLocation.Z + FallTime * -7.8f;
		RoachLocation.Z = NewZ;

		SetActorLocation(RoachLocation);
	}

}

void ARoach::Move(float DeltaTime)
{
	SetActorLocation(UKismetMathLibrary::VInterpTo_Constant(
		GetActorLocation(),
		GetActorLocation() + GetActorForwardVector() * 10,
		DeltaTime,
		Speed
	));

	TraversingUpCorner = false;
	TraversingDownCorner = false;

}

void ARoach::Move(float DeltaTime, float OSpeed)
{
	SetActorLocation(UKismetMathLibrary::VInterpTo_Constant(
		GetActorLocation(),
		GetActorLocation() + GetActorForwardVector() * 10,
		DeltaTime,
		OSpeed
	));

	TraversingUpCorner = false;
	TraversingDownCorner = false;

}

void ARoach::FleePlayer(float DeltaTime)
{
	FVector PV = Player->GetActorForwardVector();
	FVector RV = GetActorForwardVector();
	float DP = FVector::DotProduct(PV, RV);

	if (DP < 0)
	{
		FRotator DR = FRotator(0, DeltaYaw * 10 * DeltaTime, 0);
		FQuat DQ = UQuatRotLib::Euler_To_Quaternion(DR);
		UQuatRotLib::AddActorLocalRotationQuat(this, DQ);
	}

}

//	Create random swerves
void ARoach::Swerve(float DeltaTime)
{
	FRotator DR = FRotator(0, DeltaYaw * 10 * DeltaTime, 0);
	FQuat DQ = UQuatRotLib::Euler_To_Quaternion(DR);
	UQuatRotLib::AddActorLocalRotationQuat(this, DQ);

	/*
	int RY = rand() % 300;
	int i = (RY % 2 == 0) ? 1 : -1;
	FRotator DR = FRotator(0, RY * i * DeltaTime, 0);
	FQuat DQ = UQuatRotLib::Euler_To_Quaternion(DR);
	UQuatRotLib::AddActorLocalRotationQuat(this, DQ);
	*/
}

void ARoach::NewDeltaYaw()
{
	int RY = rand() % 30 + 1;
	int i = (RY % 2 == 0) ? 1 : -1;
	DeltaYaw = RY * i;
}

void ARoach::NewSpeed()
{
	Speed = FMath::FRandRange(30.f, 100.f);
	//Speed = 100.f;
}


void ARoach::ComputeLaziness()
{
	int i = FMath::RandRange(0, 1);
	int j = FMath::RandRange(0, 1);
	Laziness = i + j + 1;
}

bool ARoach::ShouldWait()
{
	int i = rand() % Laziness;
	return (i == 0) ? true : false;
}

void ARoach::SetGoalTimerRate()
{
	GoalTimerRate = fabs(3.f / DeltaYaw);
	GoalTimerRate = (GoalTimerRate > 3.f) ? 3.f : GoalTimerRate;
}

void ARoach::ReachedGoal()
{
	// Should wait?
	// New Speed
	// New DeltaYaw
	//UE_LOG(LogTemp, Warning, TEXT("%s - %f"), *GetFName().ToString(), GoalTimerRate);

	NewDeltaYaw();
	SetGoalTimerRate();
	GetWorldTimerManager().ClearTimer(GoalTimerHandle);
	GetWorld()->GetTimerManager().SetTimer(GoalTimerHandle, this, &ARoach::ReachedGoal, GoalTimerRate);

	if (ShouldWait() && !TraversingDownCorner && !TraversingUpCorner)
	{
		GetWorldTimerManager().PauseTimer(GoalTimerHandle);
		SetActorTickEnabled(false);
		float WaitTime = FMath::FRandRange(10.f, 16.f) / (Laziness * Laziness);
		//UE_LOG(LogTemp, Warning, TEXT("%s waiting! for %f"), *GetFName().ToString(), WaitTime);
		GetWorldTimerManager().SetTimer(WaitTimerHandle, this, &ARoach::StopWait, WaitTime);
		NewSpeed();
	}

}

void ARoach::StopWait()
{
	GetWorldTimerManager().ClearTimer(WaitTimerHandle);
	GetWorldTimerManager().UnPauseTimer(GoalTimerHandle);
	//UE_LOG(LogTemp, Warning, TEXT("%s stopped waiting!"), *GetFName().ToString());
	SetActorTickEnabled(true);
}

//	Keeps the roach flat against the surface it is on
void ARoach::ZeroRoll(float DeltaTime)
{
	//	Might need to raise this position up a lil
	FVector AL = GetActorLocation();
	FVector UV = GetActorUpVector();
	FVector LL = AL - GetActorRightVector() * RoachWidth + UV;
	FVector RL = AL + GetActorRightVector() * RoachWidth + UV;

	//DrawDebugLine(GetWorld(), AL + UV * 2, LL, FColor::Red, false, 2 * GetWorld()->DeltaTimeSeconds);
	//DrawDebugLine(GetWorld(), AL + UV * 2, RL, FColor::Blue, false, 2 * GetWorld()->DeltaTimeSeconds);
	
	bool LTrace = GetWorld()->LineTraceSingleByChannel(HitResult, AL + UV * 2, LL, ECollisionChannel::ECC_WorldStatic, RoachParams);
	bool RTrace = GetWorld()->LineTraceSingleByChannel(HitResult, AL + UV * 2, RL, ECollisionChannel::ECC_WorldStatic, RoachParams);
	
	if (LTrace || RTrace)
	{
		FRotator DR;
		if (LTrace)
		{
			// rotate roll right
			DR = FRotator(0, 0, -300 * DeltaTime);
		}
		else if (RTrace)
		{
			//rotate roll left
			DR = FRotator(0, 0, 300 * DeltaTime);
		}
		FQuat DQ = UQuatRotLib::Euler_To_Quaternion(DR);
		UQuatRotLib::AddActorLocalRotationQuat(this, DQ);
	}

}

void ARoach::TraverseCorner(float DeltaTime, bool Down)
{
	int i = -1;
	float RSpeed = 60.f;

	if (Down)
	{
		i = 1;
		//RSpeed = Speed;
	}

	FRotator DR = FRotator(90.f * i, 0, 0);
	FQuat DQ = UQuatRotLib::Euler_To_Quaternion(DR);

	UQuatRotLib::AddActorLocalRotationQuat(this, DQ);

	/*//Draw forward and up vectors for debugging.	///////////////////////////////////////////
	//SetActorRotation(FMath::Lerp(AR, NR, DT));
	FVector UV = GetActorUpVector();
	UE_LOG(LogTemp, Warning, TEXT("%f %f %f"), UV.X, UV.Y, UV.Z);
	FVector AL = GetActorLocation();
	FVector AFV = GetActorForwardVector();
	//DrawDebugLine(GetWorld(), AL, AL + GetActorUpVector() * 16, FColor::Green, false, DeltaTime * 2);
	//DrawDebugLine(GetWorld(), AL, AL + AFV * 16, FColor::Magenta, false, DeltaTime * 2);
	//////////////////////////////////////////////////////////////////////////////////////////
	*/
	
}

void ARoach::MoveDown(float DeltaTime) 
{
	
	SetActorLocation(HitResult.Location);
	//DrawDebugPoint(GetWorld(), HitResult.Location, 4.f, FColor::Emerald, true);

}

bool ARoach::CheckDown()
{
	FVector AL = GetActorLocation();
	FVector DV = -GetActorUpVector() * 2.f;

	//DrawDebugLine(GetWorld(), AL + -DV, AL + DV, FColor::Magenta, false, 2 * GetWorld()->DeltaTimeSeconds);

	bool Trace = GetWorld()->LineTraceSingleByChannel(
		HitResult, AL + -DV, AL + DV * 1.4f, ECollisionChannel::ECC_WorldStatic, RoachParams);
	
	if (Trace)
	{
		//	Move and Rotate actor for small geometry changes
		FVector DeltaVector = HitResult.ImpactPoint - AL;
		float TraceLength = DeltaVector.Size();
		//	Only rotate roach with normal and move to impact point when the surface plane changes

		if (TraceLength < CurrentTraceLength - 0.001f || TraceLength > CurrentTraceLength + 0.001f)
		{
			SetActorLocation(HitResult.ImpactPoint);
			RotateToNormal(HitResult.ImpactNormal);

			CurrentTraceLength = TraceLength;
		}
	}
	else
	{
		// Traverse down corner

		FHitResult DownHitResult;
		FVector DownTraceDirection = -GetActorForwardVector() * 2;
		FVector RotateAxis = GetActorUpVector();
		
		// I feel like this trace should fail sometimes but it doesn't on my testing wall so we shall see...
		// I would think I'd have to do 4 traces like my comment above states.

		bool DownTrace = GetWorld()->LineTraceSingleByChannel(
			DownHitResult, AL + DV, AL + DV + DownTraceDirection, ECollisionChannel::ECC_WorldStatic, RoachParams);
		
		
			//UE_LOG(LogTemp, Warning, TEXT("%s HAS ESCAPED!!!!!!!"), *GetFName().ToString());
			//DrawDebugLine(GetWorld(), AL + DV, AL + DV + DownTraceDirection, FColor::Emerald, true, -1.f, ESceneDepthPriorityGroup::SDPG_Foreground)
		
		/*
		UE_LOG(LogTemp, Warning, TEXT("%s HAS ACTUALLY ESCAPED WTFFFF!!!!!!!"), *GetFName().ToString());
		DrawDebugLine(GetWorld(), AL + DV, AL + DV + DownTraceDirection, FColor::Blue, true, -1.f);
		DrawDebugLine(GetWorld(), AL, AL + RotateAxis, FColor::Orange, true, -1.f);
		DrawDebugPoint(GetWorld(), AL + DV, 6.f, FColor::Cyan, true, -1.f, ESceneDepthPriorityGroup::SDPG_MAX);
		DrawDebugPoint(GetWorld(), AL, 2.f, FColor::Orange, true, -1.f, ESceneDepthPriorityGroup::SDPG_MAX);
		*/	

		if (DownTrace)
		{
			SetGoalLocation(DownHitResult.ImpactPoint);
			SetGoalRotation(DownHitResult.ImpactNormal);
			GetWorldTimerManager().PauseTimer(WaitTimerHandle);
			GetWorldTimerManager().PauseTimer(GoalTimerHandle);

			//RotateToNormal(DownHitResult.ImpactNormal);
			//SetActorLocation(DownHitResult.ImpactPoint);
		}
		else
		{
			IsFalling = true;
			GetWorldTimerManager().PauseTimer(WaitTimerHandle);
			GetWorldTimerManager().PauseTimer(GoalTimerHandle);
		}

		//DrawDebugPoint(GetWorld(), DownHitResult.ImpactPoint, 20.f, FColor::Black, true);
	}

	return Trace;
}

void ARoach::SetGoalLocation(FVector Location)
{
	GoalLocation = Location;
	MoveToGoal = true;
}

void ARoach::SetGoalRotation(FVector_NetQuantizeNormal NormalVector)
{
	FVector UpVector = GetActorUpVector();
	FVector RotationAxis = FVector::CrossProduct(UpVector, NormalVector);
	RotationAxis.Normalize();
	float DotProduct = FVector::DotProduct(UpVector, NormalVector);
	float RotationAngle = acosf(DotProduct);
	FQuat RotQuat = FQuat(RotationAxis, RotationAngle);
	FQuat MyQuat = GetActorQuat();
	FQuat NewQuat = RotQuat * MyQuat;

	GoalRotation = NewQuat;
	RotateToGoal = true;
}

bool ARoach::CheckFront()
{
	FVector AL = GetActorLocation();
	FVector AFV = GetActorForwardVector();
	FVector UV = GetActorUpVector();
	bool Trace = GetWorld()->LineTraceSingleByChannel(
		HitResult, AL + UV, AL + UV + AFV * 6.f, ECollisionChannel::ECC_WorldStatic, RoachParams);
	//DrawDebugLine(GetWorld(), AL + UV, AL + UV + AFV * 6.f, FColor::Magenta, false, GetWorld()->DeltaTimeSeconds * 2);

	if (Trace)
	{
		FHitResult HitResult2;
		float Dot = FVector::DotProduct(HitResult.ImpactNormal, AFV);
		Dot *= -1.f;

		FVector Loc = HitResult.ImpactPoint + UV * 6 * Dot;

		bool Trace2 = GetWorld()->LineTraceSingleByChannel(
			HitResult2, AL + UV, Loc, ECollisionChannel::ECC_WorldStatic, RoachParams);

		if (Trace2)
		{
			SetGoalLocation(Loc);
			SetGoalRotation(HitResult.ImpactNormal);
		}
		else
		{
			//FVector Loc2 = HitResult.ImpactPoint + UV * 2 * Dot;
			SetGoalLocation(HitResult.ImpactPoint);
			SetGoalRotation(HitResult.ImpactNormal);
		}

		GetWorldTimerManager().PauseTimer(WaitTimerHandle);
		GetWorldTimerManager().PauseTimer(GoalTimerHandle);

		//RotateToNormal(HitResult.ImpactNormal);
		//SetActorLocation(HitResult.Location);
	}

	return Trace;

}

void ARoach::RotateToNormal(FVector_NetQuantizeNormal NormalVector)
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