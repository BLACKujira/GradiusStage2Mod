#pragma once
#include "CoreMinimal.h"
#include "ExPositions.h"
#include "ExPositionsTable.generated.h"

USTRUCT(BlueprintType)
struct FExPositionsTable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FExPositions> Tables;
    
    RTYPEFINAL2_API FExPositionsTable();
};

