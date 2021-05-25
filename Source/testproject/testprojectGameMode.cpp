// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "testprojectGameMode.h"
#include "testprojectHUD.h"
#include "testprojectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AtestprojectGameMode::AtestprojectGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AtestprojectHUD::StaticClass();
}
