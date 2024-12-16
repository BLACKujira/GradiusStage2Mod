#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "EFXXXX.generated.h"

class AEPXXXX;
class UELaserEnv;
class USceneComponent;

UCLASS(Blueprintable)
class AEFXXXX : public AEnemyActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* BodyNode;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEPXXXX* ParentActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UELaserEnv* LaserEnvR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UELaserEnv* LaserEnvB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UELaserEnv* LaserEnvY;
    
public:
    AEFXXXX(const FObjectInitializer& ObjectInitializer);

};

