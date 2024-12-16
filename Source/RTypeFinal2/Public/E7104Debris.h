#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "E7104Debris.generated.h"

class AE7104;

UCLASS(Blueprintable)
class AE7104Debris : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AE7104* ParentEnemy;
    
public:
    AE7104Debris(const FObjectInitializer& ObjectInitializer);

};

