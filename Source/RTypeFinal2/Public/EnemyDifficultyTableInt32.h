#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EnemyDifficultyTableInt32.generated.h"

USTRUCT(BlueprintType)
struct FEnemyDifficultyTableInt32 : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> Values;
    
    RTYPEFINAL2_API FEnemyDifficultyTableInt32();
};

