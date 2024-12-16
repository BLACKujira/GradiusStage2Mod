#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "DamageInfo.generated.h"

USTRUCT(BlueprintType)
struct FDamageInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitResult HitResult;
    
    RTYPEFINAL2_API FDamageInfo();
};

