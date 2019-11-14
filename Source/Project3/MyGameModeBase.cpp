// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameModeBase.h"

void AMyGameModeBase::IncrementTimeSeconds()
{
	TimeSeconds++;
}

void AMyGameModeBase::SetTimeSeconds()
{
	TimeSeconds = 0;
}

int32 AMyGameModeBase::GetTimeSeconds()
{
	return TimeSeconds;
}

void AMyGameModeBase::IncrementTimeMinutes()
{
	TimeMinutes++;
}

int32 AMyGameModeBase::GetTimeMinutes()
{
	return TimeMinutes;
}

