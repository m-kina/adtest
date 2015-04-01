// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "MyActor.generated.h"

/**
 * 
 */
UCLASS()
class GAMECENTERTEST_API AMyActor : public AActor
{
	GENERATED_UCLASS_BODY()

public:
	virtual void BeginPlay() override;
	
	virtual void Tick(float DeltaSeconds) override;
	float RunningTime;
};
