#pragma once
#include "CoreMinimal.h"
#include "EScreenActor_TargetType.generated.h"

UENUM(BlueprintType)
enum class EScreenActor_TargetType : uint8 {
    None,
    WORLD,
    SCREEN,
    ACTOR,
    PLAYER,
    FORCE,
    BIT,
    ENEMY,
};

