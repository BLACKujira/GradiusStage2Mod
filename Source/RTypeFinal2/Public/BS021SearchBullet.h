#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "BS021SearchBullet.generated.h"

UCLASS(Blueprintable)
class ABS021SearchBullet : public AEnemyActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SearchInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentEnemy;
    
    ABS021SearchBullet(const FObjectInitializer& ObjectInitializer);

};

