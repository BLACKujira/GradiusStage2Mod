#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FlagNumber.generated.h"

USTRUCT(BlueprintType)
struct FFlagNumber : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Number;
    
    RTYPEFINAL2_API FFlagNumber();
};

