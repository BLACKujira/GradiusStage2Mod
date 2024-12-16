#pragma once
#include "CoreMinimal.h"
#include "EBS021_ACT.generated.h"

UENUM(BlueprintType)
enum class EBS021_ACT : uint8 {
    APPER,
    STRAIGHT,
    SEARCH,
    DEATH,
    NUM,
};

