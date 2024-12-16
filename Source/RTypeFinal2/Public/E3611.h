#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "E3611.generated.h"

class AE3600DripEffect;

UCLASS(Blueprintable)
class AE3611 : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentEnemy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AE3600DripEffect* DripEffect;
    
public:
    AE3611(const FObjectInitializer& ObjectInitializer);

};

