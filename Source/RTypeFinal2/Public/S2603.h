#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "S2603.generated.h"

UCLASS(Blueprintable)
class AS2603 : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentEnemy;
    
public:
    AS2603(const FObjectInitializer& ObjectInitializer);

};

