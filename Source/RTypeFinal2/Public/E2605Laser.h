#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "E2605Laser.generated.h"

UCLASS(Blueprintable)
class AE2605Laser : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentEnemy;
    
public:
    AE2605Laser(const FObjectInitializer& ObjectInitializer);

};

