#pragma once
#include "CoreMinimal.h"
#include "EEnemyPrimType.generated.h"

UENUM(BlueprintType)
enum class EEnemyPrimType : uint8 {
    Sphere,
    Capsule,
    Box,
    NUM,
};

