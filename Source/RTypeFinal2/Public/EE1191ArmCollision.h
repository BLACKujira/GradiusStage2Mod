#pragma once
#include "CoreMinimal.h"
#include "EE1191ArmCollision.generated.h"

UENUM(BlueprintType)
enum class EE1191ArmCollision : uint8 {
    None,
    Arm,
    Hand,
};

