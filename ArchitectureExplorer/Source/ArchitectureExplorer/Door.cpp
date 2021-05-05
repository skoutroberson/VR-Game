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
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Sound/SoundCue.h"
#include "Components/AudioComponent.h"
#include "Components/SphereComponent.h"

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

	float MaxAngle = BinarySearchForMaxAngle();
	float LVAngle = MaxAngle - 180.f;

	MaxAngleRadians = (270 - MaxAngle) * (PI / 180.f);

	//UE_LOG(LogTemp, Warning, TEXT("MA: %f, MAR: %f"), MaxAngle, MaxAngleRadians);
	//UE_LOG(LogTemp, Warning, TEXT("LV: %f"), LVAngle);

	FVector LV = -DoorHinge->GetRightVector().RotateAngleAxis(LVAngle, DoorHinge->GetUpVector());
	FVector FV = DoorHinge->GetForwardVector();
	if (bBackwards)
	{
		LV = -LV;
	}
	MinRotation = CalcGoalQuat(FV);
	MaxRotation = LV.ToOrientationQuat();

	YawAngle = GetActorRotation().Yaw + 180.f;
	DoorCloseDirection = (YawAngle > 180.f) ? -1 : 1;

	//MaxRotation = LV.RotateAngleAxis(3.f, DoorHinge->GetUpVector()).ToOrientationQuat();
	
	//DrawDebugLine(GetWorld(), DoorHinge->GetComponentLocation(), DoorHinge->GetComponentLocation() + DoorHinge->GetForwardVector() * 100.f, FColor::Green, true);
	//DrawDebugLine(GetWorld(), DoorHinge->GetComponentLocation(), DoorHinge->GetComponentLocation() + LV * 100.f, FColor::Red, true);

	//DrawDebugLine(GetWorld(), DoorHinge->GetComponentLocation(), DoorHinge->GetComponentLocation() + DoorHinge->GetForwardVector().RotateAngleAxis(148.f, DoorHinge->GetUpVector()) * 91.f, FColor::Black, true);
	//148 - 270

	SwingAudioComponent = Cast<UAudioComponent>(GetComponentByClass(UAudioComponent::StaticClass()));
	Doorknob = Cast<USphereComponent>(GetComponentByClass(USphereComponent::StaticClass()));

	SwingOpenSoundDuration = SwingOpenSound->GetDuration();
	SwingCloseSoundDuration = SwingCloseSound->GetDuration();
}
// Called every frame
void ADoor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!bStageLock && bIsBeingUsed)
	{
		UseDoor(DeltaTime);
	}
	else if (bCollisionSwing)
	{
		CollisionSwing(DeltaTime);
	}
	else if (bSwing)
	{
		Swing(DeltaTime);
	}
	else if (bCloseDoorFast)
	{
		CloseDoorFast(DeltaTime);
	}

}

void ADoor::Swing(float DeltaTime)
{
	if (fabsf(SwingVelocity) < 0.0001f)
	{
		bSwing = false;
	}

	SwingVelocity = (SwingVelocity > 0) ? SwingVelocity - (HingeFriction * DeltaTime) : SwingVelocity - (-HingeFriction * DeltaTime);

	FQuat DHQ = DoorHinge->GetComponentQuat();
	FQuat DQ = FQuat(DoorHinge->GetUpVector(), SwingVelocity);
	FQuat NewQuat = DHQ * DQ;

	float MinDistance = UKismetMathLibrary::Quat_AngularDistance(NewQuat, MinRotation);
	float MaxDistance = UKismetMathLibrary::Quat_AngularDistance(NewQuat, MaxRotation);

	//UE_LOG(LogTemp, Warning, TEXT("SV: %f"), SwingVelocity);

	if (MaxDistance > MaxAngleRadians)
	{
		//UE_LOG(LogTemp, Warning, TEXT("MIN"));
		bSwing = false;
		DoorHinge->SetWorldRotation(MinRotation);
		///////////////////////////////////////////////////////////////////////////////////////////
		//////////////////////PLAY DOOR SHUT SOUND!!!!!!!!!!
		///////////////////////////////////////////////////////////////////////////////////////////
		SwingVelocity = 0;
		UGameplayStatics::PlaySoundAtLocation(GetWorld(), CloseSound, Doorknob->GetComponentLocation());
	}
	else if (MinDistance > MaxAngleRadians)
	{
		if (KnobCollision)
		{
			SwingVelocity = -SwingVelocity * 0.16f;
		}
		else
		{
			SwingVelocity = -SwingVelocity * 0.16f;
		}
	}
	else
	{
		DoorHinge->AddLocalRotation(DQ, true);
	}
	PlaySwingSound(SwingVelocity, MinDistance / MaxAngleRadians);
}

void ADoor::CollisionSwing(float DeltaTime)
{
	FVector CL = CollisionActor->GetActorLocation();
	FVector CADelta = LastCALocation - CL;
	CADelta.Z = 0;
	FVector DFV = DoorHinge->GetForwardVector();
	float Dot = FVector::DotProduct(CADelta.GetSafeNormal(), DFV);
	//float CollisionDot = FVector::DotProduct(CADelta.GetSafeNormal(), CollisionActor->GetParentActor()->GetActorForwardVector());
	if (Dot < 0)
	{
		bSwing = true;
		bCollisionSwing = false;
		return;
	}
	FQuat DHQ = DoorHinge->GetComponentQuat();
	SlerpSize = (-Dot * CADelta.Size() * (180.f / PI)) * 0.0002f;
	SlerpSize = (SlerpSize > 3.f) ? 3.f : SlerpSize;
	FQuat DQ = FQuat(DoorHinge->GetUpVector(), SlerpSize);
	FQuat NewQuat = DHQ * DQ;

	float MinDistance = UKismetMathLibrary::Quat_AngularDistance(NewQuat, MinRotation);
	float MaxDistance = UKismetMathLibrary::Quat_AngularDistance(NewQuat, MaxRotation);

	if (MaxDistance > MaxAngleRadians)
	{
		DoorHinge->SetWorldRotation(MinRotation);
		//UE_LOG(LogTemp, Warning, TEXT("MIN"));
	}
	else if (MinDistance > MaxAngleRadians)
	{
		DoorHinge->SetWorldRotation(MaxRotation);
		//UE_LOG(LogTemp, Warning, TEXT("MAX"));
	}
	else
	{
		DoorHinge->AddLocalRotation(DQ);
	}

	LastCALocation = CL;
}

void ADoor::UseDoor(float DeltaTime)
{
	FVector HCDelta = LastHCLocation - HandController->GetActorLocation();
	HCDelta.Z = 0;
	FVector DFV = DoorHinge->GetForwardVector();
	float Dot = FVector::DotProduct(HCDelta.GetSafeNormal(), DFV);
	FQuat DHQ = DoorHinge->GetComponentQuat();

	SlerpSize = (-Dot * HCDelta.Size() * (180.f / PI)) * 0.0002f;
	SlerpSize = (SlerpSize > 3.f) ? 3.f : SlerpSize;

	//UE_LOG(LogTemp, Warning, TEXT("SLRP: %f"), SlerpSize);
	FQuat DQ = FQuat(DoorHinge->GetUpVector(), SlerpSize);
	FQuat NewQuat = DHQ * DQ;

	float MinDistance = UKismetMathLibrary::Quat_AngularDistance(NewQuat, MinRotation);
	float MaxDistance = UKismetMathLibrary::Quat_AngularDistance(NewQuat, MaxRotation);

	//DrawDebugLine(GetWorld(), DoorHinge->GetComponentLocation(), DoorHinge->GetComponentLocation() + DoorHinge->GetForwardVector() * 300.f, FColor::Cyan, false, 2 * DeltaTime);

	//UE_LOG(LogTemp, Warning, TEXT("D: %f"), Dot);
	//UE_LOG(LogTemp, Warning, TEXT("V: %f"), SlerpSize);

	//UE_LOG(LogTemp, Warning, TEXT("Max: %f"), MaxDistance);
	//UE_LOG(LogTemp, Warning, TEXT("Min: %f"), MinDistance);
	//UE_LOG(LogTemp, Warning, TEXT("MAR: %f"), MaxAngleRadians);

	PlaySwingSound(SlerpSize, MinDistance / MaxAngleRadians);

	if (MaxDistance > MaxAngleRadians)
	{
		DoorHinge->SetWorldRotation(MinRotation);
		
		//UE_LOG(LogTemp, Warning, TEXT("MIN"));
	}
	else if (MinDistance > MaxAngleRadians)
	{
		DoorHinge->SetWorldRotation(MaxRotation);
		//UE_LOG(LogTemp, Warning, TEXT("MAX"));
	}
	else
	{
		DoorHinge->AddLocalRotation(DQ);
	}

	LastHCLocation = HandController->GetActorLocation();

	if (fabsf(SlerpSize) > MaxSwingVelocity)
	{
		MaxSwingVelocity = SlerpSize;
	}
	UE_LOG(LogTemp, Warning, TEXT("Max: %f"), MaxSwingVelocity);
	UE_LOG(LogTemp, Warning, TEXT("SV: %f"), SlerpSize); 
}

// Helper function to find the max swing angle for the doors (angle where the door hits an object so it can't open all the way). Called in BeginPlay().
float ADoor::BinarySearchForMaxAngle()
{
	float Max = 270.f;
	float Min = 148.f;
	float Mid = -1.f;

	FVector DHL = DoorHinge->GetComponentLocation();
	DHL.Z += 4.f;
	FVector DUV = DoorHinge->GetUpVector();
	FVector DFV = DoorHinge->GetForwardVector();

	FVector TestVec;

	FHitResult HitResult;
	FCollisionQueryParams ColParams;
	ColParams.AddIgnoredActor(this);

	UWorld* World = GetWorld();

	while (fabsf(Max - Min) > 1.f)
	{
		Mid = (Max + Min) / 2.f;

		TestVec = DFV.RotateAngleAxis(Mid, DUV) * DoorLength;
		//DrawDebugLine(World, DHL, DHL + TestVec, FColor::Orange, true);

		if (World->LineTraceSingleByChannel(HitResult, DHL, DHL + TestVec, ECC_WorldStatic, ColParams))
		{
			Min = Mid;
			KnobCollision = true;
			//DrawDebugPoint(World, HitResult.ImpactPoint, 10.f, FColor::Emerald, true);
		}
		else
		{
			Max = Mid;
		}
	}

	//UE_LOG(LogTemp, Warning, TEXT("%d TRACES USED"), i);
	//DrawDebugLine(World, DHL, DHL + TestVec, FColor::Cyan, true);

	// Move the angle in 3.5 degrees to account for the knob hitting the wall.
	Mid = (KnobCollision) ? Mid + 3.5f : Mid;
	Mid = 180.f;	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	return Mid;
}

void ADoor::CloseDoorFast(float DeltaTime)
{

	CloseDoorFastVelocity += powf(DeltaTime * 10.f, 3.f);

	SwingVelocity = 2.5f * DoorCloseDirection * DeltaTime;

	FQuat DHQ = DoorHinge->GetComponentQuat();
	FQuat DQ = FQuat(DoorHinge->GetUpVector(), CloseDoorFastVelocity);
	FQuat NewQuat = DHQ * DQ;

	float MaxDistance = UKismetMathLibrary::Quat_AngularDistance(NewQuat, MaxRotation);

	if (MaxDistance > MaxAngleRadians)
	{
		//UE_LOG(LogTemp, Warning, TEXT("MIN"));
		bCloseDoorFast = false;
		DoorHinge->SetWorldRotation(MinRotation);
		///////////////////////////////////////////////////////////////////////////////////////////
		//////////////////////PLAY DOOR SHUT SOUND!!!!!!!!!!
		///////////////////////////////////////////////////////////////////////////////////////////
		UGameplayStatics::PlaySoundAtLocation(GetWorld(), CloseSound, GetActorLocation());
	}
	else
	{
		DoorHinge->AddLocalRotation(DQ, true);
	}
}

void ADoor::PlaySwingSound(const float Velocity, const float Ratio)
{
	bool bOpen = (Velocity > 0) ? false : true;
	const float FV = fabsf(Velocity);

	if (FV < DoorVelocitySoundThreshold)
	{
		// stop all sounds if they are playing

		if (bPlayingSwingSound)
		{
			bPlayingSwingSound = false;
			SwingAudioComponent->Stop();
			UE_LOG(LogTemp, Warning, TEXT("Stop Swing Audio"));
		}
	}
	else
	{
		if (!bPlayingSwingSound)
		{
			UE_LOG(LogTemp, Warning, TEXT("Play Swing Audio"));
			// play the sound

			if (bOpen)
			{
				UE_LOG(LogTemp, Warning, TEXT("Open"));
				SwingAudioComponent->SetSound(SwingOpenSound);
				SwingAudioComponent->Play(SwingOpenSoundDuration * Ratio);
				bPlayingSwingSound = true;
			}
			else
			{
				UE_LOG(LogTemp, Warning, TEXT("Close"));
				SwingAudioComponent->SetSound(SwingCloseSound);
				SwingAudioComponent->Play(SwingOpenSoundDuration - (SwingCloseSoundDuration * Ratio));
				bPlayingSwingSound = true;
			}
		}

		// change the pitch based on velocity
		//
		//
		//
	}
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
	UGameplayStatics::PlaySoundAtLocation(GetWorld(), OpenSound, GetActorLocation());
}

void ADoor::SetIsBeingUsed(bool Value)
{
	bIsBeingUsed = Value;

	// not a big fan of putting this logic here
	if (!Value)
	{
		bSwing = true;
		SwingVelocity = (SlerpSize > 3.f) ? 3.f : SlerpSize;
	}
}

FVector2D ADoor::ConvertVector3D(FVector Vec)
{
	FVector2D Result;
	Result.X = Vec.X;
	Result.Y = Vec.Y;
	
	return Result;
}