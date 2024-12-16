#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "S2602.generated.h"

UCLASS(Blueprintable)
class AS2602 : public AEnemyActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentEnemy;
    
    AS2602(const FObjectInitializer& ObjectInitializer);

};

