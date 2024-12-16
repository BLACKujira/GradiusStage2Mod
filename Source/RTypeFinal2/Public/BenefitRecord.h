#pragma once
#include "CoreMinimal.h"
#include "SafeInt.h"
#include "SafeString.h"
#include "BenefitRecord.generated.h"

USTRUCT(BlueprintType)
struct FBenefitRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSafeInt ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSafeString Password;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSafeInt EgSeedU;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSafeInt EgSeedL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSafeString EgKey;
    
    RTYPEFINAL2_API FBenefitRecord();
};

