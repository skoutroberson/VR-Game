// Fill out your copyright notice in the Description page of Project Settings.


#include "Roach.h"
#include "Kismet/KismetMathLibrary.h"
#include "Engine/World.h"
#include "DrawDebugHelpers.h"
#include "QuatRotLib.h"
#include "CollisionQueryParams.h"

// Sets default values
ARoach::ARoach()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RoachRoot = CreateDefaultSubobject<USceneComponent>(TEXT("RoachRoot"));
	SetRootComponent(RoachRoot);

	RoachMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RoachMesh"));
	RoachMesh->SetupAttachment(RoachRoot);

	RoachParams.AddIgnoredActor(this);

}

// Called when the game starts or when spawned
void ARoach::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ARoach::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	if (t > 4000)
	{
		if (CheckFront())
		{
			TraverseCorner(DeltaTime, false);
			TraversingUpCorner = true;
			UE_LOG(LogTemp, Warning, TEXT("Traversing corner up"));
		}
		else if (!CheckDown() && !TraversingUpCorner)
		{
			TraverseCorner(DeltaTime, true);
			UE_LOG(LogTemp, Warning, TEXT("Traversing corner down"));
		}
		else
		{
			Swerve(DeltaTime);
			Move(DeltaTime);
			UE_LOG(LogTemp, Warning, TEXT("Moving"));
		}
		ZeroRoll(DeltaTime);
	}
	t++;

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

//	Create random swerves
void ARoach::Swerve(float DeltaTime)
{
	int RY = rand() % 300;

	int i = (RY % 2 == 0) ? 1 : -1;
	
	FRotator DR = FRotator(0, RY * i * DeltaTime, 0);
	FQuat DQ = UQuatRotLib::Euler_To_Quaternion(DR);
	UQuatRotLib::AddActorLocalRotationQuat(this, DQ);
}

//	Keeps the roach flat against the surface it is on
void ARoach::ZeroRoll(float DeltaTime)
{
	//	Might need to raise this position up a lil
	FVector AL = GetActorLocation();
	FVector LL = AL - GetActorRightVector() * RoachWidth;
	FVector RL = AL + GetActorRightVector() * RoachWidth;

	DrawDebugLine(GetWorld(), AL, LL, FColor::Red, false, 2 * GetWorld()->DeltaTimeSeconds);
	DrawDebugLine(GetWorld(), AL, RL, FColor::Blue, false, 2 * GetWorld()->DeltaTimeSeconds);
	
	bool LTrace = GetWorld()->LineTraceSingleByChannel(HitResult, AL, LL, ECollisionChannel::ECC_WorldStatic, RoachParams);
	bool RTrace = GetWorld()->LineTraceSingleByChannel(HitResult, AL, RL, ECollisionChannel::ECC_WorldStatic, RoachParams);
	
	if (LTrace || RTrace)
	{
		FRotator DR;
		if (LTrace)
		{
			// rotate roll right
			DR = FRotator(0, 0, -200 * DeltaTime);
		}
		else if (RTrace)
		{
			//rotate roll left
			DR = FRotator(0, 0, 200 * DeltaTime);
		}
		FQuat DQ = UQuatRotLib::Euler_To_Quaternion(DR);
		UQuatRotLib::AddActorLocalRotationQuat(this, DQ);
	}

}

void ARoach::TraverseCorner(float DeltaTime, bool Down)
{
	int i = -1;
	float RSpeed = 200.f;

	if (Down)
	{
		i = 1;
		RSpeed = Speed;
	}

	FRotator DR = FRotator(RSpeed * i * DeltaTime, 0, 0);
	FQuat DQ = UQuatRotLib::Euler_To_Quaternion(DR);

	UQuatRotLib::AddActorLocalRotationQuat(this, DQ);

	/* Draw forward and up vectors for debugging.	///////////////////////////////////////////
	//SetActorRotation(FMath::Lerp(AR, NR, DT));
	FVector UV = GetActorUpVector();
	UE_LOG(LogTemp, Warning, TEXT("%f %f %f"), UV.X, UV.Y, UV.Z);
	FVector AL = GetActorLocation();
	FVector AFV = GetActorForwardVector();
	DrawDebugLine(GetWorld(), AL, AL + GetActorUpVector() * 16, FColor::Green, false, DT * 2);
	DrawDebugLine(GetWorld(), AL, AL + AFV * 16, FColor::Magenta, false, DT * 2);
	//////////////////////////////////////////////////////////////////////////////////////////
	*/
	
}

bool ARoach::CheckDown()
{
	FVector AL = GetActorLocation();
	FVector DV = -GetActorUpVector();

	DrawDebugLine(GetWorld(), AL, AL + DV * 2, FColor::Magenta, false, 2 * GetWorld()->DeltaTimeSeconds);

	bool Trace = GetWorld()->LineTraceSingleByChannel(
		HitResult, AL + -DV * 2, AL + DV * 4, ECollisionChannel::ECC_WorldStatic, RoachParams);

	return Trace;
}

bool ARoach::CheckFront()
{

	FVector AL = GetActorLocation();
	FVector AFV = GetActorForwardVector();
	bool Trace = GetWorld()->LineTraceSingleByChannel(
		HitResult, AL + AFV * 5, AL + AFV * 13, ECollisionChannel::ECC_WorldStatic, RoachParams);

	return Trace;

}