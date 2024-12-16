#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ExPosition.h"
#include "ExPositions.generated.h"

USTRUCT(BlueprintType)
struct FExPositions : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FExPosition> Positions;
    
    RTYPEFINAL2_API FExPositions();
};

