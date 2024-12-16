#pragma once
#include "CoreMinimal.h"
#include "LaserEnv.h"
#include "L180Env.generated.h"

class UL180SEnv;
class UObjectPoolActor;

UCLASS(Blueprintable)
class UL180Env : public ULaserEnv {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObjectPoolActor* TailPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL180SEnv* EnvS;
    
    UL180Env();

};

