#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "BS030_Child.generated.h"

UCLASS(Blueprintable)
class ABS030_Child : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentEnemy;
    
public:
    ABS030_Child(const FObjectInitializer& ObjectInitializer);

};

