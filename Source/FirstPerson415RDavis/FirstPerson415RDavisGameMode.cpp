// Copyright Epic Games, Inc. All Rights Reserved.

#include "FirstPerson415RDavisGameMode.h"
#include "FirstPerson415RDavisCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFirstPerson415RDavisGameMode::AFirstPerson415RDavisGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
