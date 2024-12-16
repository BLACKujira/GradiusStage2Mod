#pragma once
#include "CoreMinimal.h"
#include "E1520Pos.h"
#include "E1520PosTable.generated.h"

USTRUCT(BlueprintType)
struct FE1520PosTable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FE1520Pos> PosDatas;
    
    RTYPEFINAL2_API FE1520PosTable();
};

