#pragma once
#include "CoreMinimal.h"
#include "EPlatformChunkLocation.generated.h"

UENUM(BlueprintType)
enum class EPlatformChunkLocation : uint8 {
    DoesNotExist,
    NotAvailable,
    LocalSlow,
    LocalFast,
};

