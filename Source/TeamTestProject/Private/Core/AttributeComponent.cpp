// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/AttributeComponent.h"

UAttributeComponent::UAttributeComponent(const FObjectInitializer& objectInitializer)
{
	PrimaryComponentTick.bCanEverTick = false;
	
}


void UAttributeComponent::BeginPlay()
{
	Super::BeginPlay();

}

