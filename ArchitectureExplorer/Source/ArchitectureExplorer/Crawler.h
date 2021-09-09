// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/World.h"
#include "TimerManager.h"
#include "Components/BoxComponent.h"
#include "Crawler.generated.h"

UENUM(BlueprintType)
enum class CrawlerState : uint8
{
	STATE_IDLE			UMETA(DisplayName = "Idle"),
	STATE_MOVE			UMETA(DisplayName = "Move"),
	STATE_FALL			UMETA(DisplayName = "Fall"),
};

UCLASS()
class ARCHITECTUREEXPLORER_API ACrawler : public APawn
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACrawler();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	CrawlerState State;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector GravityDir = FVector(0, 0, 0);

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UBoxComponent * CrawlerRoot = nullptr;

private:
	UWorld * World = nullptr;

	FHitResult HitResult;
	FCollisionQueryParams TraceParams;

	float Speed = 40.f;

	bool ForwardTrace(float DeltaTime);
	bool DownTrace(float DeltaTime);

	void MoveForward(float DeltaTime);

	bool bSwerveLeft = false;
	bool bShouldSwerve = false;
	float SwerveSpeed = 10.f;
	float SwerveTime = 0.4f;
	FTimerHandle SwerveTimer;

	void Swerve(float DeltaTime);
	void StartSwerve();



	FTimerHandle IdleTimer;
	int Laziness = 4;


	UFUNCTION(BlueprintCallable, Category="Crawler")
	void RotateToNormal(UPARAM()FVector NormalVector);

	UFUNCTION(BlueprintCallable, Category = "Crawler")
	void HitRigidBody(UPARAM(ref)FHitResult HitResult);

};
