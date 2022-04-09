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
#include "Engine.h"

// Sets default values
AErrolCharacter::AErrolCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	State = ErrolState::STATE_PATROL;
	PeekState = ErrolPeekState::STATE_IDLE;
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

	UpdateAnimation(State);
}

void AErrolCharacter::SetupBoneArrays()
{
	//SkeletalMeshComp = Cast<USkeletalMeshComponent>(GetComponentByClass(USkeletalMeshComponent::StaticClass()));
	SkeletalMeshComp = Cast<USkeletalMeshComponent>(GetComponentsByTag(USkeletalMeshComponent::StaticClass(), TEXT("Bot"))[0]);
	TopHalfMesh = Cast<USkeletalMeshComponent>(GetComponentsByTag(USkeletalMeshComponent::StaticClass(), TEXT("Top"))[0]);

	SkeletalMeshComp->HideBoneByName(TEXT("Head_JNT"), EPhysBodyOp::PBO_None);
	int32 CutIndex = SkeletalMeshComp->GetBoneIndex(TEXT("Spine01_JNT"));
	TArray<int32> BoneArray;
	USkeleton* Skel = SkeletalMeshComp->SkeletalMesh->Skeleton;
	SkeletalMeshComp->SkeletalMesh->Skeleton->GetChildBones(1, BoneArray);
	UE_LOG(LogTemp, Warning, TEXT("CutIndex: %d"), CutIndex);
	UE_LOG(LogTemp, Warning, TEXT("Size: %d"), BoneArray.Num());
	bool bHalfSwap = false;

	TArray<int32> BonesToVisit;
	BonesToVisit.Push(0);
	BottomHalfBones.Push(0);

	while (BonesToVisit.Num() > 0)
	{
		int32 Current = BonesToVisit.Pop();

		if (Current == CutIndex)
		{
			bHalfSwap = true;
		}

		TArray<int32> CurrentChildBones;
		Skel->GetChildBones(Current, CurrentChildBones);

		for (int i = 0; i < CurrentChildBones.Num(); i++)
		{
			int32 CurrentChild = CurrentChildBones[i];
			BonesToVisit.Push(CurrentChild);

			if (!bHalfSwap)
			{
				BottomHalfBones.Push(CurrentChild);
			}
			else
			{
				TopHalfBones.Push(CurrentChild);
			}
		}

	}
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
			ShouldKill();
			// update speed based on player camera rotation but don't change footstep noise speed
			break;
		case ErrolState::STATE_PEEK:
			if (!bPeekFound)
			{
				FindValidPeekPoint();
			}
			else if(bPeeking)
			{
				ShouldEndPeek(DeltaTime);
				UpdatePeekPosition();
			}
			break;
		case ErrolState::STATE_SHOULDERPEEK:
			/**
			- When the player looks to their right and sees Errol,
			have Errol end the peek and disappear out of view.
			- Move Errol to a random location out of the player's view.
			*/
			
			
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


void AErrolCharacter::EnterChaseState()
{
	State = ErrolState::STATE_CHASE;
	GetCharacterMovement()->MaxWalkSpeed = ChaseSpeed;
	UpdateAnimation(State);
	ErrolController->MoveToActor(Player, KillRadius);
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
	GetWorld()->GetTimerManager().ClearTimer(ChaseTimerHandle);
	GetCharacterMovement()->MaxWalkSpeed = KillSpeed;
	UpdateAnimation(State);
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
	SetActorEnableCollision(false);
	DisableComponentsSimulatePhysics();
	BodyMesh->SetVisibility(false, true);
	SawMesh->SetVisibility(false, true);
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

void AErrolCharacter::ExitIdleState()
{
	
}

void AErrolCharacter::ExitPatrolState()
{
	State = ErrolState::STATE_IDLE;
	ErrolController->StopTimers();
	ErrolController->StopMovement();
}

void AErrolCharacter::ExitChaseState()
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

void AErrolCharacter::InitializeCanSeeVariables()
{
	//UE_LOG(LogTemp, Warning, TEXT("Initalize can see!"));
	GetWorld()->GetTimerManager().ClearTimer(SetUpCanSeeHandle);
	Player = Cast<AActor>(UGameplayStatics::GetActorOfClass(GetWorld(), AVRCharacter::StaticClass()));
	AVRCharacter * TempC = Cast<AVRCharacter>(Player);
	LHandController = Cast<AActor>(TempC->LeftController);
	RHandController = Cast<AActor>(TempC->RightController);
	UActorComponent * TempAC = Player->GetComponentByClass(UCameraComponent::StaticClass());
	PlayerCamera = Cast<UCameraComponent>(TempAC);
	InitializePerceptionTimers();
	//	Debug
	//EnterPeekState();
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
					EnterChaseState();
					break;
				case ErrolState::STATE_LOOKAROUND:
					ExitLookAroundState();
					EnterChaseState();
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
		EnterChaseState();
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
}


void AErrolCharacter::ShouldEndPeek(float DeltaTime)
{
	//	End the peek after:
	//	- A certain time if the player doesn't look
	//	- If the player looks at Errol for too long: DotProduct(Disp, CameraVector) * DeltaTime > LookThreshold
	//	- If the peek angle is too shallow

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
				UE_LOG(LogTemp, Warning, TEXT("Scare Level: %f"), PeekScareLevel);
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
				UE_LOG(LogTemp, Warning, TEXT("NOT ON SCREEN"));

			}
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("NOT ON SCREEN"));

		}
	}
	

	if (bPeekOnScreen && !bPeekCurrentlyOnScreen && PeekScareLevel > 0.01f)
	{
		UE_LOG(LogTemp, Warning, TEXT("ENDPEEK"));
		//bPeeking = false;
		//EndPeek();
	}
}

void AErrolCharacter::UpdatePeekPosition()
{
	FVector PlayerCameraLocation = PlayerCamera->GetComponentLocation();
	FVector EyeLocation = EyeSocket->GetSocketLocation(BodyMesh);
	FVector NeckLocation = NeckSocket->GetSocketLocation(BodyMesh);

	FVector DispEye = PlayerCameraLocation - EyeLocation;
	FVector DispNeck = PlayerCameraLocation - NeckLocation;
	DispEye = DispEye.GetSafeNormal();
	DispNeck = DispNeck.GetSafeNormal();

	FHitResult HitResult;

	bool bEyeTrace = World->LineTraceSingleByChannel(HitResult, EyeLocation, EyeLocation + DispEye * 60.f, ECC_WorldDynamic);
	bool bNeckTrace = World->LineTraceSingleByChannel(HitResult, NeckLocation, NeckLocation + DispNeck * 60.f, ECC_WorldDynamic);

	FVector DeltaLocation = ValidPeekPoint->GetActorLocation();
	
	//	If the neck trace doesn't hit, too much of Errol is visible so move him out of view more
	if (!bNeckTrace)
	{
		if (PeekState == ErrolPeekState::STATE_LEFTPEEK)
		{
			AddActorWorldOffset(RightPeekVector * 5.f);
		}
		else
		{
			AddActorWorldOffset(LeftPeekVector * 5.f);
		}
	}
	else if (bEyeTrace)	//	If this trace hits, then Errol is hidden too much, so he moves more in view
	{
		if (PeekState == ErrolPeekState::STATE_LEFTPEEK)
		{
			AddActorWorldOffset(-RightPeekVector * 10.f);
		}
		else
		{
			AddActorWorldOffset(-LeftPeekVector * 10.f);
		}
	}

	//FRotator Rot = DispEye.Rotation();
	//Rot.Pitch = 0;
	//SetActorRotation(Rot);
}
