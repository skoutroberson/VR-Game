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
	
	if (CheckFront())
	{
		TraverseCorner(DeltaTime, false);
		TraversingUpCorner = true;
		//UE_LOG(LogTemp, Warning, TEXT("UP UP UP UP UP"));
	}
	else if (!TraversingUpCorner && !CheckDown())
	{
		TraverseCorner(DeltaTime, true);
		TraversingDownCorner = true;
		//UE_LOG(LogTemp, Warning, TEXT("DOWN DOWN DOWN DOWN DOWN"));
	}
	else
	{
		/*
		if (!TraversingUpCorner && !TraversingDownCorner)
		{
			MoveDown(DeltaTime);
		}
		*/
		Swerve(DeltaTime);
		Move(DeltaTime);
		
		//FleePlayer(DeltaTime);
		//UE_LOG(LogTemp, Warning, TEXT("Moving"));
	}
	ZeroRoll(DeltaTime);

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

void ARoach::FleePlayer(float DeltaTime)
{
	FVector PV = Player->GetActorForwardVector();
	FVector RV = GetActorForwardVector();
	float DP = FVector::DotProduct(PV, RV);

	if (DP > 0)
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
	Speed = FMath::FRandRange(40.f, 110.f);
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
	float RSpeed = 260.f;

	if (Down)
	{
		i = 1;
		//RSpeed = Speed;
	}

	FRotator DR = FRotator(RSpeed * i * DeltaTime, 0, 0);
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
	FVector AL = GetActorLocation();
	FVector DV = -GetActorUpVector();

	//DrawDebugLine(GetWorld(), AL + -DV * 3.f, AL + DV, FColor::Purple, false, 2 * GetWorld()->DeltaTimeSeconds);

	bool Trace = GetWorld()->LineTraceSingleByChannel(
		HitResult, AL + -DV * 3.f, AL + DV, ECollisionChannel::ECC_WorldStatic, RoachParams);

	if (Trace)
	{
		SetActorLocation(UKismetMathLibrary::VInterpTo_Constant(AL, HitResult.Location, DeltaTime, 100.f));
	}

}

bool ARoach::CheckDown()
{
	FVector AL = GetActorLocation();
	FVector DV = -GetActorUpVector() * 1.2f;

	//DrawDebugLine(GetWorld(), AL + -DV, AL + DV, FColor::Magenta, false, 2 * GetWorld()->DeltaTimeSeconds);

	bool Trace = GetWorld()->LineTraceSingleByChannel(
		HitResult, AL + 2 * -DV, AL + DV, ECollisionChannel::ECC_WorldStatic, RoachParams);

	return Trace;
}

bool ARoach::CheckFront()
{

	FVector AL = GetActorLocation();
	FVector AFV = GetActorForwardVector() * 3.f;
	FVector UV = GetActorUpVector();
	bool Trace = GetWorld()->LineTraceSingleByChannel(
		HitResult, AL + UV + AFV, AL + UV + AFV * 3.f, ECollisionChannel::ECC_WorldStatic, RoachParams);
	//DrawDebugLine(GetWorld(), AL + UV + AFV, AL + UV + AFV * 2.f, FColor::Magenta, false, GetWorld()->DeltaTimeSeconds * 2);

	return Trace;

}