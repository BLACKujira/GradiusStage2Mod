#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "E2604Laser.generated.h"

UCLASS(Blueprintable)
class AE2604Laser : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentEnemy;
    
public:
    AE2604Laser(const FObjectInitializer& ObjectInitializer);

};

