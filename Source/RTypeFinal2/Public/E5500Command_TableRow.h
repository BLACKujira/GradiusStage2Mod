#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EE5500_COMMAND.h"
#include "E5500Command_TableRow.generated.h"

USTRUCT(BlueprintType)
struct FE5500Command_TableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EE5500_COMMAND Command;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Param;
    
    RTYPEFINAL2_API FE5500Command_TableRow();
};

