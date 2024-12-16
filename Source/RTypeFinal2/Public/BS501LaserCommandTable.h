#pragma once
#include "CoreMinimal.h"
#include "BS501LaserCommand.h"
#include "BS501LaserCommandTable.generated.h"

USTRUCT(BlueprintType)
struct FBS501LaserCommandTable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBS501LaserCommand> CommandDatas;
    
    RTYPEFINAL2_API FBS501LaserCommandTable();
};

