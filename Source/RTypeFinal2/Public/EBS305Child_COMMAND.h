#pragma once
#include "CoreMinimal.h"
#include "EBS305Child_COMMAND.generated.h"

UENUM(BlueprintType)
enum class EBS305Child_COMMAND : uint8 {
    STOP,
    MOVE,
};

