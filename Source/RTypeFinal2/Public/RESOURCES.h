#pragma once
#include "CoreMinimal.h"
#include "RESOURCES.generated.h"

USTRUCT(BlueprintType)
struct FRESOURCES {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 S;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 E;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 B;
    
    RTYPEFINAL2_API FRESOURCES();
};

