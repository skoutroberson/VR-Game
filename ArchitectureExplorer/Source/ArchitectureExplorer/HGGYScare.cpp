// Fill out your copyright notice in the Description page of Project Settings.


#include "HGGYScare.h"
#include "Engine/World.h"
#include "Phone.h"
#include "VRCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "Camera/CameraComponent.h"
#include "ErrolCharacter.h"

AHGGYScare::AHGGYScare()
{
	HGGYRoot = CreateDefaultSubobject<USceneComponent>(TEXT("HGGYRoot"));
	SetRootComponent(HGGYRoot);

	PhoneGoalLocation = CreateDefaultSubobject<USceneComponent>(TEXT("PhoneGoalLocation"));
	PhoneGoalLocation->AttachToComponent(HGGYRoot, FAttachmentTransformRules::KeepWorldTransform);
}

void AHGGYScare::BeginPlay()
{
	Super::BeginPlay();

	SetActorTickEnabled(false);

	World = GetWorld();

	AActor * Player = UGameplayStatics::GetActorOfClass(World, AVRCharacter::StaticClass());

	Phone = Cast<APhone>(UGameplayStatics::GetActorOfClass(World, APhone::StaticClass()));
	PlayerCamera = Cast<USceneComponent>(Player->GetComponentByClass(UCameraComponent::StaticClass()));

	QueryParams.AddIgnoredActor(this);
	QueryParams.AddIgnoredActor(Player);
	QueryParams.AddIgnoredActor(Phone);

	Errol = Cast<AErrolCharacter>(UGameplayStatics::GetActorOfClass(World, AErrolCharacter::StaticClass()));

	QueryParams.AddIgnoredActor(Errol);
	QueryParams.AddIgnoredActor(Player);
	QueryParams.AddIgnoredActor(this);
}

void AHGGYScare::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	switch (State)
	{
	case HGGYState::STATE_MOVING_PHONE:
		MovingPhone();
		break;
	case HGGYState::STATE_ENDING:
		ShouldEndChase();
		break;
	}
}

void AHGGYScare::EnterMovingPhoneState()
{
	if (Phone->b1Held)
	{
		EnterCallingPhoneState();
	}
	else
	{
		State = HGGYState::STATE_MOVING_PHONE;
		SetActorTickEnabled(true);
	}
}

void AHGGYScare::EnterCallingPhoneState()
{
	State = HGGYState::STATE_CALLING_PHONE;
	Phone->CallPhone();
}

void AHGGYScare::MovingPhone()
{
	// if the phone is not in view, move the phone to PhoneGoalLocation and call it and EnterCallingPhoneState();

	// 0.33f is around 140 degrees FOV
	#define HMD_MAX_FOV 0.33f

	const FVector PL = Phone->GetActorLocation();
	const FVector PGL = PhoneGoalLocation->GetComponentLocation();
	const FVector CL = PlayerCamera->GetComponentLocation();
	const FVector CFV = PlayerCamera->GetForwardVector();

	FHitResult HitResult;
	bool bTrace1 = World->LineTraceSingleByChannel(HitResult, CL, PL, ECollisionChannel::ECC_Visibility, QueryParams);
	
	if (!bTrace1)
	{
		FVector Disp = PL - CL;
		Disp = Disp.GetSafeNormal();
		const float Dot = FVector::DotProduct(Disp, CFV);
		if (Dot > HMD_MAX_FOV)
		{
			return;
		}
	}

	bool bTrace2 = World->LineTraceSingleByChannel(HitResult, CL, PGL, ECollisionChannel::ECC_Visibility, QueryParams);
	
	if (!bTrace2)
	{
		FVector Disp = PGL - CL;
		Disp = Disp.GetSafeNormal();
		const float Dot = FVector::DotProduct(Disp, CFV);
		if (Dot > HMD_MAX_FOV)
		{
			return;
		}
	}
	
	Phone->SetActorTransform(PhoneGoalLocation->GetComponentTransform());
	EnterCallingPhoneState();
	
}

void AHGGYScare::ShouldEndChase()
{
	if (EndChaseValue > EndChaseThreshold)
	{
		EndChase();
		return;
	}

	const FVector CL = PlayerCamera->GetComponentLocation();
	FVector EL = Errol->GetActorLocation();
	EL.Z += 100.f;
	const FVector Disp = (EL - CL).GetSafeNormal();
	const FVector CFV = PlayerCamera->GetForwardVector();
	const float Dot = FVector::DotProduct(Disp, CFV);

	if (!Errol->CanThePlayerSeeMe())
	{
		++EndChaseValue;
	}
	else
	{
		--EndChaseValue;
	}
}

void AHGGYScare::EndChase()
{
	State = HGGYState::STATE_IDLE;
	Errol->ExitChaseState();
	Errol->EnterIdleState();
	Errol->SetActorLocation(FVector(0.0f, 4500.f, 1100.f));
	EndChaseBP();
}
