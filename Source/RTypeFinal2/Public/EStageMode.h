#pragma once
#include "CoreMinimal.h"
#include "EStageMode.generated.h"

UENUM(BlueprintType)
enum class EStageMode : uint8 {
    Load,
    Game,
    Clear,
    Death,
};

