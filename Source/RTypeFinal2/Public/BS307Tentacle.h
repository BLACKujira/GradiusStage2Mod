#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "BS307Tentacle.generated.h"

UCLASS(Blueprintable)
class ABS307Tentacle : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentEnemy;
    
public:
    ABS307Tentacle(const FObjectInitializer& ObjectInitializer);

};

