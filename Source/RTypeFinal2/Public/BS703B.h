#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "BS703B.generated.h"

UCLASS(Blueprintable)
class ABS703B : public AEnemyActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentEnemy;
    
    ABS703B(const FObjectInitializer& ObjectInitializer);

};

