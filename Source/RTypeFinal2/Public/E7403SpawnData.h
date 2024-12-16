#pragma once
#include "CoreMinimal.h"
#include "E7452SpawnEnemyData.h"
#include "E7403SpawnData.generated.h"

USTRUCT(BlueprintType)
struct FE7403SpawnData : public FE7452SpawnEnemyData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SpawnVecX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveLimitRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttackStartTimer;
    
    RTYPEFINAL2_API FE7403SpawnData();
};

