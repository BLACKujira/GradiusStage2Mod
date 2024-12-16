#pragma once
#include "CoreMinimal.h"
#include "ECountData_PosType.generated.h"

UENUM(BlueprintType)
enum class ECountData_PosType : uint8 {
    WORLD,
    SCREEN,
    SERIAL,
};

