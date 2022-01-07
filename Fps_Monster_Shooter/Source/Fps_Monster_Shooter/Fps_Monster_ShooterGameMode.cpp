// Copyright Epic Games, Inc. All Rights Reserved.

#include "Fps_Monster_ShooterGameMode.h"
#include "Fps_Monster_ShooterHUD.h"
#include "Fps_Monster_ShooterCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFps_Monster_ShooterGameMode::AFps_Monster_ShooterGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AFps_Monster_ShooterHUD::StaticClass();
}
