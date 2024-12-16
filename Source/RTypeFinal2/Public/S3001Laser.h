#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "S3001Laser.generated.h"

UCLASS(Blueprintable)
class AS3001Laser : public AEnemyActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentEnemy;
    
    AS3001Laser(const FObjectInitializer& ObjectInitializer);

};

