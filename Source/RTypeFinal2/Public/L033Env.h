#pragma once
#include "CoreMinimal.h"
#include "LaserEnv.h"
#include "L033Env.generated.h"

class UL033SubEnv;
class UObjectPoolActor;

UCLASS(Blueprintable)
class UL033Env : public ULaserEnv {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObjectPoolActor* TailPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL033SubEnv* EnvS;
    
    UL033Env();

};

