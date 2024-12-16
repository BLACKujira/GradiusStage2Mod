#pragma once
#include "CoreMinimal.h"
#include "EL026Mode.generated.h"

UENUM(BlueprintType)
enum class EL026Mode : uint8 {
    M_FREE,
    M_SEARCH,
    NUM,
};

