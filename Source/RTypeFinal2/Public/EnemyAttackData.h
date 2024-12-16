#pragma once
#include "CoreMinimal.h"
#include "EnemyAttackData.generated.h"

class USceneComponent;

USTRUCT(BlueprintType)
struct FEnemyAttackData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* ParentComponent;
    
    RTYPEFINAL2_API FEnemyAttackData();
};

