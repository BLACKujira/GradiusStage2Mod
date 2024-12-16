#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "BS029HomingBullet.generated.h"

UCLASS(Blueprintable)
class ABS029HomingBullet : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentActor;
    
public:
    ABS029HomingBullet(const FObjectInitializer& ObjectInitializer);

};

