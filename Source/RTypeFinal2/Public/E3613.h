#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "E3613.generated.h"

UCLASS(Blueprintable)
class AE3613 : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentEnemy;
    
public:
    AE3613(const FObjectInitializer& ObjectInitializer);

};

