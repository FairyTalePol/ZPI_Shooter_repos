// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "ZPI_ShooterGameMode.h"
#include "ZPI_ShooterHUD.h"
#include "ZPI_ShooterCharacter.h"
#include "UObject/ConstructorHelpers.h"

AZPI_ShooterGameMode::AZPI_ShooterGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AZPI_ShooterHUD::StaticClass();
}
