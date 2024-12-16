#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "S2301.generated.h"

UCLASS(Blueprintable)
class AS2301 : public AEnemyActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentEnemy;
    
    AS2301(const FObjectInitializer& ObjectInitializer);

};

