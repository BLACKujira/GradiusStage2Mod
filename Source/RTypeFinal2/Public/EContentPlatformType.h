#pragma once
#include "CoreMinimal.h"
#include "EContentPlatformType.generated.h"

UENUM(BlueprintType)
enum class EContentPlatformType : uint8 {
    None,
    Sony,
    Switch,
    GDK,
    Steam,
    Gog,
    Eos,
    Dmm,
    Num,
};

