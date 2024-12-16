#pragma once
#include "CoreMinimal.h"
#include "EDlcType.generated.h"

UENUM(BlueprintType)
enum class EDlcType : uint8 {
    None,
    Fighter,
    Map,
    Decal,
    Weapon,
    FighterDev,
    Item,
    VEHICLE,
    NUM,
};

