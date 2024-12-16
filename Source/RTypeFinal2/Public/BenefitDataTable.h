#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ECFId.h"
#include "ECFType.h"
#include "BenefitDataTable.generated.h"

USTRUCT(BlueprintType)
struct FBenefitDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECFId ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECFType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Password;
    
    RTYPEFINAL2_API FBenefitDataTable();
};

