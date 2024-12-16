#pragma once
#include "CoreMinimal.h"
#include "EE7210_ACT.generated.h"

UENUM(BlueprintType)
enum class EE7210_ACT : uint8 {
    WAIT,
    RESPAWN,
    RESPAWNWAIT,
    DEATH,
    NUM,
};

