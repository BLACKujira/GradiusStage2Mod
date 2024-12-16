#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "S542.generated.h"

UCLASS(Blueprintable)
class AS542 : public AEnemyActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentEnemy;
    
    AS542(const FObjectInitializer& ObjectInitializer);

};

