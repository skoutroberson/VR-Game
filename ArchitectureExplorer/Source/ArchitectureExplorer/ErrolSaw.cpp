// Fill out your copyright notice in the Description page of Project Settings.


#include "ErrolSaw.h"
#include "Components/SkeletalMeshComponent.h"


// Sets default values
AErrolSaw::AErrolSaw()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AErrolSaw::BeginPlay()
{
	Super::BeginPlay();
	
	Root = GetRootComponent();
}

// Called every frame
void AErrolSaw::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AErrolSaw::ChangeState(ErrolSawState NewState)
{
	ExitState(State);
	EnterState(State);
	State = NewState;
}

void AErrolSaw::EnterState(ErrolSawState NewState)
{
	switch (NewState)
	{
	case ErrolSawState::STATE_MOCAP:
		if (!Root->IsVisible())
		{
			Root->SetVisibility(true);
		}
		AttachToComponent(MocapMesh, FAttachmentTransformRules::SnapToTargetIncludingScale, FName("ErrolSaw"));
		// start random rev looping system
		break;
	case ErrolSawState::STATE_ANIM2:
		if (!Root->IsVisible())
		{
			Root->SetVisibility(true);
		}
		AttachToComponent(Anim2Mesh, FAttachmentTransformRules::SnapToTargetIncludingScale, FName("ErrolSaw"));
		break;
	case ErrolSawState::STATE_RAGDOLL:
		// detach from component, enable collision, simulate physics
		break;
	case ErrolSawState::STATE_INVISIBLE:
		Root->SetVisibility(false);
		break;
	}
}

void AErrolSaw::ExitState(ErrolSawState NewState)
{

}
