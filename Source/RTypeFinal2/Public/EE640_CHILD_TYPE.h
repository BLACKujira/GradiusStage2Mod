#pragma once
#include "CoreMinimal.h"
#include "EE640_CHILD_TYPE.generated.h"

UENUM(BlueprintType)
enum class EE640_CHILD_TYPE : uint8 {
    NORMAL,
    SHOT,
    STRONG,
    CORE,
    NONE,
};

