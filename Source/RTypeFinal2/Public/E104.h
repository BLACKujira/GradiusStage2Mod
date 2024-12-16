#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "EnemyExplosionScatterEventParam.h"
#include "Templates/SubclassOf.h"
#include "E104.generated.h"

class UAnimInstance;
class UEnemyExplosion;

UCLASS(Blueprintable)
class AE104 : public AEnemyActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAnimInstance> AnimClass;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnemyExplosion* Explosion;
    
public:
    AE104(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void ScatterCallback(FEnemyExplosionScatterEventParam& _event);
    
};

