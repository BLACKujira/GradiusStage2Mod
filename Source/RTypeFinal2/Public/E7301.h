#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "E7301.generated.h"

UCLASS(Blueprintable)
class AE7301 : public AEnemyActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentEnemy;
    
    AE7301(const FObjectInitializer& ObjectInitializer);

};

