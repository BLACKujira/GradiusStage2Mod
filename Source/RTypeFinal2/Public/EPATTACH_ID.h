#pragma once
#include "CoreMinimal.h"
#include "EPATTACH_ID.generated.h"

UENUM(BlueprintType)
enum class EPATTACH_ID : uint8 {
    PATTACH_ROOT,
    PATTACH_HAND_L,
    PATTACH_HAND_R,
    NUM,
};

