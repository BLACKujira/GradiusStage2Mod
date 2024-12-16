#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "BS307Eye.generated.h"

UCLASS(Blueprintable)
class ABS307Eye : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentEnemy;
    
public:
    ABS307Eye(const FObjectInitializer& ObjectInitializer);

};

