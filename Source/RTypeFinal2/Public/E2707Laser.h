#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "E2707Laser.generated.h"

UCLASS(Blueprintable)
class AE2707Laser : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentEnemy;
    
public:
    AE2707Laser(const FObjectInitializer& ObjectInitializer);

};

