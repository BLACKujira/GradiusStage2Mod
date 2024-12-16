#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "E7601_WallMapPatternDataTableRow.generated.h"

USTRUCT(BlueprintType)
struct FE7601_WallMapPatternDataTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> Data;
    
    RTYPEFINAL2_API FE7601_WallMapPatternDataTableRow();
};

