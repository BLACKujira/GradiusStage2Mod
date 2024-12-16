#pragma once
#include "CoreMinimal.h"
#include "EE1802_ACT.generated.h"

UENUM(BlueprintType)
enum class EE1802_ACT : uint8 {
    ENTRY,
    FLY,
    EXIT,
    DEATH,
    NUM,
};

