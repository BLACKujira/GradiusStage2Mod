#pragma once
#include "CoreMinimal.h"
#include "EEnemyPath_EffCmd.generated.h"

UENUM(BlueprintType)
enum class EEnemyPath_EffCmd : uint8 {
    Stop,
    Play,
};

