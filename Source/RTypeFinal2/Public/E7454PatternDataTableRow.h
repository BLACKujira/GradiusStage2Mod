#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "E7454PatternDataTableRow.generated.h"

USTRUCT(BlueprintType)
struct FE7454PatternDataTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> Data;
    
    RTYPEFINAL2_API FE7454PatternDataTableRow();
};

