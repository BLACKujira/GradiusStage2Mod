#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "BS703C.generated.h"

UCLASS(Blueprintable)
class ABS703C : public AEnemyActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentEnemy;
    
    ABS703C(const FObjectInitializer& ObjectInitializer);

};

