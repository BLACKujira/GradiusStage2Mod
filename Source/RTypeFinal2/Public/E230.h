#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "E230.generated.h"

class UAudioComponent;

UCLASS(Blueprintable)
class AE230 : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* AudioComponentAttack;
    
public:
    AE230(const FObjectInitializer& ObjectInitializer);

};

