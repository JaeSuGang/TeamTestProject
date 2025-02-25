// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Core/ProjectGamemode.h"
#include "ProjectTitleGamemode.generated.h"

/**
 * 
 */
UCLASS()
class TEAMTESTPROJECT_API AProjectTitleGamemode : public AProjectGamemode
{
	GENERATED_BODY()
	
public:
	void BeginPlay() override;

};
