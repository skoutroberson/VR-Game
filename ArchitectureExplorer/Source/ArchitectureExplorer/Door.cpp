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

	World = GetWorld();

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
	DoorCloseDirection = (bBackwards) ? DoorCloseDirection * -1 : DoorCloseDirection;

	//MaxRotation = LV.RotateAngleAxis(3.f, DoorHinge->GetUpVector()).ToOrientationQuat();
	
	//DrawDebugLine(GetWorld(), DoorHinge->GetComponentLocation(), DoorHinge->GetComponentLocation() + DoorHinge->GetForwardVector() * 100.f, FColor::Green, true);
	//DrawDebugLine(GetWorld(), DoorHinge->GetComponentLocation(), DoorHinge->GetComponentLocation() + LV * 100.f, FColor::Red, true);

	//DrawDebugLine(GetWorld(), DoorHinge->GetComponentLocation(), DoorHinge->GetComponentLocation() + DoorHinge->GetForwardVector().RotateAngleAxis(148.f, DoorHinge->GetUpVector()) * 91.f, FColor::Black, true);
	//148 - 270

	Doorknob = Cast<USphereComponent>(GetComponentByClass(USphereComponent::StaticClass()));

	TArray<USceneComponent*> KnobHandTransforms;
	Doorknob->GetChildrenComponents(true, KnobHandTransforms);

	for (auto i : KnobHandTransforms)
	{
		if (i->ComponentHasTag(FName("RF")))
		{
			HandRFrontLocation = i;
		}
		else if (i->ComponentHasTag(FName("LF")))
		{
			HandLFrontLocation = i;
		}
		else if (i->ComponentHasTag(FName("RB")))
		{
			HandRBackLocation = i;
		}
		else if (i->ComponentHasTag(FName("LB")))
		{
			HandLBackLocation = i;
		}
	}

	SwingOpenSoundDuration = SwingOpenSound->GetDuration();
	SwingCloseSoundDuration = SwingCloseSound->GetDuration();

	//DoorMesh->SetMaskFilterOnBodyInstance(3); // so roach sweeps ignore this mesh

	// this is being used so that PeekPoint traces ignore the door mesh

	//DoorMesh->SetMaskFilterOnBodyInstance(5);
	DoorMesh->SetMaskFilterOnBodyInstance(1 << 5);

	//DrawDebugLine(World, DoorHinge->GetComponentLocation(), DoorHinge->GetComponentLocation() + LV * 100.f, FColor::Red, true, -1, ESceneDepthPriorityGroup::SDPG_MAX, 5.f);

	//DrawDebugLine(World, DoorHinge->GetComponentLocation(), DoorHinge->GetForwardVector() * 1000.f, FColor::Red, true, -1, ESceneDepthPriorityGroup::SDPG_MAX, 5.f);
	//DrawDebugLine(World, DoorHinge->GetComponentLocation(), DoorHinge->GetRightVector() * 1000.f, FColor::Blue, true, -1, ESceneDepthPriorityGroup::SDPG_MAX, 5.f);
	//DrawDebugLine(World, DoorHinge->GetComponentLocation(), DoorHinge->GetLeftVector() * 1000.f, FColor::Green, true, -1, ESceneDepthPriorityGroup::SDPG_MAX, 5.f);
}
// Called every frame
void ADoor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//DrawDebugLine(World, DoorMesh->GetComponentLocation(), DoorMesh->GetComponentLocation() + DoorHinge->GetForwardVector() * 100.f, FColor::Green, false, 1.f);

	if (bCloseDoorUsingCurve)
	{
		CloseDoorUsingCurve(DeltaTime);
	}
	else if (bOpenDoorUsingCurve)
	{
		OpenDoorUsingCurve(DeltaTime);
	}
	else if (!bLocked && bIsBeingUsed)
	{
		InterpToHC(DeltaTime);
		UseDoor(DeltaTime);
	}
	else if (bSwing)
	{
		Swing(DeltaTime);
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
	FQuat DQ = FQuat(DoorHinge->GetUpVector(), SwingVelocity * DeltaTime); // 120 is for the target framerate
	FQuat NewQuat = DHQ * DQ;
	//NewQuat = FMath::QInterpConstantTo(DHQ, DQ * DHQ, DeltaTime, 5.f);

	float MinDistance = UKismetMathLibrary::Quat_AngularDistance(NewQuat, MinRotation);
	float MaxDistance = UKismetMathLibrary::Quat_AngularDistance(NewQuat, MaxRotation);

	CurrentDoorAngle = MaxAngleRadians - MaxDistance;
	SwingAudioComponent->SetFloatParameter(FName("Angle"), CurrentDoorAngle);

	//UE_LOG(LogTemp, Warning, TEXT("SV: %f"), SwingVelocity);

	if (MaxDistance > MaxAngleRadians)
	{
		//UE_LOG(LogTemp, Warning, TEXT("MIN"));
		bSwing = false;
		DoorHinge->SetWorldRotation(MinRotation);

		SwingAudioComponent->Stop();

		if (!bFullyClosed)
		{
			bFullyClosed = true;

			UGameplayStatics::PlaySoundAtLocation(GetWorld(), CloseSound, Doorknob->GetComponentLocation(), FMath::Clamp(SwingVelocity * CloseAudioMultiplier, 0.6f, 1.0f));

			if (bPortalRoomStartDoor)
			{
				// do things on door close for portal room.
			}
		}
		
		SwingVelocity = 0;
	}
	else if (MinDistance > MaxAngleRadians)
	{
		SwingAudioComponent->Stop();
		// play a door collision sound here

		OpenHitAudio->Stop();
		const float OpenHitVolume = FMath::Clamp(FMath::Abs(SwingVelocity) *50.f, 0.0f, 1.0f);
		OpenHitAudio->SetVolumeMultiplier(OpenHitVolume);
		OpenHitAudio->Play();
		

		if (KnobCollision)
		{
			SwingVelocity = -SwingVelocity * 0.16f;
		}
		else
		{
			SwingVelocity = -SwingVelocity * 0.16f;
		}
		bFullyClosed = false;
	}
	else
	{
		DoorHinge->AddLocalRotation(DQ, true);
		//DoorHinge->AddLocalRotation(NewQuat);
		//DoorHinge->SetRelativeRotation(FMath::QInterpConstantTo(DHQ, NewQuat, DeltaTime, 1.4f), true);
		//DoorHinge->AddLocalRotation(FMath::QInterpConstantTo(DHQ, NewQuat, DeltaTime, 1.4f));

		PlaySwingAudio(SwingVelocity * DeltaTime);
		// play swing sound

		bFullyClosed = false;
	}
}

// DEPRICATED
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
	//FVector HCDelta = LastHCLocation - HandController->GetActorLocation();
	FVector HCDelta = LastInterpHCLocation - InterpHCLocation;
	HCDelta.Z = 0;

	//float DeltaSize = FMath::Clamp(HCDelta.Size(), 0.0f, 1.0f);

	FVector DFV = DoorHinge->GetForwardVector();
	float Dot = FVector::DotProduct(HCDelta.GetSafeNormal(), DFV);
	FQuat DHQ = DoorHinge->GetComponentQuat();

	SlerpSize = (-Dot * HCDelta.Size() * (180.f / PI)) * 0.0002f;
	//SlerpSize = (-Dot * DeltaSize * (180.f / PI)) * 0.0002f;
	SlerpSize = (SlerpSize > 2.0f) ? 2.0f : SlerpSize;

	//UE_LOG(LogTemp, Warning, TEXT("SLRP: %f"), SlerpSize);
	FQuat DQ = FQuat(DoorHinge->GetUpVector(), SlerpSize);
	FQuat NewQuat = DHQ * DQ;
	//NewQuat = FMath::QInterpConstantTo(DHQ, DQ * DHQ, DeltaTime, 5.f);

	float MinDistance = UKismetMathLibrary::Quat_AngularDistance(NewQuat, MinRotation);
	float MaxDistance = UKismetMathLibrary::Quat_AngularDistance(NewQuat, MaxRotation);

	CurrentDoorAngle = MaxAngleRadians - MaxDistance;
	SwingAudioComponent->SetFloatParameter(FName("Angle"), CurrentDoorAngle);

	//UE_LOG(LogTemp, Warning, TEXT("Angle: %f"), CurrentDoorAngle);

	//DrawDebugLine(GetWorld(), DoorHinge->GetComponentLocation(), DoorHinge->GetComponentLocation() + DoorHinge->GetForwardVector() * 300.f, FColor::Cyan, false, 2 * DeltaTime);

	//UE_LOG(LogTemp, Warning, TEXT("D: %f"), Dot);
	//UE_LOG(LogTemp, Warning, TEXT("V: %f"), SlerpSize * 100.f);

	//UE_LOG(LogTemp, Warning, TEXT("Max: %f"), MaxDistance);
	//UE_LOG(LogTemp, Warning, TEXT("Min: %f"), MinDistance);
	//UE_LOG(LogTemp, Warning, TEXT("MAR: %f"), MaxAngleRadians);

	if (MaxDistance > MaxAngleRadians)
	{
		DoorHinge->SetWorldRotation(MinRotation);

		SwingAudioComponent->Stop();
		
		// stop swing sound
		// play door shut sound

		if (!bFullyClosed)
		{
			bFullyClosed = true;
			UGameplayStatics::PlaySoundAtLocation(GetWorld(), CloseSound, Doorknob->GetComponentLocation(), FMath::Clamp(SlerpSize * CloseAudioMultiplier, 0.6f, 1.0f));
		}
		

		//UE_LOG(LogTemp, Warning, TEXT("MIN"));
	}
	else if (MinDistance > MaxAngleRadians)
	{
		DoorHinge->SetWorldRotation(MaxRotation);

		SwingAudioComponent->Stop();
		// stop swing sound
		// play door collision sound

		OpenHitAudio->Stop();
		const float OpenHitVolume = FMath::Clamp(FMath::Abs(SlerpSize) *50.f, 0.0f, 1.0f);
		OpenHitAudio->SetVolumeMultiplier(OpenHitVolume);
		OpenHitAudio->Play();
		

		//UE_LOG(LogTemp, Warning, TEXT("MAX"));
		bFullyClosed = false;
	}
	else
	{
		DoorHinge->AddLocalRotation(DQ);
		//DoorHinge->AddLocalRotation(NewQuat);
		//DoorHinge->SetRelativeRotation(FMath::QInterpConstantTo(DHQ, NewQuat, DeltaTime, 1.4f), true);

		//DoorHinge->AddLocalRotation(FMath::QInterpConstantTo(DHQ, NewQuat, DeltaTime, 1.4f));

		if (SlerpSize > 0)
		{
			if (!bSwingingPositive)
			{
				bSwingingDirectionChange = true;
			}
			bSwingingPositive = true;
		}
		else
		{
			if (bSwingingPositive)
			{
				bSwingingDirectionChange = true;
			}
			bSwingingPositive = false;
		}

		PlaySwingAudio(SlerpSize);

		bFullyClosed = false;

		// play swing sound
	}

	LastHCLocation = HandController->GetActorLocation();
	LastInterpHCLocation = InterpHCLocation;

	if (fabsf(SlerpSize) > 2.0f)
	{
		SlerpSize = 2.0f;
	}
	//UE_LOG(LogTemp, Warning, TEXT("Max: %f"), MaxSwingVelocity);
	//UE_LOG(LogTemp, Warning, TEXT("SV: %f"), SlerpSize); 
}

void ADoor::PlaySwingAudio(const float Velocity)
{
	const float AbsVel = fabsf(Velocity);
	const float SwingVolumeMultiplier = FMath::Clamp(AbsVel * 40.f, 0.0f, 1.0f);
	const float SwingPitchMultiplier = FMath::Clamp(AbsVel * 100.f, 0.9f, 1.1f);
	SwingAudioComponent->SetVolumeMultiplier(SwingVolumeMultiplier);
	//SwingAudioComponent->SetPitchMultiplier(SwingPitchMultiplier);

	//UE_LOG(LogTemp, Warning, TEXT("Volume: %f"), SwingVolumeMultiplier);

	// play different swing sounds for opening vs closing the door?

	//UE_LOG(LogTemp, Warning, TEXT("Vel: %f"), Velocity);

	if (Velocity > 0)
	{
		SwingAudioComponent->SetBoolParameter(FName("Open"), true);
	}
	else if(Velocity < 0)
	{
		SwingAudioComponent->SetBoolParameter(FName("Open"), false);
	}
	

	if (AbsVel > MinSwingAudioVelocity)
	{

		if (bSwingingDirectionChange)
		{
			bSwingingDirectionChange = false;
			SwingAudioComponent->Stop();
			SwingAudioComponent->Play();
		}
		else if(!SwingAudioComponent->IsPlaying())
		{
			
			SwingAudioComponent->Play();
		}
	}
	else
	{
		//SwingAudioComponent->Stop();
	}
}

void ADoor::UnlockDoor(FName KeyName)
{
	UGameplayStatics::PlaySoundAtLocation(World, UnlockSound, Doorknob->GetComponentLocation());
	bLocked = false;
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

	//UWorld* World = GetWorld();

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

void ADoor::CloseDoorFast(UPARAM(DisplayName = "DeltaTime") float DeltaTime)
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
		bSwing = false;
		DoorHinge->SetWorldRotation(MinRotation);
		///////////////////////////////////////////////////////////////////////////////////////////
		//////////////////////PLAY DOOR SHUT SOUND!!!!!!!!!!
		///////////////////////////////////////////////////////////////////////////////////////////
		UGameplayStatics::PlaySoundAtLocation(GetWorld(), CloseSound, GetActorLocation());

		if (bPortalEnabled)
		{
			// bluleprint function to turn off all sounds / indirect lighting from lights outside of the portal.
			TurnOffSoundsAndLighting();
		}
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

USceneComponent * ADoor::GetHandRFront()
{
	return HandRFrontLocation;
}

USceneComponent * ADoor::GetHandLFront()
{
	return HandLFrontLocation;
}

USceneComponent * ADoor::GetHandRBack()
{
	return HandRBackLocation;
}

USceneComponent * ADoor::GetHandLBack()
{
	return HandLBackLocation;
}

void ADoor::PassController(AActor * HC)
{
	if (!bLocked)
	{
		if (HC != nullptr)
		{
			bIsBeingUsed = true;
			HandController = HC;
			LastHCLocation = HandController->GetActorLocation();
			InterpHCLocation = LastHCLocation;
			LastInterpHCLocation = InterpHCLocation;

			float Dot = FVector::DotProduct(HandController->GetActorForwardVector(), DoorHinge->GetForwardVector());
			if (Dot > 0)
			{
				Push = 1;
			}
			else
			{
				Push = -1;
			}
		}
		
		UGameplayStatics::PlaySoundAtLocation(GetWorld(), OpenSound, GetActorLocation());

		if (bPortalEnabled)
		{
			//
			TurnOnSoundsAndLighting();
		}
	}
	else
	{
		UGameplayStatics::PlaySoundAtLocation(GetWorld(), LockedSound, Doorknob->GetComponentLocation());
	}
	
}

void ADoor::SetIsBeingUsed(bool Value)
{
	bIsBeingUsed = Value;

	// not a big fan of putting this logic here
	if (!Value)
	{
		bSwing = true;

		SwingVelocity = SlerpSize * (1.0f / World->DeltaTimeSeconds);
		//SwingVelocity = (SlerpSize > 2.0f) ? 2.0f : SlerpSize;
	}
}

FVector2D ADoor::ConvertVector3D(FVector Vec)
{
	FVector2D Result;
	Result.X = Vec.X;
	Result.Y = Vec.Y;
	
	return Result;
}

void ADoor::SetDoorBackwards()
{

}

void ADoor::CloseDoorUsingCurve(float DeltaTime)
{
	CurrentCurveTime += DeltaTime;

	float CurveValue = (bBackwards) ? -CurrentCurve->GetFloatValue(CurrentCurveTime) : CurrentCurve->GetFloatValue(CurrentCurveTime);
	
	FQuat DHQ = DoorHinge->GetComponentQuat();

	FQuat DQ = FQuat(DoorHinge->GetUpVector(), CurveValue);
	FQuat NewQuat = DHQ * DQ;

	float MaxDistance = UKismetMathLibrary::Quat_AngularDistance(NewQuat, MaxRotation);

	CurrentDoorAngle = MaxAngleRadians - MaxDistance;

	SwingAudioComponent->SetBoolParameter(FName("Open"), false); // doesn't need to be done every frame

	//DrawDebugLine(GetWorld(), DoorHinge->GetComponentLocation(), DoorHinge->GetComponentLocation() + DoorHinge->GetForwardVector() * 300.f, FColor::Cyan, false, 2 * DeltaTime);

	//UE_LOG(LogTemp, Warning, TEXT("D: %f"), Dot);
	//UE_LOG(LogTemp, Warning, TEXT("V: %f"), SlerpSize * 100.f);

	//UE_LOG(LogTemp, Warning, TEXT("Max: %f"), MaxDistance);
	//UE_LOG(LogTemp, Warning, TEXT("Min: %f"), MinDistance);
	//UE_LOG(LogTemp, Warning, TEXT("MAR: %f"), MaxAngleRadians);

	if (MaxDistance > MaxAngleRadians)
	{
		DoorHinge->SetWorldRotation(MinRotation);

		SwingAudioComponent->Stop();

		// stop swing sound
		// play door shut sound

		if (!bFullyClosed)
		{
			bFullyClosed = true;
			UGameplayStatics::PlaySoundAtLocation(GetWorld(), CloseSound, Doorknob->GetComponentLocation(), FMath::Clamp(CurveValue * CloseAudioMultiplier, 0.6f, 1.0f));
		}

		bCloseDoorUsingCurve = false;
		CurrentCurveTime = 0;
		//UE_LOG(LogTemp, Warning, TEXT("MIN"));
	}
	else
	{
		DoorHinge->AddLocalRotation(DQ);

		if (CurveValue > 0)
		{
			if (!bSwingingPositive)
			{
				bSwingingDirectionChange = true;
			}
			bSwingingPositive = true;
		}
		else
		{
			if (bSwingingPositive)
			{
				bSwingingDirectionChange = true;
			}
			bSwingingPositive = false;
		}

		PlaySwingAudio(CurveValue);

		bFullyClosed = false;
	}
}

void ADoor::OpenDoorUsingCurve(float DeltaTime)
{
	CurrentCurveTime += DeltaTime;

	float CurveValue = (bBackwards) ? CurrentCurve->GetFloatValue(CurrentCurveTime) : -CurrentCurve->GetFloatValue(CurrentCurveTime);

	FQuat DHQ = DoorHinge->GetComponentQuat();

	FQuat DQ = FQuat(DoorHinge->GetUpVector(), CurveValue);
	FQuat NewQuat = DHQ * DQ;

	float MinDistance = UKismetMathLibrary::Quat_AngularDistance(NewQuat, MinRotation);
	float MaxDistance = UKismetMathLibrary::Quat_AngularDistance(NewQuat, MaxRotation);

	CurrentDoorAngle = MaxAngleRadians - MaxDistance;

	SwingAudioComponent->SetBoolParameter(FName("Open"), true); // doesn't need to be done every frame

	//DrawDebugLine(GetWorld(), DoorHinge->GetComponentLocation(), DoorHinge->GetComponentLocation() + DoorHinge->GetForwardVector() * 300.f, FColor::Cyan, false, 2 * DeltaTime);

	//UE_LOG(LogTemp, Warning, TEXT("D: %f"), Dot);
	//UE_LOG(LogTemp, Warning, TEXT("V: %f"), SlerpSize * 100.f);

	//UE_LOG(LogTemp, Warning, TEXT("Max: %f"), MaxDistance);
	//UE_LOG(LogTemp, Warning, TEXT("Min: %f"), MinDistance);
	//UE_LOG(LogTemp, Warning, TEXT("MAR: %f"), MaxAngleRadians);
	/*
	if (MaxDistance > MaxAngleRadians)
	{
		DoorHinge->SetWorldRotation(MinRotation);

		SwingAudioComponent->Stop();

		// stop swing sound
		// play door shut sound

		if (!bFullyClosed)
		{
			bFullyClosed = true;
			UGameplayStatics::PlaySoundAtLocation(GetWorld(), CloseSound, Doorknob->GetComponentLocation(), FMath::Clamp(CurveValue * CloseAudioMultiplier, 0.0f, 1.0f));
		}

		bOpenDoorUsingCurve = false;
		CurrentCurveTime = 0;
		//UE_LOG(LogTemp, Warning, TEXT("MIN"));
	}
	*/
	if (MinDistance > MaxAngleRadians)
	{
		DoorHinge->SetWorldRotation(MaxRotation);

		SwingAudioComponent->Stop();
		// stop swing sound
		// play door collision sound

		//UE_LOG(LogTemp, Warning, TEXT("MAX"));
		bFullyClosed = false;
		bOpenDoorUsingCurve = false;
		CurrentCurveTime = 0;
		IsErrolOpening = false;
	}
	else
	{
		DoorHinge->AddLocalRotation(DQ);

		if (CurveValue > 0)
		{
			if (!bSwingingPositive)
			{
				bSwingingDirectionChange = true;
			}
			bSwingingPositive = true;
		}
		else
		{
			if (bSwingingPositive)
			{
				bSwingingDirectionChange = true;
			}
			bSwingingPositive = false;
		}

		PlaySwingAudio(CurveValue);

		bFullyClosed = false;
	}
}

void ADoor::InterpToHC(float DeltaTime)
{
	InterpHCLocation = FMath::VInterpTo(InterpHCLocation, HandController->GetActorLocation(), DeltaTime, 8.f);
	//DrawDebugSphere(World, InterpHCLocation, 5.f, 10.f, FColor::Cyan, false, DeltaTime * 1.1f);
}
