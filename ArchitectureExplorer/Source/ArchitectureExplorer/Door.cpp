// Fill out your copyright notice in the Description page of Project Settings.


#include "Door.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/PlayerController.h"
#include "MotionControllerComponent.h"
#include "UObject/NameTypes.h"
#include "DrawDebugHelpers.h"
#include "Components/StaticMeshComponent.h"
#include "HandController.h"
#include "Kismet/KismetMathLibrary.h"

// Sets default values
ADoor::ADoor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	DoorRoot = CreateDefaultSubobject<USceneComponent>(TEXT("DoorRoot"));
	SetRootComponent(DoorRoot);
}

// Called when the game starts or when spawned
void ADoor::BeginPlay()
{
	Super::BeginPlay();

	TArray<UStaticMeshComponent*> StaticComps;
	GetComponents<UStaticMeshComponent>(StaticComps);
	DoorMesh = StaticComps[0];

	DoorHinge = GetRootComponent()->GetChildComponent(0);

	FVector LV = -DoorHinge->GetRightVector();
	MinRotation = CalcGoalQuat(DoorHinge->GetForwardVector());
	MaxRotation = LV.ToOrientationQuat();
	//MaxRotation = LV.RotateAngleAxis(3.f, DoorHinge->GetUpVector()).ToOrientationQuat();
	
	//DrawDebugLine(GetWorld(), DoorHinge->GetComponentLocation(), DoorHinge->GetComponentLocation() + DoorHinge->GetForwardVector() * 100.f, FColor::Green, true);
	//DrawDebugLine(GetWorld(), DoorHinge->GetComponentLocation(), DoorHinge->GetComponentLocation() + DoorHinge->GetForwardVector().RotateAngleAxis(90.f, DoorHinge->GetUpVector()) * 100.f, FColor::Red, true);
}
// Called every frame
void ADoor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (bIsBeingUsed)
	{
		UseDoor(DeltaTime);
	}
	else if (bSwing)
	{
		Swing(DeltaTime);
	}

}

void ADoor::Swing(float DeltaTime)
{
	UE_LOG(LogTemp, Warning, TEXT("SWING: %f"), SwingVelocity);

	FQuat DHQ = DoorHinge->GetComponentQuat();
	FQuat DQ = FQuat(DoorHinge->GetUpVector(), SwingVelocity * DeltaTime);
	FQuat NewQuat = DHQ * DQ;

	float MinDistance = UKismetMathLibrary::Quat_AngularDistance(NewQuat, MinRotation);
	float MaxDistance = UKismetMathLibrary::Quat_AngularDistance(NewQuat, MaxRotation);

	if (MaxDistance > HALF_PI)
	{
		DoorHinge->SetWorldRotation(MinRotation);
		//UE_LOG(LogTemp, Warning, TEXT("MIN"));
		bSwing = false;
	}
	else if (MinDistance > HALF_PI)
	{
		DoorHinge->SetWorldRotation(MaxRotation);
		//UE_LOG(LogTemp, Warning, TEXT("MAX"));
		bSwing = false;
	}
	else
	{
		DoorHinge->AddLocalRotation(DQ);
	}
}

void ADoor::UseDoor(float DeltaTime)
{
	//UE_LOG(LogTemp, Warning, TEXT("%f"), FVector(LastHCLocation - HandController->GetActorLocation()).Size());

	FVector HCDelta = LastHCLocation - HandController->GetActorLocation();
	HCDelta.Z = 0;
	FVector DFV = DoorHinge->GetForwardVector();
	float Dot = FVector::DotProduct(HCDelta.GetSafeNormal(), DFV);
	FQuat DHQ = DoorHinge->GetComponentQuat();

	SlerpSize = (-Dot * HCDelta.Size() * (180.f / PI)) / 50.f;

	//FRotator DR = FRotator(0, DeltaYaw * 10 * DeltaTime, 0);
	//FQuat DQ = UQuatRotLib::Euler_To_Quaternion(DR);
	//UQuatRotLib::AddActorLocalRotationQuat(this, DQ);

	//UE_LOG(LogTemp, Warning, TEXT("SLRP: %f"), SlerpSize);
	FQuat DQ = FQuat(DoorHinge->GetUpVector(), SlerpSize * DeltaTime);
	FQuat NewQuat = DHQ * DQ;

	float MinDistance = UKismetMathLibrary::Quat_AngularDistance(NewQuat, MinRotation);
	float MaxDistance = UKismetMathLibrary::Quat_AngularDistance(NewQuat, MaxRotation);

	if (MaxDistance > HALF_PI)
	{
		DoorHinge->SetWorldRotation(MinRotation);
		//UE_LOG(LogTemp, Warning, TEXT("MIN"));
	}
	else if (MinDistance > HALF_PI)
	{
		DoorHinge->SetWorldRotation(MaxRotation);
		//UE_LOG(LogTemp, Warning, TEXT("MAX"));
	}
	else
	{
		DoorHinge->AddLocalRotation(DQ);
	}
	
	//UE_LOG(LogTemp, Warning, TEXT("Min: %f"), UKismetMathLibrary::Quat_AngularDistance(DoorHinge->GetComponentQuat(), MinRotation));
	//UE_LOG(LogTemp, Warning, TEXT("Max: %f"), UKismetMathLibrary::Quat_AngularDistance(DoorHinge->GetComponentQuat(), MaxRotation));

	

	/*
	if (DoorHinge->GetComponentQuat().Equals(MinRotation, 0.01f))
	{
		if (Dot > 0)
		{
			DoorHinge->AddLocalRotation(DQ);
		}
	}
	else if (DoorHinge->GetComponentQuat().Equals(MaxRotation, 0.01f))
	{
		if (Dot < 0)
		{
			DoorHinge->AddLocalRotation(DQ);
		}
	}
	else if()
	{
		DoorHinge->AddLocalRotation(DQ);
	}
	*/
	LastHCLocation = HandController->GetActorLocation();
}

FQuat ADoor::CalcGoalQuat(FVector GoalVec)
{
	FQuat Result;
	FVector AFV = DoorHinge->GetForwardVector();
	FVector RotationAxis = DoorHinge->GetUpVector();
	float DotProduct = FVector::DotProduct(AFV, GoalVec);
	float RotationAngle = acosf(DotProduct);
	FQuat RotQuat = FQuat(RotationAxis, RotationAngle);
	FQuat MyQuat = DoorHinge->GetComponentQuat();
	Result = RotQuat * MyQuat;
	return Result;
}

void ADoor::PassController(AActor * HC)
{
	HandController = HC;
	LastHCLocation = HandController->GetActorLocation();
	
	float Dot = FVector::DotProduct(HandController->GetActorForwardVector(), DoorHinge->GetForwardVector());
	if (Dot > 0)
	{
		UE_LOG(LogTemp, Warning, TEXT("PULL TO OPEN"));
		Push = 1;
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("PUSH TO OPEN"));
		Push = -1;
	}
	
}

void ADoor::SetIsBeingUsed(bool Value)
{
	bIsBeingUsed = Value;

	// not a big fan of putting this logic here
	if (!Value)
	{
		bSwing = true;
		SwingVelocity = SlerpSize;
	}
}

FVector2D ADoor::ConvertVector3D(FVector Vec)
{
	FVector2D Result;
	Result.X = Vec.X;
	Result.Y = Vec.Y;
	
	return Result;
}