#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EE230_COMMAND.h"
#include "E230Command_TableRow.generated.h"

USTRUCT(BlueprintType)
struct FE230Command_TableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EE230_COMMAND Command;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Param;
    
    RTYPEFINAL2_API FE230Command_TableRow();
};

