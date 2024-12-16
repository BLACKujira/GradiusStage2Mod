#pragma once
#include "CoreMinimal.h"
#include "EnemyManageData.generated.h"

class UEnemyParam;

USTRUCT(BlueprintType)
struct FEnemyManageData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnemyParam* Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumOfActor;
    
    RTYPEFINAL2_API FEnemyManageData();
};

