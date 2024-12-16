#pragma once
#include "CoreMinimal.h"
#include "EEW001FTYPE.generated.h"

UENUM(BlueprintType)
enum class EEW001FTYPE : uint8 {
    FORCE,
    FORCE029,
    FORCE031,
    FORCE049,
    BUNDLE,
    BIT,
    NUM,
};

