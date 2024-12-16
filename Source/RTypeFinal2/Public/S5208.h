#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "S5208.generated.h"

UCLASS(Blueprintable)
class AS5208 : public AEnemyActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentEnemy;
    
    AS5208(const FObjectInitializer& ObjectInitializer);

};

