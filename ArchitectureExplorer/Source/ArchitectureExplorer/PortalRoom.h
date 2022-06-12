// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "VRCharacter.h"
#include "HandController.h"
#include "Math/Vector.h"
#include "BoxTrigger.h"
#include "Components/SkeletalMeshComponent.h"
#include "PortalRoom.generated.h"

UCLASS()
class ARCHITECTUREEXPLORER_API APortalRoom : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APortalRoom();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:

	FVector TargetLocation = FVector(-833, 0, 17);

	//	Difference in yaw rotation from source portal room doors to target room doors
	float DeltaRotation = -90.f;

	void FakeFunction();

	UFUNCTION(BlueprintCallable, Category = "CustomFunctions")
	void TeleportPlayer(UPARAM(ref)AActor * TargetRoom, UPARAM(ref)AActor * Player);

public:
	void Teleport();

	AVRCharacter * VRCharacter = nullptr;
	
	USkeletalMeshComponent *LHandMesh = nullptr;
	USkeletalMeshComponent *RHandMesh = nullptr;
	
};
