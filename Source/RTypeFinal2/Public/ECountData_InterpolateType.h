#pragma once
#include "CoreMinimal.h"
#include "ECountData_InterpolateType.generated.h"

UENUM(BlueprintType)
enum class ECountData_InterpolateType : uint8 {
    LINEAR,
    CUBIC,
};

