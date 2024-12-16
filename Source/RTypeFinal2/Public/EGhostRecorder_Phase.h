#pragma once
#include "CoreMinimal.h"
#include "EGhostRecorder_Phase.generated.h"

UENUM(BlueprintType)
enum class EGhostRecorder_Phase : uint8 {
    IDLE,
    RECORD,
    END,
};

