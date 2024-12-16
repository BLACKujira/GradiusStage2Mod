#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "BS027LargeBeam.generated.h"

UCLASS(Blueprintable)
class ABS027LargeBeam : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentEnemy;
    
public:
    ABS027LargeBeam(const FObjectInitializer& ObjectInitializer);

};

