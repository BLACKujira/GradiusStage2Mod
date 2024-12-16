#pragma once
#include "CoreMinimal.h"
#include "EE7510_ACT.generated.h"

UENUM(BlueprintType)
enum class EE7510_ACT : uint8 {
    APP,
    DESTROY,
    DEATH,
    NUM,
};

