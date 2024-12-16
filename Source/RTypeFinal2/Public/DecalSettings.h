#pragma once
#include "CoreMinimal.h"
#include "DecalSetting.h"
#include "DecalSettings.generated.h"

USTRUCT(BlueprintType)
struct FDecalSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDecalSetting> Decals;
    
    RTYPEFINAL2_API FDecalSettings();
};

