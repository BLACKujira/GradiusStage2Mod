#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EE1823_COMMAND.h"
#include "E1823Command_TableRow.generated.h"

USTRUCT(BlueprintType)
struct FE1823Command_TableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EE1823_COMMAND Command;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Param;
    
    RTYPEFINAL2_API FE1823Command_TableRow();
};

