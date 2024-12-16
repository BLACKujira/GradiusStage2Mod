#pragma once
#include "CoreMinimal.h"
#include "BS025Command.h"
#include "BS025CommandTable.generated.h"

USTRUCT(BlueprintType)
struct FBS025CommandTable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBS025Command> CommandDatas;
    
    RTYPEFINAL2_API FBS025CommandTable();
};

