#pragma once
#include "CoreMinimal.h"
#include "EnemyDifficultyCommon.h"
#include "EnemyDifficultyTableInt32.h"
#include "EnemyDifficultyInt32.generated.h"

USTRUCT(BlueprintType)
struct FEnemyDifficultyInt32 : public FEnemyDifficultyCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEnemyDifficultyTableInt32> Tables;
    
    RTYPEFINAL2_API FEnemyDifficultyInt32();
};

