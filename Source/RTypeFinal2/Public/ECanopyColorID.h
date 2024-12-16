#pragma once
#include "CoreMinimal.h"
#include "ECanopyColorID.generated.h"

UENUM(BlueprintType)
enum class ECanopyColorID : uint8 {
    CC_WHITE,
    CC_BLACK,
    CC_RED,
    CC_ORANGE,
    CC_YELLOW,
    CC_GREEN,
    CC_BLUE,
    CC_PURPLE,
    CC_USER,
    NUM,
    CC_DEFAULT = NUM,
    CC__ = CC_WHITE,
};

