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
	int MaxRoachCount = 30;

	UFUNCTION(BlueprintCallable)
	void SpawnRoaches(int NumberOfRoaches);

	UFUNCTION(BlueprintCallable)
	void DeleteRoaches(int NumberOfRoaches);

	UPROPERTY(VisibleAnywhere)
	int RoachCount = 0;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	TArray<AActor*> Roaches;

	UFUNCTION(BlueprintCallable) // spawn 1 roach per frame and increment RoachCount until it equals TargetRoachCount then turn bSpawningRoaches off and tick off
	void SpawnRoach();

	UFUNCTION(BlueprintCallable)
	void DeleteRoach();

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

private:

	UWorld *World = nullptr;

	bool bSpawningRoaches = false; // for ticking and spawning a roach per frame
	bool bDeletingRoaches = false;

	int TargetRoachCount = 0;

	FCollisionQueryParams QueryParams;

	FQuat AQ;

};
