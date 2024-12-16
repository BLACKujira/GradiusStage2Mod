#pragma once
#include "CoreMinimal.h"
#include "ESegaApm_ContinueType.generated.h"

UENUM(BlueprintType)
enum class ESegaApm_ContinueType : uint8 {
    None,
    SELECT,
    COUNTDOWN,
    DEFAULT = SELECT,
};

