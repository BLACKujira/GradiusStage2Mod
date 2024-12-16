#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "E231.generated.h"

class AE231_BODY;
class UAudioComponent;

UCLASS(Blueprintable)
class AE231 : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AE231_BODY*> ChildArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* AudioComponentDamage;
    
public:
    AE231(const FObjectInitializer& ObjectInitializer);

};

