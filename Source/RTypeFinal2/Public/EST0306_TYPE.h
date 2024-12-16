#pragma once
#include "CoreMinimal.h"
#include "EST0306_TYPE.generated.h"

UENUM(BlueprintType)
enum class EST0306_TYPE : uint8 {
    MAGMA,
    POISON,
    DIGESTIVE,
    UNKNOWN,
};

