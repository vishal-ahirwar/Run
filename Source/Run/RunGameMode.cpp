// Copyright Epic Games, Inc. All Rights Reserved.

#include "RunGameMode.h"
#include "RunPlayerController.h"
#include "RunCharacter.h"
#include "UObject/ConstructorHelpers.h"

ARunGameMode::ARunGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ARunPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}