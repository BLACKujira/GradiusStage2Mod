#pragma once
#include "CoreMinimal.h"
#include "BS705BulletInterface.h"
#include "EnemyActor.h"
#include "BS705_ShinenBullet.generated.h"

UCLASS(Blueprintable)
class ABS705_ShinenBullet : public AEnemyActor, public IBS705BulletInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentEnemy;
    
public:
    ABS705_ShinenBullet(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

