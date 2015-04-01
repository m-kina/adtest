// Fill out your copyright notice in the Description page of Project Settings.

#include "GamecenterTest.h"
#include "TestActor.h"


ATestActor::ATestActor(const class FPostConstructInitializeProperties& PCIP)
	: Super(PCIP)
{

}

void ATestActor::PrintMyLevel()
{
//	UE_LOG(LogBlueprint LogBlueprintUserMessages, Log, TEXT("MyLevel : %d"), MyLevel);
	UE_LOG(LogBlueprintUserMessages, Log, TEXT("MyLevel: %d"), MyLevel);
}


