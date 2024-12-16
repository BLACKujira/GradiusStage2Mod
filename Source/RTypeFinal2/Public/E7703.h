#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "E7703.generated.h"

class UAudioComponent;

UCLASS(Blueprintable)
class AE7703 : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* AudioComponentCharge;
    
public:
    AE7703(const FObjectInitializer& ObjectInitializer);

};

