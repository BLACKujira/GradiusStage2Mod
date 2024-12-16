#pragma once
#include "CoreMinimal.h"
#include "EControllerReconnectDisableCause.generated.h"

UENUM(BlueprintType)
enum class EControllerReconnectDisableCause : uint8 {
    None,
    Boot,
    BootLogin,
    Demo = 4,
    SceneChange = 8,
    LoadScreen = 16,
    MASK_ALL = 255,
};

