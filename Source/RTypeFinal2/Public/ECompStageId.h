#pragma once
#include "CoreMinimal.h"
#include "ECompStageId.generated.h"

UENUM(BlueprintType)
enum class ECompStageId : uint8 {
    None,
    ST_C01,
    ST_C02,
    NUM,
    NUM_RESERVED = 16,
};

