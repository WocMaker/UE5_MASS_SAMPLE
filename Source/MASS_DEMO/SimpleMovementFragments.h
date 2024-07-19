// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MassEntityTypes.h"
#include "SimpleMovementFragments.generated.h"

/**
 * 
 */
USTRUCT()
struct MASS_DEMO_API FSimpleMovementFragment : public FMassFragment
{
	GENERATED_BODY()

	FVector Target;
	
};