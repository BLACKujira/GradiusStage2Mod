#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "S2923.generated.h"

UCLASS(Blueprintable)
class AS2923 : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentEnemy;
    
public:
    AS2923(const FObjectInitializer& ObjectInitializer);

};

