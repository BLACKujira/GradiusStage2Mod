#pragma once
#include "CoreMinimal.h"
#include "EBS021_BubbleBullet_ACT.generated.h"

UENUM(BlueprintType)
enum class EBS021_BubbleBullet_ACT : uint8 {
    SHOT,
    MOVE,
    STOP,
    DEATH,
    NUM,
};

