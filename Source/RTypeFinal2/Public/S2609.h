#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "S2609.generated.h"

UCLASS(Blueprintable)
class AS2609 : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentEnemy;
    
public:
    AS2609(const FObjectInitializer& ObjectInitializer);

};

