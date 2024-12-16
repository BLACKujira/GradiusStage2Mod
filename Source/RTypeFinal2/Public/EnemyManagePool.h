#pragma once
#include "CoreMinimal.h"
#include "EnemyManagePool.generated.h"

class UEnemyParam;
class UObjectPoolActor;

USTRUCT(BlueprintType)
struct FEnemyManagePool {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObjectPoolActor* Pool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnemyParam* Param;
    
    RTYPEFINAL2_API FEnemyManagePool();
};

