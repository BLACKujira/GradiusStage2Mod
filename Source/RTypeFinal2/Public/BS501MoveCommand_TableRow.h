#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EBS501_MOVECOMMAND.h"
#include "BS501MoveCommand_TableRow.generated.h"

USTRUCT(BlueprintType)
struct FBS501MoveCommand_TableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBS501_MOVECOMMAND Command;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Param;
    
    RTYPEFINAL2_API FBS501MoveCommand_TableRow();
};

