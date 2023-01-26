// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Roach.h"
#include "Components/BoxComponent.h"
#include "RoachSpawner.generated.h"

UCLASS()
class ARCHITECTUREEXPLORER_API ARoachSpawner : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ARoachSpawner();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Maximum roaches that this spawner can spawn DONT CHANGE AT RUNTIME
	UPROPERTY(EditAnywhere, NoClear)
	int MaxRoachCount = 100;

	UFUNCTION(BlueprintCallable)
	void SpawnRoaches(int NumberOfRoaches);

	// deletes all roaches this spawner created
	UFUNCTION(BlueprintCallable)
	void DeleteRoaches(int NumberOfRoaches);

	// moves all roaches to new random locations
	UFUNCTION(BlueprintCallable)
	void MoveRoaches(int AmountToMove, int NumToMovePerFrame);

	UPROPERTY(VisibleAnywhere)
	int RoachCount = 0;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	TArray<AActor*> Roaches;

	UFUNCTION(BlueprintCallable) // spawn 1 roach per frame and increment RoachCount until it equals TargetRoachCount then turn bSpawningRoaches off and tick off
	void SpawnRoach();

	UFUNCTION(BlueprintCallable)
	void DeleteRoach();

	// moves a roach if they are not visible to the player. Moves NumRoachesMovePerFrame amount of roaches per frame.
	void MoveRoach();

	// needs to be set in the editor to the BP_Roach class
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<ARoach> RoachBP;

	UPROPERTY(EditAnywhere)
	float SweepSphereRadius = 2.f;

	FCollisionShape SweepSphere;

	UPROPERTY(EditAnywhere)
	float SweepLength = 2000.f;

	UPROPERTY(VisibleAnywhere)
	TArray<UBoxComponent*> SpawnBoxes;

	int SpawnBoxNum = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int NumRoachesMovePerFrame = 1;

private:

	UWorld *World = nullptr;

	bool bSpawningRoaches = false; // for ticking and spawning a roach per frame
	bool bDeletingRoaches = false;
	bool bMovingRoaches = false;

	// move values
	int MoveRoachIndex = 0;
	int RoachesMoved = 0;
	int RoachesToMove = 0;

	FTransform GetRandomSpawnLocationAndRotation();

	int TargetRoachCount = 0;

	FCollisionQueryParams QueryParams;

	FQuat AQ;

};
