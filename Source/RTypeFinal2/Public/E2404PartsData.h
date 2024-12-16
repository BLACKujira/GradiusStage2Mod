#pragma once
#include "CoreMinimal.h"
#include "E2404PartsData.generated.h"

class UE2404Parts;

USTRUCT(BlueprintType)
struct FE2404PartsData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ChainTopSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ChainTailSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UE2404Parts* Parts;
    
    RTYPEFINAL2_API FE2404PartsData();
};

