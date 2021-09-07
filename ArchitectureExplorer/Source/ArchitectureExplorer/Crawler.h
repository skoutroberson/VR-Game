// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/World.h"
#include "Crawler.generated.h"

UENUM(BlueprintType)
enum class CrawlerState : uint8
{
	STATE_IDLE			UMETA(DisplayName = "Idle"),
	STATE_MOVE			UMETA(DisplayName = "Move"),
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

	UPROPERTY(EditAnywhere)
	class USceneComponent* Root;

	UPROPERTY(EditAnywhere)
	class USkeletalMeshComponent* Mesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	CrawlerState State;

private:
	UWorld * World = nullptr;
	FHitResult HitResult;
	float Speed = 40.f;

	bool ForwardTrace(float DeltaTime);
	void MoveForward(float DeltaTime);

	UFUNCTION(BlueprintCallable, Category="Crawler")
	void RotateToNormal(UPARAM()FVector NormalVector);

};
