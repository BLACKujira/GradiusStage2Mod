#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "BS501_E5102.generated.h"

UCLASS(Blueprintable)
class ABS501_E5102 : public AEnemyActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentEnemy;
    
    ABS501_E5102(const FObjectInitializer& ObjectInitializer);

};

