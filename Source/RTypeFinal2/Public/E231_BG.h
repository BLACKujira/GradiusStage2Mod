#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "E231_BG.generated.h"

class AE231_BG_BODY;
class ASplineActor;
class UAudioComponent;

UCLASS(Blueprintable)
class AE231_BG : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASplineActor* Path;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AE231_BG_BODY*> ChildArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* AudioComponentDamage;
    
public:
    AE231_BG(const FObjectInitializer& ObjectInitializer);

};

