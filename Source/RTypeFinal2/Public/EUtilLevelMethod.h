#pragma once
#include "CoreMinimal.h"
#include "EUtilLevelMethod.generated.h"

UENUM(BlueprintType)
enum class EUtilLevelMethod : uint8 {
    None,
    Blueprint,
    AlwaysLoad,
};

