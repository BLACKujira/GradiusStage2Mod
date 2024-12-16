#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "BS502_Laser.generated.h"

UCLASS(Blueprintable)
class ABS502_Laser : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentEnemy;
    
public:
    ABS502_Laser(const FObjectInitializer& ObjectInitializer);

};

