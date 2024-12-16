#pragma once
#include "CoreMinimal.h"
#include "EBS002_COMMAND.generated.h"

UENUM(BlueprintType)
enum class EBS002_COMMAND : uint8 {
    Set_Gate,
    Start,
    End,
    Open_Gate,
    Close_Gate,
    Move_Left,
    Move_Right,
    Move_Up,
    Move_Down,
    Move_Stop,
    On_Signal,
    Blink_Signal_S,
    Blink_Signal_R,
    Blink_Signal_L,
    Set_POW,
    Attack,
};

