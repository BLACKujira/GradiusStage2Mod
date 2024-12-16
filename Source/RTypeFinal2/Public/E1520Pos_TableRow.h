#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "E1520Pos_TableRow.generated.h"

USTRUCT(BlueprintType)
struct FE1520Pos_TableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Param;
    
    RTYPEFINAL2_API FE1520Pos_TableRow();
};

