#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "S7104.generated.h"

class AE7104;

UCLASS(Blueprintable)
class AS7104 : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AE7104* ParentEnemy;
    
public:
    AS7104(const FObjectInitializer& ObjectInitializer);

};

