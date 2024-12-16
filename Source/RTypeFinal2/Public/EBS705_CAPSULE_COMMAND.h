#pragma once
#include "CoreMinimal.h"
#include "EBS705_CAPSULE_COMMAND.generated.h"

UENUM(BlueprintType)
enum class EBS705_CAPSULE_COMMAND : uint8 {
    CHANGE,
    KEEP,
    NUM,
};

