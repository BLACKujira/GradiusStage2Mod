#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "E7502_meat.generated.h"

UCLASS(Blueprintable)
class AE7502_meat : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentEnemy;
    
public:
    AE7502_meat(const FObjectInitializer& ObjectInitializer);

};

