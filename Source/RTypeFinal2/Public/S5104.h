#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "S5104.generated.h"

UCLASS(Blueprintable)
class AS5104 : public AEnemyActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentEnemy;
    
    AS5104(const FObjectInitializer& ObjectInitializer);

};

