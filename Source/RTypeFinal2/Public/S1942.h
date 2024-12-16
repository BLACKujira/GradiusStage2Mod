#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "S1942.generated.h"

UCLASS(Blueprintable)
class AS1942 : public AEnemyActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentEnemy;
    
    AS1942(const FObjectInitializer& ObjectInitializer);

};

