#pragma once
#include "CoreMinimal.h"
#include "EPlatformChunkProgressReportingType.generated.h"

UENUM(BlueprintType)
enum class EPlatformChunkProgressReportingType : uint8 {
    ETA,
    PercentageComplete,
};

