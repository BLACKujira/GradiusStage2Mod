#pragma once
#include "CoreMinimal.h"
#include "EGameOnline_PlatformMessageType.generated.h"

UENUM(BlueprintType)
enum class EGameOnline_PlatformMessageType : uint8 {
    EmptyStore,
    ChatRestricted,
    UGCRestricted,
};

