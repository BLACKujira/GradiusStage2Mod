#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "E2502.generated.h"

UCLASS(Blueprintable)
class AE2502 : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentEnemy;
    
public:
    AE2502(const FObjectInitializer& ObjectInitializer);

};

