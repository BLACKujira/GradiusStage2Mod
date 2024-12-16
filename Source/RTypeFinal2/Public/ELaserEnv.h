#pragma once
#include "CoreMinimal.h"
#include "LaserEnv.h"
#include "ELaserEnv.generated.h"

class AEnemyActor;

UCLASS(Blueprintable)
class UELaserEnv : public ULaserEnv {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentActor;
    
public:
    UELaserEnv();

};

