#pragma once
#include "CoreMinimal.h"
#include "EScrollManager_ScreenRotAxis.generated.h"

UENUM(BlueprintType)
enum class EScrollManager_ScreenRotAxis : uint8 {
    None,
    Roll,
    Pitch,
    Yaw,
};

