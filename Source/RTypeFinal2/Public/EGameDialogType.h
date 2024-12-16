#pragma once
#include "CoreMinimal.h"
#include "EGameDialogType.generated.h"

UENUM(BlueprintType)
enum class EGameDialogType : uint8 {
    None,
    Generic,
    ControllerDisconnected,
};

