// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "MyGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class PROJECT3_API AMyGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

private:
		//Timer seconds value
		int32 TimeSeconds;

		//Timer minute value
		int32 TimeMinutes;

public:
	UFUNCTION(BlueprintCallable)
	void IncrementTimeSeconds();
	
	UFUNCTION(BlueprintCallable)
	void SetTimeSeconds();

	UFUNCTION(BlueprintCallable, BlueprintPure)
	int32 GetTimeSeconds();

	UFUNCTION(BlueprintCallable)
	void IncrementTimeMinutes();

	UFUNCTION(BlueprintCallable, BlueprintPure)
	int32 GetTimeMinutes();
};
