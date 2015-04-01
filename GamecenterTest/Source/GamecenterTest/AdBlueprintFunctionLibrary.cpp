// Fill out your copyright notice in the Description page of Project Settings.

#include "GamecenterTest.h"
#include "AdBlueprintFunctionLibrary.h"


UAdBlueprintFunctionLibrary::UAdBlueprintFunctionLibrary(const class FPostConstructInitializeProperties& PCIP)
	: Super(PCIP)
{

}

FString UAdBlueprintFunctionLibrary::HelloWorld()
{
	return FString("Hello World");
}
