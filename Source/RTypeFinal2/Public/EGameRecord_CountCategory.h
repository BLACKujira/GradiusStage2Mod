#pragma once
#include "CoreMinimal.h"
#include "EGameRecord_CountCategory.generated.h"

UENUM(BlueprintType)
enum class EGameRecord_CountCategory : uint8 {
    Clear,
    ClearNoMiss,
    ClearNotPickupItem,
    ClearNotUseSpecialWeapon,
    ClearNotUseShockwave,
    ClearNotUseRapidShot,
    ClearNoContinue,
};

