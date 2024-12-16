#pragma once
#include "CoreMinimal.h"
#include "ELoadTextScene.generated.h"

UENUM(BlueprintType)
enum class ELoadTextScene : uint8 {
    Any,
    MenuToGame,
    GameToMenu,
    MenuToMuseum,
    MuseumToMenu,
    HangarToMuseum,
    MuseumToHangar,
    MenuToPilot,
    PilotToMenu,
    Stage119S,
    Stage119M,
};

