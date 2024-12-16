#pragma once
#include "CoreMinimal.h"
#include "EBS021SearchBullet_ACT.generated.h"

UENUM(BlueprintType)
enum class EBS021SearchBullet_ACT : uint8 {
    STRAIGHT,
    SEARCH,
    DEATH,
    NUM,
};

