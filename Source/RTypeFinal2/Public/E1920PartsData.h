#pragma once
#include "CoreMinimal.h"
#include "E1020PartsData.h"
#include "E1920PartsData.generated.h"

USTRUCT(BlueprintType)
struct FE1920PartsData : public FE1020PartsData {
    GENERATED_BODY()
public:
    RTYPEFINAL2_API FE1920PartsData();
};

