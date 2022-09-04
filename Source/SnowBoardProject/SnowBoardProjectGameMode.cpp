// Copyright Epic Games, Inc. All Rights Reserved.

#include "SnowBoardProjectGameMode.h"
#include "SnowBoardProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASnowBoardProjectGameMode::ASnowBoardProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
