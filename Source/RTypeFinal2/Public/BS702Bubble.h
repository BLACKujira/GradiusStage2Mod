#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "BS702Bubble.generated.h"

UCLASS(Blueprintable)
class ABS702Bubble : public AEnemyActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentEnemy;
    
    ABS702Bubble(const FObjectInitializer& ObjectInitializer);

};

