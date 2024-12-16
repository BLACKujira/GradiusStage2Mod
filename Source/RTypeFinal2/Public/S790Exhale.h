#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "S790Exhale.generated.h"

UCLASS(Blueprintable)
class AS790Exhale : public AEnemyActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentEnemy;
    
    AS790Exhale(const FObjectInitializer& ObjectInitializer);

};

