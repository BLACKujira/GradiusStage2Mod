#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "S7203Missile.generated.h"

UCLASS(Blueprintable)
class AS7203Missile : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentEnemy;
    
public:
    AS7203Missile(const FObjectInitializer& ObjectInitializer);

};

