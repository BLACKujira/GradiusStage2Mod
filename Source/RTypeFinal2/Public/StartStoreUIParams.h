#pragma once
#include "CoreMinimal.h"
#include "StartStoreUIParams.generated.h"

USTRUCT(BlueprintType)
struct FStartStoreUIParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ProductId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAddToCart;
    
    RTYPEFINAL2_API FStartStoreUIParams();
};

