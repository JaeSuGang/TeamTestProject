// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "AttributeComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent), HideCategories = (Variable, Sockets, Tags, ComponentTick, ComponentReplication, Sockets, Activation, Cooking, AssetUserData, Replication, Navigation) )
class TEAMTESTPROJECT_API UAttributeComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UAttributeComponent(const FObjectInitializer& objectInitializer);

protected:
	virtual void BeginPlay() override;

	
public:
	UPROPERTY(EditAnywhere)
	FGameplayTagContainer Status;

	UPROPERTY(EditAnywhere)
	TMap<FGameplayTag, float> Values;
};
