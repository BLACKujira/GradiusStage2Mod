#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "BS501Bullet.generated.h"

UCLASS(Blueprintable)
class ABS501Bullet : public AEnemyActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentEnemy;
    
    ABS501Bullet(const FObjectInitializer& ObjectInitializer);

};

