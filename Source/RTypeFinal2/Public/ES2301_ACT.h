#pragma once
#include "CoreMinimal.h"
#include "ES2301_ACT.generated.h"

UENUM(BlueprintType)
enum class ES2301_ACT : uint8 {
    EXPAND,
    IDLE,
    DEATH,
    NUM,
};

