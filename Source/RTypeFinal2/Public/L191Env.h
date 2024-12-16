#pragma once
#include "CoreMinimal.h"
#include "LaserEnv.h"
#include "L191Env.generated.h"

class UObjectPoolActor;

UCLASS(Blueprintable)
class UL191Env : public ULaserEnv {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObjectPoolActor* SubShotPool;
    
    UL191Env();

};

