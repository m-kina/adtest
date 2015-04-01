// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "TestActor.generated.h"

/**
 * 
 */
//UCLASS(Blueprintable, BlueprintType)
UCLASS(Blueprintable, BlueprintType)
class GAMECENTERTEST_API ATestActor : public AActor
{
	GENERATED_UCLASS_BODY()

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Level");
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Level")
	int32 MyLevel;

	//UFUNCTION(BlueprintCallable, Category = "Level");
	UFUNCTION(BlueprintCallable, Category = "Level")
	void PrintMyLevel();
	
	
};
