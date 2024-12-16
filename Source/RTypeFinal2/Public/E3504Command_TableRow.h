#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EE3504_COMMAND.h"
#include "E3504Command_TableRow.generated.h"

USTRUCT(BlueprintType)
struct FE3504Command_TableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EE3504_COMMAND Command;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Param;
    
    RTYPEFINAL2_API FE3504Command_TableRow();
};

