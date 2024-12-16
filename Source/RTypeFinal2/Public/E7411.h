#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "E7411.generated.h"

UCLASS(Blueprintable)
class AE7411 : public AEnemyActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentEnemy;
    
public:
    AE7411(const FObjectInitializer& ObjectInitializer);

};

