#pragma once
#include "CoreMinimal.h"
#include "EEnemyPath_AnimCmd.generated.h"

UENUM(BlueprintType)
enum class EEnemyPath_AnimCmd : uint8 {
    Stop,
    Play,
    Wait,
};

