#pragma once
#include "CoreMinimal.h"
#include "BS002Command.h"
#include "BS002CommandTable.generated.h"

USTRUCT(BlueprintType)
struct FBS002CommandTable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBS002Command> CommandDatas;
    
    RTYPEFINAL2_API FBS002CommandTable();
};

