#pragma once
#include "CoreMinimal.h"
#include "EL027Mode.generated.h"

UENUM(BlueprintType)
enum class EL027Mode : uint8 {
    M_FREE,
    M_SEARCH,
    NUM,
};

