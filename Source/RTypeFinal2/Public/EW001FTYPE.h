#pragma once
#include "CoreMinimal.h"
#include "EW001FTYPE.generated.h"

UENUM(BlueprintType)
enum class EW001FTYPE : uint8 {
    FORCE,
    FORCE029,
    FORCE031,
    FORCE049,
    BUNDLE,
    BIT,
    NUM,
};

