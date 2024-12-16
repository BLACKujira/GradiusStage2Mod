#pragma once
#include "CoreMinimal.h"
#include "CustomizeSetting.h"
#include "RecordDifficultySetting.generated.h"

USTRUCT(BlueprintType)
struct FRecordDifficultySetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCustomizeSetting> Setting;
    
    RTYPEFINAL2_API FRecordDifficultySetting();
};

