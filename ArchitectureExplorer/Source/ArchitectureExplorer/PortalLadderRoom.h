// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "PortalLadderRoom.generated.h"

UCLASS()
class ARCHITECTUREEXPLORER_API APortalLadderRoom : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APortalLadderRoom();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UStaticMeshComponent *RoomMesh = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UBoxComponent *TeleportTrigger = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector TargetPortalLocation = FVector::ZeroVector;

	UPROPERTY(BlueprintReadWrite)
	TArray<AActor*> OverlappingMeshes;

	UPROPERTY(BlueprintReadWrite)
	TArray<AActor*> OverlappingGrabbables;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintImplementableEvent)
	void EnablePortal();

	UFUNCTION(BlueprintImplementableEvent)
	void DisablePortal();

	UFUNCTION(BlueprintCallable)
	void Teleport();

	UPROPERTY(BlueprintReadWrite)
	bool bUpdateSoundsAndLighting = false;

	UFUNCTION(BlueprintCallable)
	void UpdateSoundsAndLightingBasedOnDoorAngle(float DeltaTime);

	
private:

	TArray<class AHandController*> HandControllers;

	UWorld *World = nullptr;

};
