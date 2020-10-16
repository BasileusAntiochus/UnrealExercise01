// Copyright Epic Games, Inc. All Rights Reserved.

#include "UnrealExercise01GameMode.h"
#include "UnrealExercise01HUD.h"
#include "UnrealExercise01Character.h"
#include "UObject/ConstructorHelpers.h"

AUnrealExercise01GameMode::AUnrealExercise01GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AUnrealExercise01HUD::StaticClass();
}
