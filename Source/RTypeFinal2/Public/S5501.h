#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "S5501.generated.h"

UCLASS(Blueprintable)
class AS5501 : public AEnemyActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentEnemy;
    
    AS5501(const FObjectInitializer& ObjectInitializer);

};

