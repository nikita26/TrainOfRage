// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "TrainOfRageGameMode.h"
#include "TrainOfRageCharacter.h"

ATrainOfRageGameMode::ATrainOfRageGameMode()
{
	// Set default pawn class to our character
	DefaultPawnClass = ATrainOfRageCharacter::StaticClass();	
}
