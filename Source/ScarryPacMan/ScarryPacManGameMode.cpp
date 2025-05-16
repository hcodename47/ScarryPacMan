// Copyright Epic Games, Inc. All Rights Reserved.

#include "ScarryPacManGameMode.h"
#include "ScarryPacManCharacter.h"
#include "UObject/ConstructorHelpers.h"

AScarryPacManGameMode::AScarryPacManGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
