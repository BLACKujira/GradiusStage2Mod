#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "S7203Torpedo.generated.h"

UCLASS(Blueprintable)
class AS7203Torpedo : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentEnemy;
    
public:
    AS7203Torpedo(const FObjectInitializer& ObjectInitializer);

};

