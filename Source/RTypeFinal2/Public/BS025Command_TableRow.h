#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "BS025Command_TableRow.generated.h"

USTRUCT(BlueprintType)
struct FBS025Command_TableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Param;
    
    RTYPEFINAL2_API FBS025Command_TableRow();
};

