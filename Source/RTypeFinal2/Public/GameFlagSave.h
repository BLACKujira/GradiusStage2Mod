#pragma once
#include "CoreMinimal.h"
#include "GameFlagSave.generated.h"

USTRUCT(BlueprintType)
struct FGameFlagSave {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint32> FlagsArray;
    
    RTYPEFINAL2_API FGameFlagSave();
};

