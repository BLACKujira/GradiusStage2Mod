#pragma once
#include "CoreMinimal.h"
#include "EnemyDifficultyCommon.h"
#include "EnemyDifficultyTableFloat.h"
#include "EnemyDifficultyFloat.generated.h"

USTRUCT(BlueprintType)
struct FEnemyDifficultyFloat : public FEnemyDifficultyCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEnemyDifficultyTableFloat> Tables;
    
    RTYPEFINAL2_API FEnemyDifficultyFloat();
};

