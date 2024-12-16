#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "BS501Laser.generated.h"

UCLASS(Blueprintable)
class ABS501Laser : public AEnemyActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentEnemy;
    
    ABS501Laser(const FObjectInitializer& ObjectInitializer);

};

