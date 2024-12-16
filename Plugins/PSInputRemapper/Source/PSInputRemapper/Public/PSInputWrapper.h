#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "PSInputWrapper.generated.h"

USTRUCT(BlueprintType)
struct FPSInputWrapper {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString BindName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString KeyAsString;
    
    PSINPUTREMAPPER_API FPSInputWrapper();
};

