#pragma once
#include "CoreMinimal.h"
#include "EGameSaveExistsResult.generated.h"

UENUM(BlueprintType)
enum class EGameSaveExistsResult : uint8 {
    OK,
    DoesNotExist,
    Corrupt,
    UnspecifiedError,
};

