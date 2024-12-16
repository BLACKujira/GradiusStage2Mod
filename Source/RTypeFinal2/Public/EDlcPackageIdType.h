#pragma once
#include "CoreMinimal.h"
#include "EDlcPackageIdType.generated.h"

UENUM(BlueprintType)
enum class EDlcPackageIdType : uint8 {
    None,
    Benefit,
    ContentId,
};

