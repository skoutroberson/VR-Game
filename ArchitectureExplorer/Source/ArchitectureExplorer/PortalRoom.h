// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "VRCharacter.h"
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

	UPROPERTY(VisibleAnywhere)
	class USceneComponent* PRRoot;

	UPROPERTY(EditAnywhere)
	class USceneComponent* TeleLoc;

	UPROPERTY(VisibleAnywhere)
	class UStaticMeshComponent* RoomMesh;

public:

	void Teleport();
	bool bTele = false;
	FVector ConvertLocationToActorSpace(FVector Location, AActor* Reference, USceneComponent* Target);
	FRotator ConvertRotationToActorSpace(FRotator Rotation, AActor* Reference, USceneComponent* Target);
	class AActor* Player;
	class UCameraComponent* PlayerCamera;
	FVector PortLoc;
	FVector GetTeleportLocation(UCameraComponent* CharCam);
};
