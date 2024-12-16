#pragma once
#include "CoreMinimal.h"
#include "ECFType.generated.h"

UENUM(BlueprintType)
enum class ECFType : uint8 {
    None,
    Decal,
    Weapon,
    Body,
    Sequence,
    NUM,
};

