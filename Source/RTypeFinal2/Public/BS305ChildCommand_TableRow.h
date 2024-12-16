#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EBS305Child_COMMAND.h"
#include "BS305ChildCommand_TableRow.generated.h"

USTRUCT(BlueprintType)
struct FBS305ChildCommand_TableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBS305Child_COMMAND Command;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Param;
    
    RTYPEFINAL2_API FBS305ChildCommand_TableRow();
};

