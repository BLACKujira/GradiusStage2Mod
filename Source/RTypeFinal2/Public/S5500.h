#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "S5500.generated.h"

UCLASS(Blueprintable)
class AS5500 : public AEnemyActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentEnemy;
    
    AS5500(const FObjectInitializer& ObjectInitializer);

};

