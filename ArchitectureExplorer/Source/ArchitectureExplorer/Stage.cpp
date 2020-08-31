// Fill out your copyright notice in the Description page of Project Settings.


#include "Stage.h"
#include <vector>

using namespace std;

// Sets default values
AStage::AStage()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	//PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void AStage::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AStage::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

