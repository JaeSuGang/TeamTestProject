// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Core/ProjectPawn.h"
#include "GameplayTagContainer.h"
#include "PlayerPawn.generated.h"

/**
 * 
 */

class UAttributeComponent;
class UCameraComponent;
class USpringArmComponent;

UCLASS()
class TEAMTESTPROJECT_API APlayerPawn : public AProjectPawn
{
	GENERATED_BODY()
	
public:
	APlayerPawn();

public:
	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* StaticMeshComponent;

	UPROPERTY(EditAnywhere)
	UAttributeComponent* AttributeComponent;

	UPROPERTY(EditAnywhere)
	USpringArmComponent* SpringArmComponent;
	UPROPERTY(EditAnywhere)
	UCameraComponent* CameraComponent;

public:
	UPROPERTY(EditAnywhere)
	FGameplayTagContainer Status;

	UPROPERTY(EditAnywhere)
	TMap<FGameplayTag, float> Values;
};
