#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "E2405Landing.generated.h"

class AE2405;

UCLASS(Blueprintable)
class AE2405Landing : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AE2405* ParentEnemy;
    
public:
    AE2405Landing(const FObjectInitializer& ObjectInitializer);

};

