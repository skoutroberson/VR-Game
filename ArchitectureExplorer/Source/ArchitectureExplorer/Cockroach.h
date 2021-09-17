// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SphereComponent.h"
#include "Cockroach.generated.h"

UENUM(BlueprintType)
enum class RoachState : uint8
{
	STATE_IDLE			UMETA(DisplayName = "Idle"),
	STATE_MOVE			UMETA(DisplayName = "Move"),
	STATE_FALL			UMETA(DisplayName = "Fall"),
};

UCLASS()
class ARCHITECTUREEXPLORER_API ACockroach : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACockroach();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USphereComponent * Root = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USkeletalMeshComponent * Mesh = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	RoachState State;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector GravityDirection = FVector::ZeroVector;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector MoveDirection = FVector::ZeroVector;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Speed = 1.f;

private:

	UWorld * World = nullptr;

	FHitResult HitResult;
	FCollisionQueryParams TraceParams;
	TArray<AActor*> TraceIgnoreActors;

	void Move(float DeltaTime);
	void DownTrace(float DeltaTime);

	UFUNCTION(BlueprintCallable, Category = "Roach")
	void HitRigidBody(UPARAM(ref)FHitResult HitResult, UPARAM()FVector ImpulseNormal);

	UFUNCTION(BlueprintCallable, Category = "Crawler")
	void RotateToNormal(UPARAM()FVector NormalVector);

	unsigned short int HitsThisFrame = 0;

	FVector WorldGravity = FVector(0, 0, -1.f);

	bool bToggle = true;

};
