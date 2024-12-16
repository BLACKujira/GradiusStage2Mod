#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "BS007Bullet.generated.h"

UCLASS(Blueprintable)
class ABS007Bullet : public AEnemyActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentEnemy;
    
    ABS007Bullet(const FObjectInitializer& ObjectInitializer);

};

