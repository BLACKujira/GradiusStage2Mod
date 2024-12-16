#pragma once
#include "CoreMinimal.h"
#include "EPauseAttribute.generated.h"

UENUM(BlueprintType)
enum class EPauseAttribute : uint8 {
    None,
    Game,
    Player,
    Enemy = 4,
};

