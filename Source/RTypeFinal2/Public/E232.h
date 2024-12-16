#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "E232.generated.h"

class UAudioComponent;

UCLASS(Blueprintable)
class AE232 : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* AudioComponentHabataki;
    
public:
    AE232(const FObjectInitializer& ObjectInitializer);

};

