#pragma once
#include "CoreMinimal.h"
#include "EPresenceType.generated.h"

UENUM(BlueprintType)
enum class EPresenceType : uint8 {
    IN_MENU,
    IN_GAME,
};

