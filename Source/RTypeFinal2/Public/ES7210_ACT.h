#pragma once
#include "CoreMinimal.h"
#include "ES7210_ACT.generated.h"

UENUM(BlueprintType)
enum class ES7210_ACT : uint8 {
    WAIT,
    FALL,
    RESPAWN,
    DEATH,
    NUM,
};

