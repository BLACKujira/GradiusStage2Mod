#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "BS707Bullet.generated.h"

UCLASS(Blueprintable)
class ABS707Bullet : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentEnemy;
    
public:
    ABS707Bullet(const FObjectInitializer& ObjectInitializer);

};

