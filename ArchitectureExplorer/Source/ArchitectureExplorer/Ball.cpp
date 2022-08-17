// Fill out your copyright notice in the Description page of Project Settings.


#include "Ball.h"

ABall::ABall()
{
	AGrabbable::ValidOneHandHandHolds.SetNum(1);
	AGrabbable::ValidOneHandHandHolds.Insert(1, 0);
}

void ABall::BeginPlay()
{
	Super::BeginPlay();
	
}
