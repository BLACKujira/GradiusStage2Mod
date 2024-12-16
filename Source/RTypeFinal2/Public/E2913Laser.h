#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "E2913Laser.generated.h"

UCLASS(Blueprintable)
class AE2913Laser : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentEnemy;
    
public:
    AE2913Laser(const FObjectInitializer& ObjectInitializer);

};

