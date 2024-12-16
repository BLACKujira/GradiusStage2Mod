#pragma once
#include "CoreMinimal.h"
#include "S790L073Mode.generated.h"

UENUM(BlueprintType)
enum class S790L073Mode : uint8 {
    PRE_BEND,
    POST_BEND,
    NUM,
};

