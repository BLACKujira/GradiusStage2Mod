#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "S3610.generated.h"

UCLASS(Blueprintable)
class AS3610 : public AEnemyActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentEnemy;
    
    AS3610(const FObjectInitializer& ObjectInitializer);

};

