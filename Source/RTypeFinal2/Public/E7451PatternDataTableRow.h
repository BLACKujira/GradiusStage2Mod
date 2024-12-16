#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "E7451PatternDataTableRow.generated.h"

USTRUCT(BlueprintType)
struct FE7451PatternDataTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> Data;
    
    RTYPEFINAL2_API FE7451PatternDataTableRow();
};

