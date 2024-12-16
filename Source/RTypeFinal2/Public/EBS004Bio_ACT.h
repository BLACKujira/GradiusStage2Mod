#pragma once
#include "CoreMinimal.h"
#include "EBS004Bio_ACT.generated.h"

UENUM(BlueprintType)
enum class EBS004Bio_ACT : uint8 {
    START,
    FALL,
    LAND,
    DEATH,
    NUM,
};

