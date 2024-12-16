#pragma once
#include "CoreMinimal.h"
#include "L026Mode.generated.h"

UENUM(BlueprintType)
enum class L026Mode : uint8 {
    M_FREE,
    M_SEARCH,
    NUM,
};

