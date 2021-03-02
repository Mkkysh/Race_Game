// Copyright Epic Games, Inc. All Rights Reserved.

#include "Race_GameGameMode.h"
#include "Race_GamePawn.h"
#include "Race_GameHud.h"

ARace_GameGameMode::ARace_GameGameMode()
{
	DefaultPawnClass = ARace_GamePawn::StaticClass();
	HUDClass = ARace_GameHud::StaticClass();
}
