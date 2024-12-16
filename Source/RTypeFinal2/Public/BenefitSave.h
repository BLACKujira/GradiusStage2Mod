#pragma once
#include "CoreMinimal.h"
#include "BenefitRecord.h"
#include "BenefitSave.generated.h"

USTRUCT(BlueprintType)
struct FBenefitSave {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBenefitRecord> Records;
    
    RTYPEFINAL2_API FBenefitSave();
};

