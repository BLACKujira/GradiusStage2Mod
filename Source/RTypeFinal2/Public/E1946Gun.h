#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "E1946Gun.generated.h"

class AE1946Body;
class UE1946GunParam;

UCLASS(Blueprintable)
class AE1946Gun : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UE1946GunParam* EnemyParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentActor;
    
public:
    AE1946Gun(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void SetParentE1946(AE1946Body* _actor);
    
};

