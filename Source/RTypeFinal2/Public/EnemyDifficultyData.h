#pragma once
#include "CoreMinimal.h"
#include "EDifficulty.h"
#include "EPlayerLevel.h"
#include "EnemyDifficultyData.generated.h"

USTRUCT(BlueprintType)
struct FEnemyDifficultyData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDifficulty Difficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MissionNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlayerLevel PlayerLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScoreBias;
    
    RTYPEFINAL2_API FEnemyDifficultyData();
};

