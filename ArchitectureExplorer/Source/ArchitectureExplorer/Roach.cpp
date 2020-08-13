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
#include "Components/CapsuleComponent.h"
#include "Components/BoxComponent.h"

// Sets default values
ARoach::ARoach()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RoachRoot = CreateDefaultSubobject<USceneComponent>(TEXT("RoachRoot"));
	SetRootComponent(RoachRoot);

	RoachParams.AddIgnoredActor(this);
	TArray<AActor*> FoundRoaches;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ARoach::StaticClass(), FoundRoaches);
	RoachParams.AddIgnoredActors(FoundRoaches);
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

/*
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
			UE_LOG(LogTemp, Warning, TEXT("FALLING!!!"));
		}
		else
		{
			if (!TraversingDownCorner && CheckFront())
			{
				TraversingUpCorner = true;
				UE_LOG(LogTemp, Warning, TEXT("UP UP UP UP UP"));
			}
			else if (!TraversingUpCorner && !CheckDown())
			{
				TraversingDownCorner = true;
				UE_LOG(LogTemp, Warning, TEXT("DOWN DOWN DOWN DOWN DOWN"));
			}
			else
			{
				
				Swerve(DeltaTime);
				FleePlayer(DeltaTime);
				Move(DeltaTime);
				UE_LOG(LogTemp, Warning, TEXT("Moving"));
			}
			//ZeroRoll(DeltaTime);
		}
	
}


// I might need to go state machine here. But if this works fine then I won't have time to change it.
void ARoach::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (RotateToGoal)
	{
		RotateToGoalRot(DeltaTime);
		UE_LOG(LogTemp, Warning, TEXT("Rotating to Goal"));
	}
	if (MoveToGoal)
	{
		MoveToGoalLoc(DeltaTime);
		UE_LOG(LogTemp, Warning, TEXT("Moving to Goal"));
	}
	if (CheckSideCollision())
	{
		GoalVec = GetActorLocation() + MovementDirection;
		UE_LOG(LogTemp, Warning, TEXT("COLLIDED"));
	}
	else if(!RotateToGoal && !MoveToGoal)
	{
		Move(DeltaTime);
		UE_LOG(LogTemp, Warning, TEXT("Moving"));
	}

	//Move(MovementDirection, DeltaTime);
	
}
*/

void ARoach::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	Move(DeltaTime);

}

void ARoach::MoveToGoalLoc(float DeltaTime)
{
	DrawDebugPoint(GetWorld(), GoalLocation, 10.f, FColor::Cyan, false, 2 * DeltaTime);

	FVector CurrentLocation = GetActorLocation();
	if (CurrentLocation.Equals(GoalLocation, 0.1f))
	{
		MoveToGoal = false;
		UE_LOG(LogTemp, Warning, TEXT("DONE LOC"));
	}
	else
	{
		SetActorLocation(UKismetMathLibrary::VInterpTo_Constant(CurrentLocation, GoalLocation, DeltaTime, Speed));
	}
}

void ARoach::RotateToGoalRot(float DeltaTime)
{
	FQuat CurrentRotation = GetActorQuat();
	if (CurrentRotation.Equals(GoalQuat))
	{
		UE_LOG(LogTemp, Warning, TEXT("DONE ROT"));
		RotateToGoal = false;
	}
	else
	{
		// Lerp to goal
		SetActorRotation(FMath::Lerp(CurrentRotation, GoalQuat, RotSpeed * DeltaTime));
	}
}

void ARoach::CalcGoalQuat(FVector GoalVec)
{
	FVector AFV = GetActorForwardVector();
	FVector RotationAxis = GetActorUpVector();
	float DotProduct = FVector::DotProduct(AFV, GoalVec);
	float RotationAngle = acosf(DotProduct);
	FQuat RotQuat = FQuat(RotationAxis, RotationAngle);
	FQuat MyQuat = GetActorQuat();
	GoalQuat = RotQuat * MyQuat;
}

void ARoach::Move(FVector Direction, float DeltaTime)
{
	SetActorLocation(UKismetMathLibrary::VInterpTo_Constant(
		GetActorLocation(),
		GetActorLocation() + Direction,
		DeltaTime,
		4.f));
}

void ARoach::Turn(float DeltaTime, bool Right)
{
	int i = (Right) ? 1 : -1;

	FRotator DR = FRotator(0, 100 * DeltaTime * i, 0);
	FQuat DQ = UQuatRotLib::Euler_To_Quaternion(DR);
	UQuatRotLib::AddActorLocalRotationQuat(this, DQ);
}

bool ARoach::CheckSideCollision()
{
	FVector UV = GetActorUpVector();
	FVector AL = GetActorLocation() + UV;
	FVector AFV = GetActorForwardVector() * 3.f;
	FVector BV = -AFV * 1.4f;
	FVector RV = GetActorRightVector() * 2.4f;
	

	bool LeftTrace = GetWorld()->LineTraceSingleByChannel(
		LeftHitResult, AL - RV + BV, AL + AFV, ECollisionChannel::ECC_WorldStatic, RoachParams);

	bool RightTrace = GetWorld()->LineTraceSingleByChannel(
		RightHitResult, AL + RV + BV, AL + AFV, ECollisionChannel::ECC_WorldStatic, RoachParams);

	DrawDebugLine(GetWorld(), AL + AFV, AL - RV + BV, FColor::Red, false, GetWorld()->DeltaTimeSeconds * 2.f);
	DrawDebugLine(GetWorld(), AL + AFV, AL + RV + BV, FColor::Green, false, GetWorld()->DeltaTimeSeconds * 2.f);
	
	if (LeftTrace)
	{
		UE_LOG(LogTemp, Warning, TEXT("Left trace collided"));
		MovementDirection = AL - LeftHitResult.ImpactPoint;
		MovementDirection.Z = 0;

		GoalLocation = AL + MovementDirection;
		GoalLocation.Z = AL.Z;

		RotateToGoal = true;
		MoveToGoal = true;

		float IP = FVector::DotProduct(GetActorRightVector(), LeftHitResult.ImpactNormal);
		
		if (IP > 0)
		{
			UE_LOG(LogTemp, Warning, TEXT("TURN LEFT"));
			CalcGoalQuat(GetActorForwardVector().RotateAngleAxis(10.f, GetActorUpVector()));
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("TURN RIGHT"));
			CalcGoalQuat(GetActorForwardVector().RotateAngleAxis(-10.f, GetActorUpVector()));
		}

		RotateToNormal(LeftHitResult.ImpactNormal);
		SetActorLocation(LeftHitResult.ImpactPoint);

		return true;
	}
	else if (RightTrace)
	{
		UE_LOG(LogTemp, Warning, TEXT("Right trace collided"));
		MovementDirection = AL - RightHitResult.ImpactPoint;
		MovementDirection.Z = 0;

		GoalLocation = AL + MovementDirection;
		GoalLocation.Z = AL.Z;

		RotateToGoal = true;
		MoveToGoal = true;

		float IP = FVector::DotProduct(GetActorRightVector(), RightHitResult.ImpactNormal);
		
		if (IP > 0)
		{
			UE_LOG(LogTemp, Warning, TEXT("TURN LEFT"));
			CalcGoalQuat(GetActorForwardVector().RotateAngleAxis(10.f, GetActorUpVector()));
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("TURN RIGHT"));
			CalcGoalQuat(GetActorForwardVector().RotateAngleAxis(-10.f, GetActorUpVector()));
		}

		RotateToNormal(RightHitResult.ImpactNormal);
		SetActorLocation(RightHitResult.ImpactPoint);
		
		return true;
	}
	
	return false;

}

float ARoach::AngleBetweenVectors(FVector A, FVector B)
{
	return acosf(FVector::DotProduct(A, B));
}


void ARoach::UnStick(float DeltaTime)
{
	//FVector AL = GetActorLocation();
	//FVector UN = FrontHit.ImpactNormal.RotateAngleAxis(90.f, FVector(0, 0, 1));
	//float Dot = FVector::DotProduct(AL, UN);
	//UE_LOG(LogTemp, Warning, TEXT("%f"), FVector::DotProduct(AL, UN));
	//int i = (Dot > 0) ? 1 : -1;
	FVector AFV = GetActorForwardVector();
	FVector NV = FrontHit.ImpactNormal;

	//FPlane ImpactPlane = UKismetMathLibrary::MakePlaneFromPointAndNormal(FrontHit.ImpactPoint, RV);

	FRotator DR = FRotator(0, 300.f * DeltaTime, 0);
	FQuat DQ = UQuatRotLib::Euler_To_Quaternion(DR);
	UQuatRotLib::AddActorLocalRotationQuat(this, DQ);
}

void ARoach::MoveAndRotateToGoal(float DeltaTime)
{
	FVector CurrentLocation = GetActorLocation();
	FQuat CurrentRotation = GetActorQuat();

	if (CurrentLocation.Equals(GoalLocation, 0.01f))
	{
		MoveToGoal = false;
	}
	else
	{
		DrawDebugPoint(GetWorld(), GoalLocation, 10.f, FColor::Red, false, 2 * DeltaTime);
		// Interp to goal
		SetActorLocation(UKismetMathLibrary::VInterpTo_Constant(CurrentLocation, GoalLocation, DeltaTime, 60.f));
		UE_LOG(LogTemp, Warning, TEXT("Moving to Goal!!!"));
	}

	if (CurrentRotation.Equals(GoalRotation, 0.01f))
	{
		RotateToGoal = false;
	}
	else
	{
		// Lerp to goal
		SetActorRotation(FMath::Lerp(CurrentRotation, GoalRotation, 18.f * DeltaTime));
		UE_LOG(LogTemp, Warning, TEXT("Rotating to Goal!!!"));
	}

	if (!MoveToGoal && !RotateToGoal)
	{
		//GetWorldTimerManager().UnPauseTimer(GoalTimerHandle);
		//GetWorldTimerManager().UnPauseTimer(WaitTimerHandle);
	}

}

//	Make the roach fall until the fall trace hits a static object
void ARoach::Fall(float DeltaTime)
{
	FallTime += DeltaTime;
	FVector RoachLocation = GetActorLocation();
	// Up Down Vector
	FVector UDVector = FVector(0, 0, FallTime * -50.f);

	bool FallTrace = GetWorld()->LineTraceSingleByChannel(HitResult, RoachLocation - UDVector,
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
	), true);

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
	Speed = FMath::FRandRange(60.f, 100.f);
	//Speed = 100.f;
}


void ARoach::ComputeLaziness()
{
	int i = FMath::RandRange(0, 1);
	int j = FMath::RandRange(0, 1);
	//Laziness = i + j + 1;
	Laziness = 8;
	/*
	if (i)
	{
		if (j)
		{
			Laziness = 2;
		}
	}
	else
	{
		Laziness = 1;
	}
	*/
}

bool ARoach::ShouldWait()
{
	int i = rand() % Laziness;
	return (i == 0) ? true : false;
}

void ARoach::SetGoalTimerRate()
{
	GoalTimerRate = fabs(2.f / DeltaYaw);
	GoalTimerRate = (GoalTimerRate > 2.f) ? 2.f : GoalTimerRate;
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
	FVector DV = -GetActorUpVector();

	//DrawDebugLine(GetWorld(), AL + -DV, AL + DV, FColor::Magenta, false, 2 * GetWorld()->DeltaTimeSeconds);

	bool Trace = GetWorld()->LineTraceSingleByChannel(
		HitResult, AL - DV * 0.4f, AL + DV * 3.f, ECollisionChannel::ECC_WorldStatic, RoachParams);
	
	if (Trace)
	{
		//	Move and Rotate actor for small geometry changes
		FVector DeltaVector = HitResult.ImpactPoint - AL;
		float TraceLength = DeltaVector.Size();
		//	Only rotate roach with normal and move to impact point when the surface plane changes

		if (TraceLength < CurrentTraceLength - 0.001f || TraceLength > CurrentTraceLength + 0.001f)
		{
			SetActorLocation(HitResult.ImpactPoint, true);
			RotateToNormal(HitResult.ImpactNormal);

			//SetGoalLocation(HitResult.ImpactPoint);
			//SetGoalRotation(HitResult.ImpactNormal);

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
			//GetWorldTimerManager().PauseTimer(WaitTimerHandle);
			//GetWorldTimerManager().PauseTimer(GoalTimerHandle);

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
		FrontHit, AL + UV - AFV, AL + UV + AFV * 6.f, ECollisionChannel::ECC_WorldStatic, RoachParams);
	//DrawDebugLine(GetWorld(), AL + UV, AL + UV + AFV * 6.f, FColor::Magenta, false, GetWorld()->DeltaTimeSeconds * 2);

	if (Trace)
	{
		FHitResult HitResult2;
		float Dot = FVector::DotProduct(FrontHit.ImpactNormal, AFV);
		Dot *= -1.f;

		FVector Loc = FrontHit.ImpactPoint + UV * 6 * Dot;

		bool Trace2 = GetWorld()->LineTraceSingleByChannel(
			HitResult2, FrontHit.ImpactPoint - AFV * 0.2f, Loc - AFV * 0.2f, ECollisionChannel::ECC_WorldStatic, RoachParams);

		//DrawDebugLine(GetWorld(), HitResult.ImpactPoint - AFV, Loc - AFV, FColor::Red, true);
		//DrawDebugPoint(GetWorld(), HitResult.ImpactPoint, 6.f, FColor::Blue, true);

		//UE_LOG(LogTemp, Warning, TEXT("%d"), Trace2);

		if (!Trace2)
		{
			bool Trace3 = GetWorld()->LineTraceSingleByChannel(
				HitResult2, Loc, Loc + AFV * 0.2f, ECollisionChannel::ECC_WorldStatic, RoachParams);

			if (Trace3)
			{
				SetGoalLocation(Loc);
				SetGoalRotation(FrontHit.ImpactNormal);
			}
			else
			{
				Stuck = true;
				return false;
			}
			
		}
		else
		{
			// Set Goal Rotation to be sideways if side trace hits, if not, then fall

			Stuck = true;
			return false;

			//SetGoalLocation(HitResult.ImpactPoint);
			//SetGoalRotation(HitResult.ImpactNormal);

			//IsFalling = true;
			//GetWorldTimerManager().PauseTimer(WaitTimerHandle);
			//GetWorldTimerManager().PauseTimer(GoalTimerHandle);
		}

		//GetWorldTimerManager().PauseTimer(WaitTimerHandle);
		//GetWorldTimerManager().PauseTimer(GoalTimerHandle);

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