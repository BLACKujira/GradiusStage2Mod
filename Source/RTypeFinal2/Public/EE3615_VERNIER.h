#pragma once
#include "CoreMinimal.h"
#include "EE3615_VERNIER.generated.h"

UENUM(BlueprintType)
enum class EE3615_VERNIER : uint8 {
    WAIT,
    ROTATE,
    PRE_WAIT,
    START,
    KEEP,
    END,
    POST_WAIT,
    NUM,
};

