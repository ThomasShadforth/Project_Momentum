// Copyright Epic Games, Inc. All Rights Reserved.

#include "Project_MomentumGameMode.h"
#include "Project_MomentumCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProject_MomentumGameMode::AProject_MomentumGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
