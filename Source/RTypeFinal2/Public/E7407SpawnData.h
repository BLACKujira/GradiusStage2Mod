#pragma once
#include "CoreMinimal.h"
#include "E7452SpawnEnemyData.h"
#include "E7407SpawnData.generated.h"

USTRUCT(BlueprintType)
struct FE7407SpawnData : public FE7452SpawnEnemyData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SpawnVecX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttackStartTime;
    
    RTYPEFINAL2_API FE7407SpawnData();
};

