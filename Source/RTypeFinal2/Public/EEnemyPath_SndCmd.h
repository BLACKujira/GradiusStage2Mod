#pragma once
#include "CoreMinimal.h"
#include "EEnemyPath_SndCmd.generated.h"

UENUM(BlueprintType)
enum class EEnemyPath_SndCmd : uint8 {
    Stop,
    Play,
    FadeIn,
    FadeOut,
};

