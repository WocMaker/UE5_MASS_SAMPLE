// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MassProcessor.h"
#include "SimpleRandomMoveProcessor.generated.h"

/**
 *
 */
UCLASS()
class MASS_DEMO_API USimpleRandomMoveProcessor : public UMassProcessor
{
	GENERATED_BODY()
public:
	USimpleRandomMoveProcessor();

protected:
	virtual void ConfigureQueries();
	virtual void Execute(FMassEntityManager& EntityManager, FMassExecutionContext& Context);
private:
	FMassEntityQuery EntityQuery;
};
