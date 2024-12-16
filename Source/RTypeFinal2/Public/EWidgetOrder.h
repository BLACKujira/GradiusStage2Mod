#pragma once
#include "CoreMinimal.h"
#include "EWidgetOrder.generated.h"

UENUM(BlueprintType)
enum class EWidgetOrder : uint8 {
    Default,
    Message,
    Cockpit,
    StageStart,
    FrameCapture,
    LoadScr,
    GameOverScr,
    ClearScr,
    ChunkDialog,
    Pause,
    SaveIcon,
    Debug,
    DialogBase = 111,
    DialogLow,
    DialogHigh,
    DialogCtrl,
};

