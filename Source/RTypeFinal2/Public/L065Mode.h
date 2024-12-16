#pragma once
#include "CoreMinimal.h"
#include "L065Mode.generated.h"

UENUM(BlueprintType)
enum class L065Mode : uint8 {
    M_FREE,
    M_SEARCH,
    NUM,
};

