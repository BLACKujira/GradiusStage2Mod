#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "S1820.generated.h"

UCLASS(Blueprintable)
class AS1820 : public AEnemyActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentEnemy;
    
    AS1820(const FObjectInitializer& ObjectInitializer);

};

