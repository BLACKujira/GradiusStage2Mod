#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EE7501_COMMAND.h"
#include "E7501Command_TableRow.generated.h"

USTRUCT(BlueprintType)
struct FE7501Command_TableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EE7501_COMMAND Command;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Param;
    
    RTYPEFINAL2_API FE7501Command_TableRow();
};

