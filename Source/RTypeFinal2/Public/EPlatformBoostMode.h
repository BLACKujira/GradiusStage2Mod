#pragma once
#include "CoreMinimal.h"
#include "EPlatformBoostMode.generated.h"

UENUM(BlueprintType)
enum class EPlatformBoostMode : uint8 {
    Normal,
    Cpu_FastLoad,
};

