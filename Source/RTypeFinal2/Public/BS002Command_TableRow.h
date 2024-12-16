#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EBS002_COMMAND.h"
#include "BS002Command_TableRow.generated.h"

USTRUCT(BlueprintType)
struct FBS002Command_TableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBS002_COMMAND Command;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Param;
    
    RTYPEFINAL2_API FBS002Command_TableRow();
};

