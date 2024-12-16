#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "BS004Bullet.generated.h"

UCLASS(Blueprintable)
class ABS004Bullet : public AEnemyActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentEnemy;
    
    ABS004Bullet(const FObjectInitializer& ObjectInitializer);

};

