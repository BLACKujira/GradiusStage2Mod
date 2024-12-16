#pragma once
#include "CoreMinimal.h"
#include "EDammyMode.generated.h"

UENUM(BlueprintType)
enum class EDammyMode : uint8 {
    APP,
    LOOP,
    BYE,
    NUM,
};

