#pragma once
#include "CoreMinimal.h"
#include "EBS703_MOVECOMMAND.generated.h"

UENUM(BlueprintType)
enum class EBS703_MOVECOMMAND : uint8 {
    Move,
    Wait,
    Join,
    Wjoin,
    Sepam,
    Sepaw,
    Out,
};

