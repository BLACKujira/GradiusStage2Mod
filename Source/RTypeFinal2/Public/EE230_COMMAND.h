#pragma once
#include "CoreMinimal.h"
#include "EE230_COMMAND.generated.h"

UENUM(BlueprintType)
enum class EE230_COMMAND : uint8 {
    Stand,
    Walk,
    Feed,
    Turn,
    Dir,
};

