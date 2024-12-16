#pragma once
#include "CoreMinimal.h"
#include "LaserEnv.h"
#include "L190Env.generated.h"

class UL190BEnv;
class UObjectPoolActor;

UCLASS(Blueprintable)
class UL190Env : public ULaserEnv {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObjectPoolActor* SubShotPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL190BEnv* EnvS;
    
    UL190Env();

};

