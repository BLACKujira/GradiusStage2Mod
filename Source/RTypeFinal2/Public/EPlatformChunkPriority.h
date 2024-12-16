#pragma once
#include "CoreMinimal.h"
#include "EPlatformChunkPriority.generated.h"

UENUM(BlueprintType)
enum class EPlatformChunkPriority : uint8 {
    Immediate,
    High,
    Low,
};

