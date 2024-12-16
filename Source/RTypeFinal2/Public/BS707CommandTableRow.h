#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EBS707_COMMAND.h"
#include "BS707CommandTableRow.generated.h"

USTRUCT(BlueprintType)
struct FBS707CommandTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBS707_COMMAND Command;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Param;
    
    RTYPEFINAL2_API FBS707CommandTableRow();
};

