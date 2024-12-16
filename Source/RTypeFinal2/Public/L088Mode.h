#pragma once
#include "CoreMinimal.h"
#include "L088Mode.generated.h"

UENUM(BlueprintType)
enum class L088Mode : uint8 {
    M_FREE,
    M_SEARCH,
    NUM,
};

