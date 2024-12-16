#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "S1952.generated.h"

UCLASS(Blueprintable)
class AS1952 : public AEnemyActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentEnemy;
    
    AS1952(const FObjectInitializer& ObjectInitializer);

};

