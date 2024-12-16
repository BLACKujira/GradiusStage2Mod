#pragma once
#include "CoreMinimal.h"
#include "E1020PartsData.generated.h"

class UE1020PartsArmor;
class UE1020PartsBone;

USTRUCT(BlueprintType)
struct FE1020PartsData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNotBreak;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ChainTopSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ChainTailSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UE1020PartsBone* PartsBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UE1020PartsArmor* PartsArmor;
    
    RTYPEFINAL2_API FE1020PartsData();
};

