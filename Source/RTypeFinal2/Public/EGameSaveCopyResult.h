#pragma once
#include "CoreMinimal.h"
#include "EGameSaveCopyResult.generated.h"

UENUM(BlueprintType)
enum class EGameSaveCopyResult : uint8 {
    OK,
    Source_DoesNotExist,
    Source_Corrupt,
    Source_ReadError,
    Destination_WriteError,
    UnknownError,
};

