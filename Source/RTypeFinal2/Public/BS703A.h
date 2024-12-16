#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "BS703A.generated.h"

UCLASS(Blueprintable)
class ABS703A : public AEnemyActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentEnemy;
    
    ABS703A(const FObjectInitializer& ObjectInitializer);

};

