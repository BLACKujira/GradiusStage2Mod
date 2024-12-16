#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EBS305Parent_COMMAND.h"
#include "BS305ParentCommand_TableRow.generated.h"

USTRUCT(BlueprintType)
struct FBS305ParentCommand_TableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBS305Parent_COMMAND Command;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Param;
    
    RTYPEFINAL2_API FBS305ParentCommand_TableRow();
};

