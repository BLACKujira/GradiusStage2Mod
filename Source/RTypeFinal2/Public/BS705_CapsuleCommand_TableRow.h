#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EBS705_CAPSULE_COMMAND.h"
#include "BS705_CapsuleCommand_TableRow.generated.h"

USTRUCT(BlueprintType)
struct FBS705_CapsuleCommand_TableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBS705_CAPSULE_COMMAND Command;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Param;
    
    RTYPEFINAL2_API FBS705_CapsuleCommand_TableRow();
};

