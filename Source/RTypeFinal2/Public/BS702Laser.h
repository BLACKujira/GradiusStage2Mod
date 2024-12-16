#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "BS702Laser.generated.h"

UCLASS(Blueprintable)
class ABS702Laser : public AEnemyActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentEnemy;
    
    ABS702Laser(const FObjectInitializer& ObjectInitializer);

};

