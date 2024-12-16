#pragma once
#include "CoreMinimal.h"
#include "EE3615_ACT.generated.h"

UENUM(BlueprintType)
enum class EE3615_ACT : uint8 {
    IDLE,
    BROKEN,
    DEATH,
    NUM,
};

