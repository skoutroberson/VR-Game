// Fill out your copyright notice in the Description page of Project Settings.


#include "StairsScare.h"
#include "DrawDebugHelpers.h"

void AStairsScare::BeginPlay()
{
	Super::BeginPlay();

	SplinePath = Cast<USplineComponent>(GetComponentByClass(USplineComponent::StaticClass()));
	Mesh = Cast<USkeletalMeshComponent>(GetComponentByClass(USkeletalMeshComponent::StaticClass()));
}

void AStairsScare::RotateMeshAlongSpline(float Time)
{
	FVector SplineTangent = SplinePath->GetTangentAtTime(Time, ESplineCoordinateSpace::World, true);
	FVector MFV = Mesh->GetRightVector();
	float AngleDegrees = FMath::Acos(FVector::DotProduct(SplineTangent, MFV)) * (180.f / PI);
	FRotator MR = Mesh->GetComponentRotation();
	float Dif = MR.Yaw - AngleDegrees;
	FRotator Rot = FRotator(0.0f, -Dif, 0.0f);

	Mesh->AddWorldRotation(Rot);

	//SplinePath->FindInputKeyClosestToWorld
	//SplinePath->GetDistanceAlongSplineAtSplineInputKey
	//SplinePath->GetLength

	//UE_LOG(LogTemp, Warning, TEXT("angle: %f"), YawAngle);

	//DrawDebugLine(GetWorld(), Mesh->GetComponentLocation(), Mesh->GetComponentLocation() + SplineTangent * 120.f, FColor::Magenta, true);

	//Mesh->SetWorldRotation(SplinePath->GetQuaternionAtTime(Time, ESplineCoordinateSpace::World));

}