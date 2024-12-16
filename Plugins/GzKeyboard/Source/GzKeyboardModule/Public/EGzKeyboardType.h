#pragma once
#include "CoreMinimal.h"
#include "EGzKeyboardType.generated.h"

UENUM(BlueprintType)
enum class EGzKeyboardType : uint8 {
    Default,
    Number,
    Web,
    Email,
    Password,
    AlphaNumeric,
};

