#pragma once
#include "CoreMinimal.h"
#include "EBS507_COMMAND.generated.h"

UENUM(BlueprintType)
enum class EBS507_COMMAND : uint8 {
    Inthro,
    Shake,
    Breathe,
    Spout,
    Barakus,
    Wait,
};

