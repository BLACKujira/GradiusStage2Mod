#pragma once
#include "CoreMinimal.h"
#include "EPSInputType.generated.h"

UENUM(BlueprintType)
enum class EPSInputType : uint8 {
    Keyboard,
    Mouse,
    Gamepad,
    KeyboardOrMouse,
};

