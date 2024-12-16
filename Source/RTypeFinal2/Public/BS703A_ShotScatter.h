#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "BS703A_ShotScatter.generated.h"

UCLASS(Blueprintable)
class ABS703A_ShotScatter : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentEnemy;
    
public:
    ABS703A_ShotScatter(const FObjectInitializer& ObjectInitializer);

};

