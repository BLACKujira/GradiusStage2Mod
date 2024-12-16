#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "E3615.generated.h"

class AE3600DripEffect;

UCLASS(Blueprintable)
class AE3615 : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentEnemy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AE3600DripEffect* DripEffect;
    
public:
    AE3615(const FObjectInitializer& ObjectInitializer);

};

