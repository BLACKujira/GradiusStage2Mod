#pragma once
#include "CoreMinimal.h"
#include "L003Mode.generated.h"

UENUM(BlueprintType)
enum class L003Mode : uint8 {
    M_FREE,
    M_SEARCH,
    NUM,
};

