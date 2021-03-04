// Copyright Epic Games, Inc. All Rights Reserved.

#include "Race_GameHud.h"
#include "Race_GamePawn.h"
#include "WheeledVehicle.h"
#include "RenderResource.h"
#include "Shader.h"
#include "Engine/Canvas.h"
#include "WheeledVehicleMovementComponent.h"
#include "Engine/Font.h"
#include "CanvasItem.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/Engine.h"

#define LOCTEXT_NAMESPACE "VehicleHUD"


ARace_GameHud::ARace_GameHud()
{
	static ConstructorHelpers::FObjectFinder<UFont> Font(TEXT("/Engine/EngineFonts/RobotoDistanceField"));
	HUDFont = Font.Object;
}

void ARace_GameHud::DrawHUD()
{
	Super::DrawHUD();

	// Calculate ratio from 720p
	const float HUDXRatio = Canvas->SizeX / 1280.f;
	const float HUDYRatio = Canvas->SizeY / 720.f;

	bool bWantHUD = true;

	if (bWantHUD == true)
	{
		// Get our vehicle so we can check if we are in car. If we are we don't want onscreen HUD
		ARace_GamePawn* Vehicle = Cast<ARace_GamePawn>(GetOwningPawn());
		if ((Vehicle != nullptr) && (Vehicle->bInCarCameraActive == false))
		{
			FVector2D ScaleVec(HUDYRatio * 1.4f, HUDYRatio * 1.4f);

			// Speed
			FCanvasTextItem SpeedTextItem(FVector2D(HUDXRatio * 805.f, HUDYRatio * 455), Vehicle->SpeedDisplayString, HUDFont, FLinearColor::White);
			SpeedTextItem.Scale = ScaleVec;
			Canvas->DrawItem(SpeedTextItem);

			// Gear
			FCanvasTextItem GearTextItem(FVector2D(HUDXRatio * 805.f, HUDYRatio * 500.f), Vehicle->GearDisplayString, HUDFont, Vehicle->bInReverseGear == false ? Vehicle->GearDisplayColor : Vehicle->GearDisplayReverseColor);
			GearTextItem.Scale = ScaleVec;
			Canvas->DrawItem(GearTextItem);
		}
	}
}


#undef LOCTEXT_NAMESPACE
