#pragma once
#include "CoreMinimal.h"
#include "EE3610_VERNIER.generated.h"

UENUM(BlueprintType)
enum class EE3610_VERNIER : uint8 {
    WAIT,
    SIGN,
    START,
    KEEP,
    END,
    NUM,
};

