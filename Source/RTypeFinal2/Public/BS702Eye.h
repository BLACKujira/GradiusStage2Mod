#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "BS702Eye.generated.h"

UCLASS(Blueprintable)
class ABS702Eye : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentEnemy;
    
public:
    ABS702Eye(const FObjectInitializer& ObjectInitializer);

};

