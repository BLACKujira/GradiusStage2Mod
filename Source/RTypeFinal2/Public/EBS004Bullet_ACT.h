#pragma once
#include "CoreMinimal.h"
#include "EBS004Bullet_ACT.generated.h"

UENUM(BlueprintType)
enum class EBS004Bullet_ACT : uint8 {
    LAUNCH,
    BURST,
    DEATH,
    NUM,
};

