#pragma once
#include "CoreMinimal.h"
#include "EBS703_ACT.generated.h"

UENUM(BlueprintType)
enum class EBS703_ACT : uint8 {
    READY,
    APP,
    RETREAT,
    DEATH,
    NUM,
};

