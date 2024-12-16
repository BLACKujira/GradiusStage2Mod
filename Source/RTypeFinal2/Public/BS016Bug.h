#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "BS016Bug.generated.h"

UCLASS(Blueprintable)
class ABS016Bug : public AEnemyActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentEnemy;
    
    ABS016Bug(const FObjectInitializer& ObjectInitializer);

};

