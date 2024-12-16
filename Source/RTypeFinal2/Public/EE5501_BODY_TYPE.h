#pragma once
#include "CoreMinimal.h"
#include "EE5501_BODY_TYPE.generated.h"

UENUM(BlueprintType)
enum class EE5501_BODY_TYPE : uint8 {
    BODY,
    LINK,
    TAIL,
    NUM,
};

