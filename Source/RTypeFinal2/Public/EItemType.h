#pragma once
#include "CoreMinimal.h"
#include "EItemType.generated.h"

UENUM(BlueprintType)
enum class EItemType : uint8 {
    RED,
    BLUE,
    YELLOW,
    MISSILE,
    BIT,
    BYDO,
    Bydogen,
    Etherium,
    Solonium,
    StageBranch_PINK,
    StageBranch_ORANGE,
    StageBranch_GREEN,
    StageBranch_PURPLE,
    StageBranch_GRAY,
    NUM,
};

