#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "S5407.generated.h"

UCLASS(Blueprintable)
class AS5407 : public AEnemyActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentEnemy;
    
    AS5407(const FObjectInitializer& ObjectInitializer);

};

