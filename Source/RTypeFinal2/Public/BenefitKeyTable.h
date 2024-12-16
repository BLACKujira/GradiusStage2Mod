#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "BenefitKeyTable.generated.h"

USTRUCT(BlueprintType)
struct FBenefitKeyTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 No;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Key;
    
    RTYPEFINAL2_API FBenefitKeyTable();
};

