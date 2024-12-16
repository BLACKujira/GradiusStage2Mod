#pragma once
#include "CoreMinimal.h"
#include "RECORD_DEF.generated.h"

USTRUCT(BlueprintType)
struct FRECORD_DEF {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString NameKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Masked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OpenFlag;
    
    RTYPEFINAL2_API FRECORD_DEF();
};

