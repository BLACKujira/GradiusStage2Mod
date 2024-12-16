#pragma once
#include "CoreMinimal.h"
#include "EPlatformChunkInstallSpeed.generated.h"

UENUM(BlueprintType)
enum class EPlatformChunkInstallSpeed : uint8 {
    Paused,
    Slow,
    Fast,
};

