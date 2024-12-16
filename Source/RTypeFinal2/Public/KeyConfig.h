#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "KeyConfig.generated.h"

USTRUCT(BlueprintType)
struct FKeyConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ActionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Scale;
    
    RTYPEFINAL2_API FKeyConfig();
};

