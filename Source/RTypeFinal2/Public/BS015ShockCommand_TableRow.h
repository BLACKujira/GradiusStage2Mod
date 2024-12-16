#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "BS015ShockCommand_TableRow.generated.h"

USTRUCT(BlueprintType)
struct FBS015ShockCommand_TableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Param;
    
    RTYPEFINAL2_API FBS015ShockCommand_TableRow();
};

