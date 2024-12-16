#pragma once
#include "CoreMinimal.h"
#include "EBS305Parent_COMMAND.generated.h"

UENUM(BlueprintType)
enum class EBS305Parent_COMMAND : uint8 {
    idle,
    right,
    left,
    stop,
};

