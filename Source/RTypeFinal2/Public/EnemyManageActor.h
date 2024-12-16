#pragma once
#include "CoreMinimal.h"
#include "EnemyManageActor.generated.h"

class UEnemyParam;

USTRUCT(BlueprintType)
struct FEnemyManageActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnemyParam* Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* ClassActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumOfActor;
    
    RTYPEFINAL2_API FEnemyManageActor();
};

