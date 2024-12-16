#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "S3616.generated.h"

UCLASS(Blueprintable)
class AS3616 : public AEnemyActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentEnemy;
    
    AS3616(const FObjectInitializer& ObjectInitializer);

};

