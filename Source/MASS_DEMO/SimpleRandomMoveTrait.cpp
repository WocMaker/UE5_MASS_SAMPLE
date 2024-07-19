// Fill out your copyright notice in the Description page of Project Settings.


#include "SimpleRandomMoveTrait.h"
#include "SimpleMovementFragments.h"
#include "MassEntityTemplateRegistry.h"

void USimpleRandomMoveTrait::BuildTemplate(FMassEntityTemplateBuildContext& BuildContext, const UWorld& World) const 
{
	BuildContext.AddFragment<FSimpleMovementFragment>();
}