// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "AdBlueprintFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class GAMECENTERTEST_API UAdBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

		UFUNCTION(BlueprintCallable, Category = "Add")
		static FString HelloWorld();
	
};
