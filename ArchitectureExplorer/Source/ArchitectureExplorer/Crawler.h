// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Crawler.generated.h"

UCLASS()
class ARCHITECTUREEXPLORER_API ACrawler : public AActor
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
	class USceneComponent* CrawlerRoot;

	UPROPERTY(EditAnywhere)
	class UStaticMeshComponent* Body;

	FVector StartingPosition;

};
