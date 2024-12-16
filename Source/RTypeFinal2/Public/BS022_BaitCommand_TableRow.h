#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EBS022Bait_COMMAND.h"
#include "BS022_BaitCommand_TableRow.generated.h"

USTRUCT(BlueprintType)
struct FBS022_BaitCommand_TableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBS022Bait_COMMAND Command;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Param;
    
    RTYPEFINAL2_API FBS022_BaitCommand_TableRow();
};

