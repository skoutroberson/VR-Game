// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Math/Vector.h"
#include "Math/Rotator.h"
#include "Components/SceneComponent.h"
#include "Portal.generated.h"

UCLASS()
class ARCHITECTUREEXPLORER_API APortal : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APortal();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
		class USceneComponent* PortalRoot;

	UPROPERTY(VisibleAnywhere)
		class UStaticMeshComponent* PlaneA;

	UPROPERTY(VisibleAnywhere)
		class UStaticMeshComponent* PlaneB;

	
	class USceneCaptureComponent2D* CameraA;
	class USceneCaptureComponent2D* CameraB;

	FVector PlaneANormal;
	FVector PlaneBNormal;

	FVector ALoc;
	FVector BLoc;
	FVector PlayerCamLoc;
	FVector IntersectionPoint;

	FRotator ARot;
	FRotator BRot;

	float DistA;
	float DistB;

	FOverlapInfo AOverlap;
	FOverlapInfo BOverlap;

	int side = 0;
	bool LastInFront = false;
	bool test = false;

	int PortalHalfWidth = 50;

	class AActor* Player;
	class UCameraComponent* PlayerCamera;

	//UPROPERTY(VisibleAnywhere)
		//class UTextureRenderTarget2D* TextureA;

	//UPROPERTY(VisibleAnywhere)
		//class UTextureRenderTarget2D* TextureB;

public:
	void InitPortal(USceneCaptureComponent2D* Portal);

	void PortalCheck(UStaticMeshComponent* PortalMesh, float Dist, UStaticMeshComponent* TargetMesh, USceneCaptureComponent2D* TargetCam);

	FVector ConvertLocationToActorSpace(FVector Location, UStaticMeshComponent* Reference, UStaticMeshComponent* Target);
	FVector ConvertLocationToActorSpaceP(FVector Location, UStaticMeshComponent* Reference, UStaticMeshComponent* Target);
	FRotator ConvertRotationToActorSpace(FRotator Rotation, UStaticMeshComponent* Reference, UStaticMeshComponent* Target);
};
