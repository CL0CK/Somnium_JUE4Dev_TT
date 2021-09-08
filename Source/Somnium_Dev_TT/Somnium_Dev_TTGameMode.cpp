// Copyright Epic Games, Inc. All Rights Reserved.

#include "Somnium_Dev_TTGameMode.h"
#include "Somnium_Dev_TTCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASomnium_Dev_TTGameMode::ASomnium_Dev_TTGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
