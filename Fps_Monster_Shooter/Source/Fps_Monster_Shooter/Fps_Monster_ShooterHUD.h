// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "Fps_Monster_ShooterHUD.generated.h"

UCLASS()
class AFps_Monster_ShooterHUD : public AHUD
{
	GENERATED_BODY()

public:
	AFps_Monster_ShooterHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

