#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EE386_COMMAND.h"
#include "E386Command_TableRow.generated.h"

USTRUCT(BlueprintType)
struct FE386Command_TableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EE386_COMMAND Command;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Param;
    
    RTYPEFINAL2_API FE386Command_TableRow();
};

