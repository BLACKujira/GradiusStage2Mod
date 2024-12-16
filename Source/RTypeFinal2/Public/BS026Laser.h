#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "BS026Laser.generated.h"

UCLASS(Blueprintable)
class ABS026Laser : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentEnemy;
    
public:
    ABS026Laser(const FObjectInitializer& ObjectInitializer);

};

