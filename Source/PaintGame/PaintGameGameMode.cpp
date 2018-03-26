// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "PaintGameGameMode.h"
#include "PaintGameHUD.h"
#include "PaintGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

APaintGameGameMode::APaintGameGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = APaintGameHUD::StaticClass();
}
