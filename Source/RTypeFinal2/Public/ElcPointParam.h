#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ElcPointParam.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FElcPointParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Enabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Offset1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Offset2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* SafeObjectPointer;
    
    RTYPEFINAL2_API FElcPointParam();
};

