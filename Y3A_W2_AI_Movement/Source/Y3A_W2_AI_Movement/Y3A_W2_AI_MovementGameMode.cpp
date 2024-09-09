// Copyright Epic Games, Inc. All Rights Reserved.

#include "Y3A_W2_AI_MovementGameMode.h"
#include "Y3A_W2_AI_MovementCharacter.h"
#include "UObject/ConstructorHelpers.h"

AY3A_W2_AI_MovementGameMode::AY3A_W2_AI_MovementGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
