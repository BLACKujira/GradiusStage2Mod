#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "S3614.generated.h"

UCLASS(Blueprintable)
class AS3614 : public AEnemyActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentEnemy;
    
    AS3614(const FObjectInitializer& ObjectInitializer);

};

