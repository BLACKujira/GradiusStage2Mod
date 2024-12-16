#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "S5204.generated.h"

UCLASS(Blueprintable)
class AS5204 : public AEnemyActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentEnemy;
    
    AS5204(const FObjectInitializer& ObjectInitializer);

};

