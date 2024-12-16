#pragma once
#include "CoreMinimal.h"
#include "EPM_ID.generated.h"

UENUM(BlueprintType)
enum class EPM_ID : uint8 {
    BODY,
    CANOPY_IN,
    CANOPY,
    NUM,
};

