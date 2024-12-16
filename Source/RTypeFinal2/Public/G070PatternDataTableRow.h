#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "G070PatternDataTableRow.generated.h"

USTRUCT(BlueprintType)
struct FG070PatternDataTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> Data;
    
    RTYPEFINAL2_API FG070PatternDataTableRow();
};

