#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "BS016Bird.generated.h"

UCLASS(Blueprintable)
class ABS016Bird : public AEnemyActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentEnemy;
    
    ABS016Bird(const FObjectInitializer& ObjectInitializer);

};

