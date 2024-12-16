#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EnemyDifficultyTableFloat.generated.h"

USTRUCT(BlueprintType)
struct FEnemyDifficultyTableFloat : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> Values;
    
    RTYPEFINAL2_API FEnemyDifficultyTableFloat();
};

