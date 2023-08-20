// Fill out your copyright notice in the Description page of Project Settings.


#include "ErrolCharacter.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Engine/World.h"
#include "AIController.h"
#include "AITypes.h"
#include "ErrolController.h"
#include "Perception/AIPerceptionComponent.h"
#include "VRCharacter.h"
#include "HandController.h"
#include "Camera/CameraComponent.h"
#include "DrawDebugHelpers.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "NavigationSystem.h"
#include "NavigationPath.h"
#include "AI/Navigation/NavigationTypes.h"
#include "Bottle.h"
#include "DestructibleComponent.h"
#include "Components/ArrowComponent.h"
#include "Components/CapsuleComponent.h"
#include "PeekPoint.h"
#include "Engine/SkeletalMeshSocket.h"
#include "Door.h"
#include "Engine.h"
#include "ErrolSaw.h"

// Sets default values
AErrolCharacter::AErrolCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	State = ErrolState::STATE_IDLE;
	PeekState = ErrolPeekState::STATE_IDLE;

	MocapMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("MocapMesh"));
	MocapMesh->SetupAttachment(GetRootComponent());

	FlankBlocker = CreateDefaultSubobject<UBoxComponent>(TEXT("FlankBlocker"));
}

// Called when the game starts or when spawned
void AErrolCharacter::BeginPlay()
{
	Super::BeginPlay();

	World = GetWorld();

	ErrolEye = Cast<USceneComponent>(GetComponentsByTag(USceneComponent::StaticClass(), FName("ET"))[0]);

	ErrolController = Cast<AErrolController>(GetController());
	ErrolController->InitializeLookAroundTimer();

	UGameplayStatics::GetAllActorsOfClassWithTag(World, ATargetPoint::StaticClass(), FName("Patrol1"), Waypoints);

	// I have to call this a bit after the game starts so the player and hand controllers are spawned in
	GetWorld()->GetTimerManager().SetTimer(SetUpCanSeeHandle, this, &AErrolCharacter::InitializeCanSeeVariables, SeeTimerRate, false, 0.2f);

	//EnterIdleState();
	//EnterPatrolState();
	//State = ErrolState::STATE_PATROL;

	NavigationSystem = UNavigationSystemV1::GetCurrent(World);

	//	Peek stuff
	TArray<AActor*> PeekPointActors;
	UGameplayStatics::GetAllActorsOfClass(World, APeekPoint::StaticClass(), PeekPointActors);

	for (auto &PP : PeekPointActors)
	{
		APeekPoint *Current = Cast<APeekPoint>(PP);
		PeekPoints.Add(Current);
	}

	//ABottle * B;
	//B = Cast<ABottle>(UGameplayStatics::GetActorOfClass(World, ABottle::StaticClass()));
	//DC = Cast<UDestructibleComponent>(B->GetComponentByClass(UDestructibleComponent::StaticClass()));
	//DC = Cast<UDestructibleComponent>(B->GetComponentByClass(UDestructibleComponent::StaticClass()));

	
	//SetupBoneArrays();
	//CutInHalf();

	BodyMesh = Cast<USkeletalMeshComponent>(GetComponentsByTag(USkeletalMeshComponent::StaticClass(), FName("Body"))[0]);
	SawMesh = Cast<USkeletalMeshComponent>(GetComponentsByTag(USkeletalMeshComponent::StaticClass(), FName("Saw"))[0]);

	EyeSocket = BodyMesh->GetSocketByName(FName("EyeSocket"));
	NeckSocket = BodyMesh->GetSocketByName(FName("NeckSocket"));

	SawTip = SawMesh->GetChildComponent(0);

	// i need to make sure all grab actors are spawned before this is called
	TArray<AActor*> GrabActors;
	UGameplayStatics::GetAllActorsOfClass(World, AGrabbable::StaticClass(), GrabActors);

	CanPlayerSeeMeTraceParams.AddIgnoredActors(GrabActors);

	OpenDoorQueryParams.AddIgnoredActors(GrabActors);
	OpenDoorQueryParams.AddIgnoredActor(this);

	PeekQueryParams.AddIgnoredActors(GrabActors);
	PeekQueryParams.AddIgnoredActor(this);
	TArray<AActor*> DoorActors;
	UGameplayStatics::GetAllActorsOfClass(World, ADoor::StaticClass(), DoorActors);
	//PeekQueryParams.AddIgnoredActors(DoorActors);
	PeekQueryParams.IgnoreMask = 5;

	World->GetTimerManager().SetTimer(OpenBlockingDoorTimer, this, &AErrolCharacter::OpenDoorBlockingPath, 0.2f, true, 0.4f);
	
	World->GetTimerManager().PauseTimer(OpenBlockingDoorTimer);

	// for easier editing of starting position for the Upper Window Scare:
	TArray<AActor*> UppWinScareStartingPos;
	UGameplayStatics::GetAllActorsWithTag(World, FName("UpWinScare"), UppWinScareStartingPos);
	//UpperWindowStartingPoint = UppWinScareStartingPos[0];

	BloodSpawnLocation = Cast<USceneComponent>(GetComponentsByTag(USceneComponent::StaticClass(), FName("BSL"))[0]);

	BloodSpawnCounter = BloodSpawnTime;

	FootstepMap.Add(FName("wood"), WoodFootStepSound);
	FootstepMap.Add(FName("tile"), TileFootstepSound);
	FootstepMap.Add(FName("conc"), ConcreteFootStepSound);
	FootstepMap.Add(FName("stai"), StairFootstepSound);
	FootstepMap.Add(FName("dirt"), DirtFootStepSound);

	//

	MocapMesh->HideBoneByName(FName("Cube"), EPhysBodyOp::PBO_None);

	ErrolSaw = Cast<AErrolSaw>(UGameplayStatics::GetActorOfClass(World, AErrolSaw::StaticClass()));
	ErrolSaw->MocapMesh = MocapMesh;
	ErrolSaw->Anim2Mesh = SawMesh;
	ErrolSaw->EnterState(ErrolSawState::STATE_MOCAP);

	FlankBlocker->AddWorldOffset(FVector(0, 0, 600.f));
	FlankBlocker->SetBoxExtent(FVector(10.f, 150.f, 140.f));
}


void AErrolCharacter::SetupBoneArrays()
{/*
	//SkeletalMeshComp = Cast<USkeletalMeshComponent>(GetComponentByClass(USkeletalMeshComponent::StaticClass()));
	SkeletalMeshComp = Cast<USkeletalMeshComponent>(GetComponentsByTag(USkeletalMeshComponent::StaticClass(), TEXT("Body"))[0]);

	USkeletalMeshComponent * TopHalf = Cast<USkeletalMeshComponent>(GetComponentsByTag(USkeletalMeshComponent::StaticClass(), TEXT("Top"))[0]);

	//SkeletalMeshComp->HideBoneByName(TEXT("Head_JNT"), EPhysBodyOp::PBO_None);
	
	//SkeletalMeshComp->HideBoneByName(TEXT("Head_JNT"), EPhysBodyOp::PBO_None);
	//SkeletalMeshComp->HideBoneByName(TEXT("Spine02_JNT"), EPhysBodyOp::PBO_None);
	SkeletalMeshComp->HideBoneByName(TEXT("Neck_JNT"), EPhysBodyOp::PBO_None);
	SkeletalMeshComp->HideBoneByName(TEXT("R_Clavicle_JNT"), EPhysBodyOp::PBO_None);
	SkeletalMeshComp->HideBoneByName(TEXT("L_Clavicle_JNT"), EPhysBodyOp::PBO_None);
	TopHalf->HideBoneByName(TEXT("Root_JNT"), EPhysBodyOp::PBO_None);
	*/
	
}

void AErrolCharacter::CutInHalf()
{
	TopHalfMesh->HideBoneByName(TEXT("R_Leg_JNT"), EPhysBodyOp::PBO_MAX);
	TopHalfMesh->HideBoneByName(TEXT("L_Leg_JNT"), EPhysBodyOp::PBO_MAX);
	
	for (int i = 0; i < TopHalfBones.Num(); i++)
	{
		SkeletalMeshComp->HideBone(TopHalfBones[i], EPhysBodyOp::PBO_MAX);
	}

	//TopHalfMesh->SetAllBodiesSimulatePhysics(true);
	//TopHalfMesh->SetSimulatePhysics(true);
	//TopHalfMesh->WakeAllRigidBodies();
	//SkeletalMeshComp->SetAllBodiesSimulatePhysics(true);
	//SkeletalMeshComp->SetSimulatePhysics(true);
	//SkeletalMeshComp->WakeAllRigidBodies();
}

// Called every frame
void AErrolCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

		switch (State)
		{
		case ErrolState::STATE_IDLE:
			//UE_LOG(LogTemp, Warning, TEXT("IDLE"));
			break;
		case ErrolState::STATE_PATROL:
			//UE_LOG(LogTemp, Warning, TEXT("PATROL"));
			UpdateSpeedBasedOnRotation();
			break;
		case ErrolState::STATE_CHASE:
			//UE_LOG(LogTemp, Warning, TEXT("CHASE"));
			//ShouldKill();

			TickChaseState(DeltaTime);

			break;
		case ErrolState::STATE_PEEK:
			if (!bPeekFound)
			{
				//UE_LOG(LogTemp, Warning, TEXT("Finding Peek Point"));
				FindValidPeekPoint();
				//UpdatePeekPosition(DeltaTime);
			}
			else if(bPeeking)
			{
				ShouldEndPeek(DeltaTime); // also updates peek position
				UpdatePeekPosition(DeltaTime);
			}
			break;
		case ErrolState::STATE_SHOULDERPEEK:
			/**
			- When the player looks to their right and sees Errol,
			have Errol end the peek and disappear out of view.
			- Move Errol to a random location out of the player's view.
			*/
			break;
		case ErrolState::STATE_FLYAT:
			TickFlyAtState(DeltaTime);
			break;
		case ErrolState::STATE_KILL:
			TickKillState(DeltaTime);
			break;
		case ErrolState::STATE_UPPERWINDOWSCARE:
			TickUpperWindowScareState(DeltaTime);
			break;
		}

}

void AErrolCharacter::ShouldKill()
{
	float D = FVector::Distance(GetActorLocation(), Player->GetActorLocation());

	UE_LOG(LogTemp, Warning, TEXT("D: %f"), D);
	if (D < KillRadius)
	{
		ExitChaseState();
		EnterKillState();
	}
}

// Called to bind functionality to input
void AErrolCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AErrolCharacter::CheckFloor()
{
	const FVector WorldDownVector = FVector(0.0f, 0.0f, -1.0f);
	const FVector RTS = MocapMesh->GetSocketLocation(FName("RStep"));
	const FVector LTS = MocapMesh->GetSocketLocation(FName("LStep"));

	FHitResult RHitResult;
	FHitResult LHitResult;
	
	bool bRTrace = World->LineTraceSingleByChannel(RHitResult, RTS, RTS + WorldDownVector * 5.0f, ECollisionChannel::ECC_WorldStatic, CanPlayerSeeMeTraceParams);
	bool bLTrace = World->LineTraceSingleByChannel(RHitResult, LTS, LTS + WorldDownVector * 5.0f, ECollisionChannel::ECC_WorldStatic, CanPlayerSeeMeTraceParams);

	if (bRTrace)
	{
		UpdateFootstepSound(RHitResult, false, RightFootStepSound);
	}
	if (bLTrace)
	{
		UpdateFootstepSound(LHitResult, true, LeftFootStepSound);
	}
}

void AErrolCharacter::UpdateFootstepSound(FHitResult & HitResult, bool bLeft, USoundCue * FootstepSound)
{	
	TArray<FName> &Tags = HitResult.Component->ComponentTags;

	if (Tags.Num() > 0)
	{
		for (auto &t : Tags)
		{
			USoundCue * Ptr = FootstepMap.FindRef(t);
			if (Ptr != nullptr)
			{
				FootstepSound = Ptr;
			}
		}
	}
}

void AErrolCharacter::Patrol()
{
	// Move to random places on Nav Mesh with distance from player based on a variable.
}

ATargetPoint * AErrolCharacter::GetRandomWaypoint()
{
	auto index = FMath::RandRange(0, Waypoints.Num() - 1);
	return Cast<ATargetPoint>(Waypoints[index]);
}

void AErrolCharacter::GoToRandomWaypoint()
{
	ErrolController->MoveToActor(GetRandomWaypoint(), 1.f, true, true, true);
	

	//AAIController * AICon = Cast<AAIController>(GetController());
	//AICon->MoveToActor(GetRandomWaypoint(), -1.f, true, true, true);
}

bool AErrolCharacter::CanThePlayerSeeMe()
{
	bool bCanThePlayerSeeMe = false;

	TArray<FVector> BoneLocations;

	const FVector HeadLocation = BodyMesh->GetBoneLocation(FName("joint8"));
	const FVector ChestLocation = BodyMesh->GetBoneLocation(FName("Spine01_JNT"));
	const FVector CrotchLocation = BodyMesh->GetBoneLocation(FName("COG_JNT"));

	const FVector RightShoulderLocation = BodyMesh->GetBoneLocation(FName("R_Shoulder_JNT"));
	const FVector LeftShoulderLocation = BodyMesh->GetBoneLocation(FName("L_Shoulder_JNT"));
	const FVector RightKneeLocation = BodyMesh->GetBoneLocation(FName("R_Knee_JNT"));
	const FVector LeftKneeLocation = BodyMesh->GetBoneLocation(FName("L_Knee_JNT"));

	const FVector RightElbowLocation = BodyMesh->GetBoneLocation(FName("R_Elbow_JNT"));
	const FVector LeftElbowLocation = BodyMesh->GetBoneLocation(FName("L_Elbow_JNT"));

	const FVector RightHandLocation = BodyMesh->GetBoneLocation(FName("R_Hand_JNT"));
	const FVector LeftHandLocation = BodyMesh->GetBoneLocation(FName("L_Hand_JNT"));
	const FVector RightFootLocation = BodyMesh->GetBoneLocation(FName("R_Ankle_JNT"));
	const FVector LeftFootLocation = BodyMesh->GetBoneLocation(FName("L_Ankle_JNT"));
	const FVector SawTipLocation = SawTip->GetComponentLocation();

	BoneLocations.Add(HeadLocation);
	BoneLocations.Add(ChestLocation);
	BoneLocations.Add(CrotchLocation);
	BoneLocations.Add(RightHandLocation);
	BoneLocations.Add(LeftHandLocation);
	BoneLocations.Add(RightFootLocation);
	BoneLocations.Add(LeftFootLocation);
	BoneLocations.Add(RightShoulderLocation);
	BoneLocations.Add(LeftShoulderLocation);
	BoneLocations.Add(RightKneeLocation);
	BoneLocations.Add(LeftKneeLocation);
	BoneLocations.Add(RightElbowLocation);
	BoneLocations.Add(LeftElbowLocation);

	BoneLocations.Add(SawTipLocation);

	APlayerController * PlayerController = UGameplayStatics::GetPlayerController(World, 0);

	const FVector2D ViewportSize = FVector2D(GEngine->GameViewport->Viewport->GetSizeXY());

	for (FVector BoneLocation : BoneLocations)
	{

		// trace from player camera to bone location
		// if trace hits ErrolCharacter
		// project ImpactPoint to screen
		// if on screen then return true.

		if (PlayerCamera != nullptr)
		{
			const FVector CL = PlayerCamera->GetComponentLocation();
			FHitResult HitResult;
			bool bCameraTrace = World->LineTraceSingleByChannel(HitResult, CL, BoneLocation, ECollisionChannel::ECC_Visibility, CanPlayerSeeMeTraceParams);

			// trace hit me
			if (bCameraTrace && HitResult.Actor == this)
			{
				const FVector HitLocation = HitResult.ImpactPoint;

				FVector2D HitLocationOnScreen;
				PlayerController->ProjectWorldLocationToScreen(HitLocation, HitLocationOnScreen, true);

				if (HitLocationOnScreen.X > 0.1f && HitLocationOnScreen.X <= ViewportSize.X)
				{
					if (HitLocationOnScreen.Y > 0.1f && HitLocationOnScreen.Y <= ViewportSize.Y)
					{
						bCanThePlayerSeeMe = true;
						break;
					}
				}
			}
		}
		

		/*
		FVector2D BoneLocationOnScreen;
		PlayerController->ProjectWorldLocationToScreen(BoneLocation, BoneLocationOnScreen, true);

		if (BoneLocationOnScreen.X > 0.1f && BoneLocationOnScreen.X <= ViewportSize.X)
		{
			if (BoneLocationOnScreen.Y > 0.1f && BoneLocationOnScreen.Y <= ViewportSize.Y)
			{
				bCanThePlayerSeeMe = true;
				break;
			}
		}
		*/
	}

	return bCanThePlayerSeeMe;
}

void AErrolCharacter::EnterIdleState()
{
	State = ErrolState::STATE_IDLE;
	UpdateAnimation(State);
}

void AErrolCharacter::EnterPatrolState()
{
	State = ErrolState::STATE_PATROL;
	GetCharacterMovement()->MaxWalkSpeed = PatrolSpeed;
	UpdateAnimation(State);
	GoToRandomWaypoint();
}


void AErrolCharacter::EnterChaseState(float MaxSpeed)
{
	State = ErrolState::STATE_CHASE;

	// smoothly increase errols speed to ChaseSpeed
	// update the animation in case we are not in a state connected to the idle/walk/run blend space.
	// start TickChaseState()

	// TickChaseState:
	// Update Speed and kill radius based on if the player is looking at Errol or not.
	// TryToMarkForDeath();
	
	// If Errol gets in the KillRadius, then fly at the player and 'mark them for death' where we roll based on the GameState to see if
	// we should kill the player.

	// GameState will have a float called fShouldKill representing the GetRandomNumber between 0 and fShouldKill that decides if we should kill the player.
	// EachState decrement fShouldKill and if the player is killed then increase fShouldKill by a lot so they are very unlucky if they are killed.

	UE_LOG(LogTemp, Warning, TEXT("Chase!"));

	MocapMesh->SetVisibility(true);

	//SetActorEnableCollision(true);
	GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	//GetCapsuleComponent()->SetSimulatePhysics(true);

	bSprintAtPlayer = true;
	ChaseSpeed = MaxSpeed;
	UpdateAnimation(State);
	GetCharacterMovement()->MaxWalkSpeed = MaxSpeed;
	ErrolController->MoveToActor(Player, 10.f, false, true, false, 0, false); //KillRadius);
	World->GetTimerManager().UnPauseTimer(OpenBlockingDoorTimer);

	ErrolSaw->EnterState(ErrolSawState::STATE_MOCAP);
}

void AErrolCharacter::TickChaseState(float DeltaTime)
{
	
	if (bSprintAtPlayer) // when chase starts, speed up to a sprint
	{
		SprintAtPlayer(DeltaTime);
	}
	else if (bUpdateMoveSpeedBasedOnPlayerCamera) // slow move speed when Errol is not in view
	{
		UpdateMoveSpeedBasedOnPlayerCamera(DeltaTime);
	}
	// update kill distance based on player camera
	// ShouldFlyAtPlayer() // check distance to the player, when it is less than KillDistance, then fly at the player

	// THIS NEEDS TO BE THE PATH DISTANCE, NOT "AS THE CROW FLIES"
	float Dist = FVector::Dist(GetActorLocation(), Player->GetActorLocation());

	//UE_LOG(LogTemp, Warning, TEXT("Dist: %f"), Dist);

	if (bKillImmediately)
	{
		if (Dist < ChaseKillDistance)
		{
			
			ExitChaseState();
			EnterKillState();
			MocapMesh->SetVisibility(false);
			BodyMesh->SetVisibility(true);
			UpdateAnimation(State);
			return;
		}
	}
	else
	{
		if (Dist < MaxFlyAtDistance)
		{
			ExitChaseState();
			EnterFlyAtState();
			FlyAtPlayer();
			MocapMesh->SetVisibility(false);
			BodyMesh->SetVisibility(true);
			return;
		}
	}

	//UE_LOG(LogTemp, Warning, TEXT("Speed: %f"), GetCharacterMovement()->Velocity.Size());
	
	/*
	if (ShouldIMarkPlayerForDeath())
	{
		ExitChaseState();
		EnterFlyAtState();
		return;
	}
	*/

	UpdateAnimation(State);
}

void AErrolCharacter::OpenDoorBlockingPath()
{
	// set this to call on a timer every 0.3 secs or so...
	// line trace from 2 path segments, if one hits a door, then set bErrolOpened = true for the door.
	// if a line trace hits, check if bErrolOpened == false, if so then set it to true,
	// open the door using curve (when the door is fully opened, bErrolOpened = false again
	const FVector AL = GetActorLocation();
	const FVector PL = Player->GetActorLocation();

	UNavigationPath * Path = NavigationSystem->FindPathToLocationSynchronously(World, PL, AL);
	TArray<FVector> PathPoints = Path->PathPoints;
	const int n = PathPoints.Num();
	int Distance = 0;

	if (n >= 2)
	{
		float DistanceSum = 0;
		for (int i = n-1; i > n - 4; --i)
		{
			if (i == n - 3 && n < 4)
			{
				break;
			}

			FVector P1 = PathPoints[i];
			FVector P2 = PathPoints[i - 1];
			P1.Z += GetCapsuleComponent()->GetScaledCapsuleHalfHeight();
			P2.Z += GetCapsuleComponent()->GetScaledCapsuleHalfHeight();

			FVector Dir = (P2 - P1);
			float SegmentDistance = Dir.Size();

			Dir = Dir.GetSafeNormal();

			DistanceSum += SegmentDistance;

			SegmentDistance = (SegmentDistance > OpenDoorDistance) ? OpenDoorDistance : SegmentDistance;

			TArray<FHitResult> HitResults;
			bool bTrace = World->LineTraceMultiByChannel(HitResults, P1, P1 + Dir * SegmentDistance, ECollisionChannel::ECC_WorldDynamic, OpenDoorQueryParams);

			//DrawDebugLine(World, P1, P1 + Dir * SegmentDistance, FColor::Magenta, false, World->DeltaTimeSeconds * 1.1f);

			if (bTrace)
			{
				for (FHitResult HR : HitResults)
				{
					ADoor * HitDoorCast = Cast<ADoor>(HR.GetActor());
					if (HitDoorCast != nullptr)
					{
						//open door using curve

						// call blueprint function: OpenDoorDuringChase()
						// sets the door curve, zeroes out the duration, and sets bOpenDoorFast to true
						DoorBlockingPath = HitDoorCast;
						OpenDoor();

						return;
					}
				}
			}


			if (n < 3 || DistanceSum >= OpenDoorDistance)
			{
				break;
			}
		}
	}

}

void AErrolCharacter::EnterInvestigateState()
{
	// Move to InvestigateLocation and look around
	State = ErrolState::STATE_INVESTIGATE;
	float * MWS = &GetCharacterMovement()->MaxWalkSpeed;
	//*MWS = (*MWS == PatrolSpeed) ? InvestigateSpeed : *MWS;
	if (*MWS == PatrolSpeed) { *MWS = InvestigateSpeed; }
	ErrolController->StopTimers();
	UpdateAnimation(State);
	ErrolController->MoveToLocation(InvestigateLocation);
}

void AErrolCharacter::EnterKillState()
{
	State = ErrolState::STATE_KILL;

	if (bKillImmediately)
	{
		KillLocation = GetActorLocation();
		bFindKillLocation = false;
		KillPlayer();
	}
	else
	{
		bFindKillLocation = true;
		FVector RV = PlayerCamera->GetRightVector();
		float Dot = FVector::DotProduct(WorldUpVector, RV);
		const FVector ScaledUp = WorldUpVector * Dot;
		KillSweepVector = RV - ScaledUp;
		KillSweepVector.Normalize();
	}
	
	//

	//GetWorld()->GetTimerManager().ClearTimer(ChaseTimerHandle);
	//GetCharacterMovement()->MaxWalkSpeed = KillSpeed;
	//UpdateAnimation(State);
}

void AErrolCharacter::TickKillState(float DeltaTime)
{
	if (bFindKillLocation)
	{
		FindKillLocation();
	}
	else if (bSpawnBlood)
	{
		UE_LOG(LogTemp, Warning, TEXT("Spawnig blood"));
		SpawnBlood(DeltaTime);
	}
}

void AErrolCharacter::EndKillState()
{
}

void AErrolCharacter::FindKillLocation()
{
	KillSweepVector = KillSweepVector.RotateAngleAxis(4.0f, WorldUpVector);
	FVector VRRootLocation = VRRoot->GetComponentLocation();
	FCollisionShape SweepShape;
	SweepShape.SetSphere(40.f);
	const FVector SweepStart = VRRootLocation + (WorldUpVector * 44.0f) + (KillSweepVector * KillDistance);
	const FVector SweepEnd = SweepStart + WorldUpVector * 120.0f;
	FHitResult HitResult;
	bool bSweep = World->SweepSingleByChannel(HitResult, SweepStart, SweepEnd, FQuat(FVector::ZeroVector, 0), ECollisionChannel::ECC_WorldStatic, SweepShape, CanPlayerSeeMeTraceParams);

	DrawDebugLine(World, SweepStart, SweepEnd, FColor::Orange, false, World->DeltaTimeSeconds * 1.1f);

	if (!bSweep)
	{
		bFindKillLocation = false;
		DrawDebugCapsule(World, VRRoot->GetComponentLocation() + KillSweepVector * 30.f, 105.f, 20.f, GetActorQuat(), FColor::Cyan, true);
		float CapsuleHalfHeight = GetCapsuleComponent()->GetScaledCapsuleHalfHeight();
		KillLocation = VRRootLocation + (KillSweepVector * KillDistance) + (WorldUpVector * CapsuleHalfHeight);
		KillPlayer();
	}
	else
	{
		DrawDebugSphere(World, HitResult.ImpactPoint, 10.f, 10.f, FColor::Purple, false, World->DeltaTimeSeconds * 1.1f);
	}
	// capsule sweep next to the player until one of them hits or we get to the end (no valid spot located).
}

void AErrolCharacter::KillPlayer()
{
	UpdateAnimation(State);
	FVector KillDisp = PlayerCamera->GetComponentLocation() - KillLocation;
	FRotator NewRotation = KillDisp.Rotation();
	FRotator CurrentRotation = GetActorRotation();
	CurrentRotation.Yaw = NewRotation.Yaw;
	SetActorRotation(CurrentRotation);
	SetActorLocation(KillLocation);

	AVRCharacter * VRChar = Cast<AVRCharacter>(Player);
	VRChar->Controller->SetIgnoreMoveInput(true);
	VRChar->Controller->SetIgnoreLookInput(true);

	FRotator PlayerRotation = Player->GetActorRotation();
	FRotator CameraRotation = PlayerCamera->GetComponentRotation();
	float CameraDeltaYaw = PlayerRotation.Yaw - CameraRotation.Yaw;
	NewRotation = (-KillDisp).Rotation();
	PlayerRotation.Yaw = NewRotation.Yaw;
	PlayerRotation.Yaw += CameraDeltaYaw;
	VRChar->Controller->SetControlRotation(PlayerRotation);
	Player->SetActorRotation(PlayerRotation);

	BodyMesh->SetVisibility(true);
	//SawMesh->SetVisibility(true);

	ErrolSaw->EnterState(ErrolSawState::STATE_ANIM2);

	FTimerHandle PlayerDeathHandle;
	GetWorldTimerManager().SetTimer(PlayerDeathHandle, VRChar, &AVRCharacter::Die, 1.8f, false, 1.8f);

	UGameplayStatics::PlaySound2D(World, PlayerDeathSound, 1.0f, 1.0f);
}

void AErrolCharacter::EnterLookAroundState()
{
	LastState = State;
	State = ErrolState::STATE_LOOKAROUND;
	UpdateAnimation(State);
}

void AErrolCharacter::EnterPeekState()
{
	State = ErrolState::STATE_PEEK;
	PeekState = ErrolPeekState::STATE_WAITPEEK;
	bPeeking = true;
	UpdateAnimation(State);
	//SetActorEnableCollision(false);
	//DisableComponentsSimulatePhysics();

	GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	GetCapsuleComponent()->SetSimulatePhysics(false);

	BodyMesh->SetVisibility(false, true);
	SawMesh->SetVisibility(false, true);
	MocapMesh->SetVisibility(false, true);

	ErrolSaw->EnterState(ErrolSawState::STATE_INVISIBLE);
	//	Try to find a "valid" PeekPoint
	//	Move ErrolCharacter to the PeekPoint
	//	Start the peek animation
	//	Wait for a specified time, or until the player looks at Errol
	//	EndPeek
	//	Choose to either, Disappear, Stand still and wait for the player to come closer, Chase the player, find a different path to the player and stalk them
}

void AErrolCharacter::FindValidPeekPoint()
{
	
	int CurrentFrameChecks = 0;
	while (CurrentFrameChecks < 3 && PeekCounter < PeekPoints.Num())
	{
		APeekPoint *Current = PeekPoints[PeekCounter];
		if (Current->IsValid(0) && Current->bDisabled == false)
		{
			ValidPeekPoint = PeekPoints[PeekCounter];
			LeftPeekVector = ValidPeekPoint->LeftPeekVector->GetForwardVector();
			RightPeekVector = ValidPeekPoint->RightPeekVector->GetForwardVector();

			bPeekFound = true;
			StartPeek();
			return;
		}

		++CurrentFrameChecks;
		++PeekCounter;
	}
	if (PeekCounter >= PeekPoints.Num())
	{
		PeekCounter = 0;
	}
	
}

void AErrolCharacter::ExitPeekState()
{
	State = ErrolState::STATE_IDLE;
	PeekState = ErrolPeekState::STATE_IDLE;
	bLeftPeek = false;
	
	bPeekFound = false;
	bPeeking = false;
	bPeekOnScreen = false;
	PeekScareLevel = 0;
	PeekTime = 0;
	BodyMesh->SetVisibility(false, true);
	MocapMesh->SetVisibility(false, true);

	if (ValidPeekPoint != nullptr)
	{
		ValidPeekPoint->ErrolPeekSide = APeekPoint::PeekSide::Uninitialized;
	}
	EndPeekAnimation();
	UpdateAnimation(State);
}

void AErrolCharacter::ExitShoulderPeekState()
{
}

void AErrolCharacter::EnterShoulderPeekState()
{
	/**
		- Remove all collision and shadows.
		- Attach Errol to the player camera and move him directly behind it.
		- Move Errol to the right side of the player's camera out of view.
		- Change animation to a shoulder peek blend space
	*/
	SetActorEnableCollision(false);
	DisableComponentsSimulatePhysics();
	//BodyMesh->SetVisibility(false, true);
	SawMesh->SetVisibility(false, true);
	AttachToComponent(PlayerCamera, FAttachmentTransformRules::SnapToTargetNotIncludingScale);
}

void AErrolCharacter::SpawnBlood(float DeltaTime)
{
	BloodSpawnCounter += DeltaTime;

	if (BloodSpawnCounter > BloodSpawnTime)
	{
		BloodSpawnCounter = 0;

		FActorSpawnParameters SpawnParams;

		World->SpawnActor<AActor>(BloodFXActor, BloodSpawnLocation->GetComponentTransform());
	}
}

void AErrolCharacter::ExitIdleState()
{
	
}

void AErrolCharacter::ExitPatrolState()
{
	State = ErrolState::STATE_IDLE;
	ErrolController->StopTimers();
	ErrolController->StopMovement();
}

void AErrolCharacter::UpdateMoveSpeedBasedOnPlayerCamera(float DeltaTime)
{
	FVector CV = PlayerCamera->GetForwardVector();
	FVector Disp = EyeSocket->GetSocketLocation(BodyMesh) - PlayerCamera->GetComponentLocation();
	Disp = Disp.GetSafeNormal();

	float Dot = FVector::DotProduct(CV, Disp) + 0.5f;

	const float CurrentSpeed = GetCharacterMovement()->MaxWalkSpeed;

	if (Dot < 0.5f)
	{
		Dot = 0.66f;
		AVRCharacter *VRChar = Cast<AVRCharacter>(Player);
		if (VRChar->bIsUsingDoor)
		{
			Dot = 0.35f;
		}
	}
	else if (Dot > 0.6f)
	{
		Dot = 1.0f;
	}

	GetCharacterMovement()->MaxWalkSpeed = FMath::FInterpTo(CurrentSpeed, ChaseSpeed * Dot, DeltaTime, UpdateSpeedBasedOnPlayerCameraSpeed);
}

void AErrolCharacter::SprintAtPlayer(float DeltaTime)
{
	float MaxWalkSpeed = GetCharacterMovement()->MaxWalkSpeed;
	GetCharacterMovement()->MaxWalkSpeed = FMath::FInterpTo(MaxWalkSpeed, ChaseSpeed, DeltaTime, SprintSpeedUpSpeed);

	if (GetCharacterMovement()->MaxWalkSpeed == ChaseSpeed)
	{
		bSprintAtPlayer = false;
		//bUpdateMoveSpeedBasedOnPlayerCamera = true;
	}
}

bool AErrolCharacter::ShouldIMarkPlayerForDeath()
{
	int DeathNum = FMath::RandRange(1, KillChance);

	if (DeathNum == 1)
	{
		return true;
	}
	return false;
}

void AErrolCharacter::ExitChaseState()
{
	bSprintAtPlayer = true;
	bUpdateMoveSpeedBasedOnPlayerCamera = false;
	ErrolController->StopMovement();
	World->GetTimerManager().PauseTimer(OpenBlockingDoorTimer);
}

void AErrolCharacter::EnterFlyAtState()
{
	State = ErrolState::STATE_FLYAT;
	UpdateAnimation(State);
	GetCharacterMovement()->MaxWalkSpeed = FlyAtSpeed;
	ErrolController->MoveToActor(Player);
	bFlyAt = true;
	
	AVRCharacter * VC = Cast<AVRCharacter>(Player);
	//VC->SetBlinkerRadius(0.12f);
	UCameraComponent * PC = Cast<UCameraComponent>(PlayerCamera);
	//PC->bLockToHmd = false;
}

void AErrolCharacter::TickFlyAtState(float DeltaTime)
{
	if (bFlyThrough)
	{
		//UE_LOG(LogTemp, Warning, TEXT("FLYTHOUGH"));
		FVector CL = PlayerCamera->GetComponentLocation();
		FVector CBV = -PlayerCamera->GetForwardVector();
		FVector GoalLocation = CL + CBV * 50.0f;
		SetActorLocation(FMath::VInterpConstantTo(GetActorLocation(), GoalLocation, DeltaTime, 1000.f));

		float Dist = FVector::Dist(GetActorLocation(), GoalLocation);
		if (Dist < 1.0f)
		{
			BodyMesh->SetVisibility(false);
			SawMesh->SetVisibility(false);
		}
	}
	else if (bFlyAt)
	{
		float Dist = FVector::Dist(GetActorLocation(), Player->GetActorLocation());
		if (Dist < FlyThroughDistance)
		{
			bFlyThrough = true;
			SetActorEnableCollision(false);
			ErrolController->StopMovement();
		}
	}
}

void AErrolCharacter::EndFlyAtState()
{
}

void AErrolCharacter::ExitInvestigateState()
{
}

void AErrolCharacter::ExitLookAroundState()
{
	State = LastState;
	UpdateAnimation(State);
}

void AErrolCharacter::InitializeCanSeeVariables() // this function is a mess
{
	//UE_LOG(LogTemp, Warning, TEXT("Initalize can see!"));
	GetWorld()->GetTimerManager().ClearTimer(SetUpCanSeeHandle);
	Player = Cast<AActor>(UGameplayStatics::GetActorOfClass(GetWorld(), AVRCharacter::StaticClass()));
	AVRCharacter * TempC = Cast<AVRCharacter>(Player);
	LHandController = Cast<AActor>(TempC->LeftController);
	RHandController = Cast<AActor>(TempC->RightController);
	UActorComponent * TempAC = Player->GetComponentByClass(UCameraComponent::StaticClass());
	PlayerCamera = Cast<UCameraComponent>(TempAC);
	VRRoot = Cast<USceneComponent>(Player->GetComponentsByTag(USceneComponent::StaticClass(), FName("VRRoot"))[0]);
	OpenDoorQueryParams.AddIgnoredActor(Player); 

	InitializePerceptionTimers();

	CanPlayerSeeMeTraceParams.AddIgnoredActor(Player);
	CanPlayerSeeMeTraceParams.AddIgnoredActor(LHandController);
	CanPlayerSeeMeTraceParams.AddIgnoredActor(RHandController);
	//PeekQueryParams.AddIgnoredActor(Player);
	//	Debug
	EnterPeekState();

	//EnterUpperWindowScareState();

	//EnterChaseState(ChaseSpeed);
}

void AErrolCharacter::InitializePerceptionTimers()
{
	GetWorld()->GetTimerManager().SetTimer(ChaseTimerHandle, this, &AErrolCharacter::SetSeeGauge, SeeTimerRate, true);
}

void AErrolCharacter::SetSeeGauge()
{	
	//UE_LOG(LogTemp, Warning, TEXT("See: %d"), CanSeeHitCounter);
	FHitResult Outhit;
	FCollisionQueryParams EyeParams;
	EyeParams.AddIgnoredActor(this);
	EyeParams.AddIgnoredActor(Player);
	FVector EyeLocation = ErrolEye->GetComponentLocation();
	FVector CameraLocation = PlayerCamera->GetComponentLocation();
	FVector LHCLocation = LHandController->GetActorLocation();
	FVector RHCLocation = RHandController->GetActorLocation();

	bool Trace1 = World->LineTraceSingleByChannel(Outhit, EyeLocation, CameraLocation, ECollisionChannel::ECC_WorldDynamic, EyeParams);
	bool Trace2 = World->LineTraceSingleByChannel(Outhit, EyeLocation, LHCLocation, ECollisionChannel::ECC_WorldDynamic, EyeParams);
	bool Trace3 = World->LineTraceSingleByChannel(Outhit, EyeLocation, RHCLocation, ECollisionChannel::ECC_WorldDynamic, EyeParams);

	//UE_LOG(LogTemp, Warning, TEXT("See: %d"), CanSeeHitCounter);
	/*
	// Debug stuff //////
	if (!Trace1)
	{
		UE_LOG(LogTemp, Warning, TEXT("I see camera!"));
		DrawDebugLine(World, EyeLocation, CameraLocation, FColor::Orange, false, World->DeltaTimeSeconds * 2.f);
		//CanSeeHitCounter++;
	}
	if (!Trace2)
	{
		UE_LOG(LogTemp, Warning, TEXT("I see Left hand!"));
		DrawDebugLine(World, EyeLocation, LHCLocation, FColor::Red, false, World->DeltaTimeSeconds * 2.f);
		//CanSeeHitCounter++;
	}
	if (!Trace3)
	{
		UE_LOG(LogTemp, Warning, TEXT("I see Right hand!"));
		DrawDebugLine(World, EyeLocation, RHCLocation, FColor::Cyan, false, World->DeltaTimeSeconds * 2.f);
		//CanSeeHitCounter++;
	}
	// Debug stuff //////
	*/
	if (Trace1 && Trace2 && Trace3)
	{
		CanSeeHitCounter -= 1;	// or maybe -= 2;
		if (CanSeeHitCounter < 0) { CanSeeHitCounter = 0; }
	}
	else
	{
		FVector Dif = Player->GetActorLocation() - EyeLocation;
		int DifLen = Dif.Size();
		UKismetMathLibrary::Vector_Normalize(Dif);
		FVector EV = ErrolEye->GetForwardVector();
		float Dot = FVector::DotProduct(Dif, EV);
		int ChaseGauge = 0;

		if (Dot > SeeDotThreshold)
		{
			if (!Trace1) { CanSeeHitCounter++; }
			if (!Trace2) { CanSeeHitCounter++; }
			if (!Trace3) { CanSeeHitCounter++; }
			if (CanSeeHitCounter > 25) { CanSeeHitCounter = 25; }

			if (DifLen < 300.f && CanSeeHitCounter > 3)
			{
				//UE_LOG(LogTemp, Warning, TEXT("I SEE U MOTHAFUCKA"));
				ChaseGauge = 5;
			}
			else if (Dot > 0.9f && CanSeeHitCounter > 6)
			{
				//UE_LOG(LogTemp, Warning, TEXT("I SEE U MOTHAFUCKA"));
				ChaseGauge = 4;
			}
			else if (Dot > 0.75f && CanSeeHitCounter > 10)
			{
				//UE_LOG(LogTemp, Warning, TEXT("I SEE U MOTHAFUCKA"));
				ChaseGauge = 3;
			}
			else if (Dot > 0.35f && CanSeeHitCounter > 17)
			{
				//UE_LOG(LogTemp, Warning, TEXT("I SEE U MOTHAFUCKA"));
				ChaseGauge = 2;
			}
			else if(CanSeeHitCounter > 24)
			{
				//UE_LOG(LogTemp, Warning, TEXT("I SEE U MOTHAFUCKA"));
				ChaseGauge = 1;
			}

			if (ChaseGauge != 0)
			{
				switch (State)
				{
				case ErrolState::STATE_PATROL:
					ExitPatrolState();
					//EnterChaseState();
					break;
				case ErrolState::STATE_LOOKAROUND:
					ExitLookAroundState();
					//EnterChaseState();
					break;
				case ErrolState::STATE_CHASE:
					//	Move to random point on sphere where player is, moving farther away depending on how high ChaseGauge is.
					break;
				}
			}
		}
		else
		{
			CanSeeHitCounter -= 1;
			if (CanSeeHitCounter < 0) { CanSeeHitCounter = 0; }
		}
	}
}

void AErrolCharacter::SetHearGauge()
{

}

void AErrolCharacter::SetSeeFlashlightGauge()
{

}

void AErrolCharacter::SetDetectionGauge()
{

}

void AErrolCharacter::ShouldChase()
{
	if (DetectionGauge > DetectionThreshold)
	{
		EnterChaseState(ChaseSpeed);
		// Exit Current State
	}
}

void AErrolCharacter::UpdateSpeedBasedOnRotation()
{
	FVector Vel = GetVelocity();
	UKismetMathLibrary::Vector_Normalize(Vel);
	float Dot = FVector::DotProduct(Vel, GetActorForwardVector());
	//UE_LOG(LogTemp, Warning, TEXT("d: %f"), Dot);
	switch (State)
	{
	case ErrolState::STATE_PATROL:
		//GetCharacterMovement()->MaxWalkSpeed = PatrolSpeed - (PatrolSpeed * Dot);
		if (Dot > 0)
		{
			Dot = FMath::Clamp(Dot, 0.1f, 1.0f);
			GetCharacterMovement()->MaxWalkSpeed = PatrolSpeed * Dot;
		}
		else
		{
			GetCharacterMovement()->MaxWalkSpeed = PatrolSpeed;
		}
		break;
	}
}

// I will call this function for any noise that the player creates (bottles, doors, sprinting). 
void AErrolCharacter::HearSound(AActor * Bottle, int ActorInt, int Loudness)
{
	FVector BL = Bottle->GetActorLocation();
	FVector AL = GetActorLocation();
	UNavigationPath * Path = NavigationSystem->FindPathToLocationSynchronously(World, BL, AL);
	TArray<FVector> PathPoints = Path->PathPoints;
	int Distance = 0;
	int PathPointsNum = PathPoints.Num();
	PathPointsNum = (PathPointsNum > 10) ? 10 : PathPointsNum;

	// I don't really think this is a possible path, but if I ever read this log i'm gonna be scared
	if (PathPointsNum < 2)
	{
		UE_LOG(LogTemp, Warning, TEXT("ERRROROROROROROROROOR PathBOTTLESTUFF"));
	}
	else 
	{
		for (int i = 1; i < PathPointsNum; i++)
		{
			FVector V1 = PathPoints[i];
			FVector V2 = PathPoints[i - 1];
			Distance += UKismetMathLibrary::Vector_DistanceSquared(V1, V2);
			// next two lines are for debugging
			V1.Z += 10.f; V2.Z += 10.f;
			//DrawDebugLine(World, V1, V2, FColor::Orange, true);
		}
	}
	Distance >>= 13;
	Distance *= PathPointsNum;
	//UE_LOG(LogTemp, Warning, TEXT("pp: %d"), Distance);

	// Set InvestigateLocation to be somewhere near the bottle based on the path distance with differences based on ActorInt
	FNavLocation NavLoc;
	bool bFoundNav = NavigationSystem->GetRandomReachablePointInRadius(BL, Distance, NavLoc);
	if (bFoundNav)
	{
		InvestigateLocation = NavLoc.Location;
		//Exit current state
		switch (State)
		{
		case ErrolState::STATE_PATROL:
			ExitPatrolState();
			EnterInvestigateState();
			break;
		case ErrolState::STATE_CHASE:
			break;
		}
	}
	//DrawDebugSphere(World, BL, Distance, 20, FColor::Orange, true);
	DrawDebugSphere(World, NavLoc.Location, 10.f, 10, FColor::Red, true);
	//Enter Investigate State
}

void AErrolCharacter::StartPeek()
{
	FVector PeekLocation = ValidPeekPoint->HeadLocation;
	//	Find whether this is a right or left peek
	FVector Disp = PlayerCamera->GetComponentLocation() - PeekLocation;
	Disp.Z = 0;

	//DrawDebugLine(World, PeekLocation, PlayerCamera->GetComponentLocation(), FColor::Red, true);
	
	//	if player is on the left side of the peek vector, make Errol do a left peek, right side: vice versa
	float Dot = FVector::DotProduct(Disp, RightPeekVector);

	//UE_LOG(LogTemp, Warning, TEXT("Dot: %f"), Dot);

	/*
	//	if Dot = 0 then 50/50 it will be a wrong sided peek
	if (Dot < 0)
	{
		SetActorScale3D(FVector(1.0f, -1.0f, 1.0f));
		bLeftPeek = true;
	}
	*/

	if (ValidPeekPoint->ErrolPeekSide == APeekPoint::PeekSide::Left)
	{
		PeekState = ErrolPeekState::STATE_LEFTPEEK;
	}
	else
	{
		PeekState = ErrolPeekState::STATE_RIGHTPEEK;
	}
	StartPeekAnimation();

	FRotator Rot;
	if (PeekState == ErrolPeekState::STATE_LEFTPEEK)
	{
		//	set animation to left peek animation here
		Rot = LeftPeekVector.Rotation();
	}
	else
	{
		//	set animation to right peek animation here
		Rot = RightPeekVector.Rotation();
	}
	Rot.Pitch = 0;
	SetActorRotation(Rot);

	FVector ErrolPeekLocation = ValidPeekPoint->GetActorLocation();
	ErrolPeekLocation.Z += GetCapsuleComponent()->GetScaledCapsuleHalfHeight();
	SetActorLocation(ErrolPeekLocation);
	BodyMesh->SetVisibility(true);

	// open the peek door if there is one (I might want to change this function so that Errol peeks after the door is open).
	ADoor *PeekDoor = ValidPeekPoint->PeekDoor;

	if (PeekDoor != nullptr)
	{
		PeekDoor->CurrentCurve = PeekDoorCurve;
		PeekDoor->bOpenDoorUsingCurve = true;
	}

	UpdateFlankBlocker();

}


void AErrolCharacter::ShouldEndPeek(float DeltaTime)
{
	//	End the peek after:
	//	- A certain time if the player doesn't look
	//	- If the player looks at Errol for too long: DotProduct(Disp, CameraVector) * DeltaTime > LookThreshold
	//	- If the peek angle is too shallow
	// 

	// check if peek has gone on too long
	PeekTime += DeltaTime;
	if (PeekTime > MaxPeekTime)
	{
		bPeeking = false;
		EndPeek();
		return;
	}

	//UE_LOG(LogTemp, Warning, TEXT("Peek Time: %f"), PeekTime);

	//	Is on screen:
	FVector Disp = EyeSocket->GetSocketLocation(BodyMesh) - PlayerCamera->GetComponentLocation();
	Disp = Disp.GetSafeNormal();
	FVector CFV = PlayerCamera->GetForwardVector();
	float Dot = FVector::DotProduct(Disp, CFV);

	FVector2D ScreenPosition;
	APlayerController *PlayerController = UGameplayStatics::GetPlayerController(World, 0);
	UGameplayStatics::ProjectWorldToScreen(PlayerController, EyeSocket->GetSocketLocation(BodyMesh), ScreenPosition, true);

	bool bPeekCurrentlyOnScreen = false;
	
	const FVector2D ViewportSize = FVector2D(GEngine->GameViewport->Viewport->GetSizeXY());

	//UE_LOG(LogTemp, Warning, TEXT("%f, %f"), ScreenPosition.X, ScreenPosition.Y);

	if (Dot > 0)
	{
		if (ScreenPosition.X > 1.f && ScreenPosition.X < ViewportSize.X)
		{
			if (ScreenPosition.Y > 1.f && ScreenPosition.Y < ViewportSize.Y)
			{
				//UE_LOG(LogTemp, Warning, TEXT("ON SCREEN"));
				//UE_LOG(LogTemp, Warning, TEXT("Scare Level: %f"), PeekScareLevel);
				bPeekOnScreen = true;
				bPeekCurrentlyOnScreen = true;
				PeekScareLevel += (1 / (1 - Dot)) * DeltaTime;

				if (PeekScareLevel > PeekScareThreshold)
				{
					bPeeking = false;
					EndPeek();
					return;
				}
			}
			else
			{
				//UE_LOG(LogTemp, Warning, TEXT("NOT ON SCREEN"));
				//UpdatePeekPosition();
			}
		}
		else
		{
			//UE_LOG(LogTemp, Warning, TEXT("NOT ON SCREEN"));
			//UpdatePeekPosition();
		}
	}
	else
	{
		//UE_LOG(LogTemp, Warning, TEXT("NOT ON SCREEN"));
		//UpdatePeekPosition();
	}
	
	// check if peek is too shallow:

	if (PeekState == ErrolPeekState::STATE_LEFTPEEK)
	{
		Dot = FVector::DotProduct(Disp, -LeftPeekVector);
	}
	else if (PeekState == ErrolPeekState::STATE_RIGHTPEEK) 
	{
		Dot = FVector::DotProduct(Disp, -RightPeekVector);
	}

	if (Dot < ValidPeekPoint->MinDot)
	{
		bPeeking = false;
		EndPeek();
	}

	// if player saw the peek and then looked away, end the peek
	if (bPeekOnScreen && !bPeekCurrentlyOnScreen && PeekScareLevel > 0.94f)
	{
		//UE_LOG(LogTemp, Warning, TEXT("ENDPEEK"));
		bPeeking = false;
		EndPeek();
	}
}

void AErrolCharacter::UpdatePeekPosition(float DeltaTime)
{
	FVector PlayerCameraLocation = PlayerCamera->GetComponentLocation();
	FVector EyeLocation = EyeSocket->GetSocketLocation(BodyMesh);
	FVector NeckLocation = NeckSocket->GetSocketLocation(BodyMesh);

	FVector DispEye = PlayerCameraLocation - EyeLocation;
	FVector DispNeck = PlayerCameraLocation - NeckLocation;
	DispEye = DispEye.GetSafeNormal();
	DispNeck = DispNeck.GetSafeNormal();

	FHitResult HitResult;

	bool bEyeTrace = World->LineTraceSingleByChannel(HitResult, EyeLocation, EyeLocation + DispEye * 60.f, ECC_WorldDynamic, PeekQueryParams);
	bool bNeckTrace = World->LineTraceSingleByChannel(HitResult, NeckLocation, NeckLocation + DispNeck * 60.f, ECC_WorldDynamic, PeekQueryParams);

	FVector DeltaLocation = ValidPeekPoint->GetActorLocation();
	
	//	If the neck trace doesn't hit, too much of Errol is visible so move him out of view more
	if (!bNeckTrace)
	{
		const float PeekMoveSpeed = 7.f;
		const FVector AL = GetActorLocation();
		FVector NL = GetActorLocation();
		if (PeekState == ErrolPeekState::STATE_LEFTPEEK)
		{
			//AddActorWorldOffset(RightPeekVector * 5.f);
			NL += RightPeekVector * PeekMoveSpeed;
		}
		else
		{
			//AddActorWorldOffset(LeftPeekVector * 5.f);
			NL += LeftPeekVector * PeekMoveSpeed;
		}
		NL = FMath::VInterpTo(AL, NL, DeltaTime, PeekMoveSpeed);
		SetActorLocation(NL);
	}
	else if (bEyeTrace)	//	If this trace hits, then Errol is hidden too much, so he moves more in view
	{
		const float PeekMoveSpeed = 7.f;
		const FVector AL = GetActorLocation();
		FVector NL = GetActorLocation();
		if (PeekState == ErrolPeekState::STATE_LEFTPEEK)
		{
			//AddActorWorldOffset(-RightPeekVector * 10.f);
			NL += -RightPeekVector * PeekMoveSpeed;
		}
		else
		{
			//AddActorWorldOffset(-LeftPeekVector * 10.f);
			NL += -LeftPeekVector * PeekMoveSpeed;
		}
		NL = FMath::VInterpTo(AL, NL, DeltaTime, PeekMoveSpeed);
		SetActorLocation(NL);
	}

	//FRotator Rot = DispEye.Rotation();
	//Rot.Pitch = 0;
	//SetActorRotation(Rot);
}

void AErrolCharacter::UpdateFlankBlocker()
{
	const FVector HL = ValidPeekPoint->HeadLocation;
	const FVector CL = PlayerCamera->GetComponentLocation();
	FVector Dir = CL - HL;
	Dir.Z = 0;
	Dir = Dir.GetSafeNormal();

	FVector NewLocation = HL + Dir * 100.f;

	const FVector WUV = FVector(0, 0, 1.0f);
	const FVector NewRight = FVector::CrossProduct(Dir, WUV);
	const FVector NewUp = FVector::CrossProduct(NewRight, Dir);

	FTransform NewTransform = FTransform(Dir, NewRight, NewUp, NewLocation);

	FlankBlocker->SetWorldTransform(NewTransform);

}

bool AErrolCharacter::FindPathToPlayer()
{
	NavigationSystem->FindPathToActorSynchronously(World, GetActorLocation(), Player);
	

	return false;
}

void AErrolCharacter::RemoveFlankBlocker()
{
	FlankBlocker->AddWorldOffset(FVector(0, 0, 600.f));
}

void AErrolCharacter::EnterUpperWindowScareState()
{
	State = ErrolState::STATE_UPPERWINDOWSCARE;
	PeekState = ErrolPeekState::STATE_LEFTPEEK;
	StartPeekAnimation();
	UpdateAnimation(State);
	SetActorLocationAndRotation(UpperWindowStartingPoint->GetActorLocation(), UpperWindowStartingPoint->GetActorRotation());
	SawMesh->SetVisibility(false);
	// move into position
	// set animation to left peek, set look at alpha to 0.8, tick and wait for the player to look at Errol directly for a few seconds
	// then set Errol's state to chase state.
}

void AErrolCharacter::TickUpperWindowScareState(float DeltaTime)
{
	bool bCanPlayerSeeMe = CanThePlayerSeeMe();
	if (bCanPlayerSeeMe == true)
	{
		const FVector CFV = PlayerCamera->GetForwardVector();
		const FVector CL = PlayerCamera->GetComponentLocation();
		const FVector ChestLocation = BodyMesh->GetBoneLocation(FName("Spine01_JNT"));
		FVector Disp = ChestLocation - CL;
		Disp = Disp.GetSafeNormal();

		float Dot = FVector::DotProduct(CFV, Disp) - 0.5f;

		if (Dot < 0) // i don't think dot will ever be 0 but i'm doing this check just in case...
		{
			Dot = 0;
		}

		UpperWindowScareStareValue += Dot * DeltaTime;

		if (UpperWindowScareStareValue > UpperWindowScareChaseThreshold)
		{
			ExitUpperWindowScareState();
		}
	}
}

void AErrolCharacter::ExitUpperWindowScareState()
{
	EndPeekAnimation();
	SawMesh->SetVisibility(true);
	EnterChaseState(110.f);
}
