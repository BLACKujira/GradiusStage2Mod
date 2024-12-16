#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "E2610Bullet.generated.h"

UCLASS(Blueprintable)
class AE2610Bullet : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentEnemy;
    
public:
    AE2610Bullet(const FObjectInitializer& ObjectInitializer);

};

