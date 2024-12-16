#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "S790Fire.generated.h"

UCLASS(Blueprintable)
class AS790Fire : public AEnemyActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentEnemy;
    
    AS790Fire(const FObjectInitializer& ObjectInitializer);

};

