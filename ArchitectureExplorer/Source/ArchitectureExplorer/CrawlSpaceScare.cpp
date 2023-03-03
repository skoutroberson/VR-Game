// Fill out your copyright notice in the Description page of Project Settings.


#include "CrawlSpaceScare.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "VRCharacter.h"
#include "DrawDebugHelpers.h"
#include "Kismet/KismetMathLibrary.h"


void ACrawlSpaceScare::BeginPlay()
{
	Super::BeginPlay();

	Player = Cast<AVRCharacter>(UGameplayStatics::GetActorOfClass(GetWorld(), AVRCharacter::StaticClass()));
	PlayerCam = Cast<UCameraComponent>(Player->GetComponentByClass(UCameraComponent::StaticClass()));
	Crawlerman = Cast<USkeletalMeshComponent>(GetComponentByClass(USkeletalMeshComponent::StaticClass()));
}

bool ACrawlSpaceScare::ShouldFlyAtPlayer()
{
	const FVector HL = Crawlerman->GetBoneLocation(FName("Head"));
	const FVector CL = PlayerCam->GetComponentLocation();
	const float Distance = FVector::Distance(HL, CL);

	if (Distance < FlyAtDistance)
	{
		// sphere trace to player camera
		return true;
	}

	return false;
}

bool ACrawlSpaceScare::FlyAtPlayer(float DeltaTime)
{
	const FVector HL = Crawlerman->GetBoneLocation(FName("Head"));
	const FVector CL = PlayerCam->GetComponentLocation();
	const FVector CFV = PlayerCam->GetForwardVector();
	const FVector CUV = PlayerCam->GetUpVector();
	const FVector TL = CL - CFV * 200.f + CUV * 100.f;
	const FVector EL = Crawlerman->GetComponentLocation();
	const FVector ErL = Crawlerman->GetComponentLocation();
	FVector Disp = CL - ErL;

	if (Disp.Size() < 10.0f)
	{
		return true;
	}

	Disp = Disp.GetSafeNormal();

	FRotator ER = Crawlerman->GetComponentRotation();
	FRotator DR = Disp.ToOrientationRotator();
	float DeltaYaw = 90.f - (ER.Yaw - DR.Yaw);
	UE_LOG(LogTemp, Warning, TEXT("Yaw: %f"), DeltaYaw);
	FRotator NewRot = ER;
	NewRot.Yaw += DeltaYaw;
	Crawlerman->SetWorldRotation(FMath::RInterpConstantTo(ER, NewRot, DeltaTime, 200.f));

	CurrentFlyAtSpeed = FMath::FInterpConstantTo(CurrentFlyAtSpeed, MaxFlyAtSpeed, DeltaTime, 2000.f);
	//Crawlerman->SetWorldLocationAndRotation(FMath::VInterpConstantTo(EL, CL, DeltaTime, CurrentFlyAtSpeed), FMath::QInterpConstantTo(EQ, NewQuat, DeltaTime, 10.f));
	Crawlerman->SetWorldLocation(FMath::VInterpConstantTo(EL, TL, DeltaTime, CurrentFlyAtSpeed));
	return false;
}
