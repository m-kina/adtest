// Fill out your copyright notice in the Description page of Project Settings.

#include "GamecenterTest.h"
#include "MyActor.h"


AMyActor::AMyActor(const class FPostConstructInitializeProperties& PCIP)
	: Super(PCIP)
{
	PrimaryActorTick.bCanEverTick = true;
}

void AMyActor::BeginPlay()
{
	Super::BeginPlay();
}

void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector NewLocation = GetActorLocation();
	float Deltaheight = (FMath::Sin(RunningTime + DeltaTime) - FMath::Sin(RunningTime));
	NewLocation.Z += Deltaheight * 20.0f;
	RunningTime += DeltaTime;
	SetActorLocation(NewLocation);
}

