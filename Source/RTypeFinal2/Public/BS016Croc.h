#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "BS016Croc.generated.h"

UCLASS(Blueprintable)
class ABS016Croc : public AEnemyActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentEnemy;
    
    ABS016Croc(const FObjectInitializer& ObjectInitializer);

};

