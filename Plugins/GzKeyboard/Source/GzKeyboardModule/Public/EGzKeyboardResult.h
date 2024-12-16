#pragma once
#include "CoreMinimal.h"
#include "EGzKeyboardResult.generated.h"

UENUM(BlueprintType)
enum class EGzKeyboardResult : uint8 {
    OK,
    Cancel,
    Abort,
};

