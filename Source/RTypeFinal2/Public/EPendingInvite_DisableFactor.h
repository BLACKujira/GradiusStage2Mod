#pragma once
#include "CoreMinimal.h"
#include "EPendingInvite_DisableFactor.generated.h"

UENUM(BlueprintType)
enum class EPendingInvite_DisableFactor : uint8 {
    None,
    System,
    Game,
    Savedata = 4,
};

