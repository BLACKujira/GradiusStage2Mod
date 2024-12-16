#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "E7601_WallMapPatternHeaderTableRow.generated.h"

USTRUCT(BlueprintType)
struct FE7601_WallMapPatternHeaderTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntVector Num;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector size;
    
    RTYPEFINAL2_API FE7601_WallMapPatternHeaderTableRow();
};

