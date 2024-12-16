#pragma once
#include "CoreMinimal.h"
#include "E5720PartsData.generated.h"

class UE5720PartsArmor;
class UE5720PartsBone;

USTRUCT(BlueprintType)
struct FE5720PartsData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNotBreak;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ChainTopSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ChainTailSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UE5720PartsBone* PartsBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UE5720PartsArmor* PartsArmor;
    
    RTYPEFINAL2_API FE5720PartsData();
};

