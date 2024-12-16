#pragma once
#include "CoreMinimal.h"
#include "EPlatformCustomChunkType.generated.h"

UENUM(BlueprintType)
enum class EPlatformCustomChunkType : uint8 {
    OnDemandChunk,
    LanguageChunk,
};

