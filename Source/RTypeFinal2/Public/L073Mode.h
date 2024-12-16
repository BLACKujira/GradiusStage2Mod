#pragma once
#include "CoreMinimal.h"
#include "L073Mode.generated.h"

UENUM(BlueprintType)
enum class L073Mode : uint8 {
    PRE_BEND,
    POST_BEND,
    NUM,
};

