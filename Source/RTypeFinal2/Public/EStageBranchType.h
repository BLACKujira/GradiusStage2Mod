#pragma once
#include "CoreMinimal.h"
#include "EStageBranchType.generated.h"

UENUM(BlueprintType)
enum class EStageBranchType : uint8 {
    None,
    PINK,
    ORANGE,
    GREEN,
    PURPLE,
    GRAY,
    NUM,
};

