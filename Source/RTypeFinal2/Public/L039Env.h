#pragma once
#include "CoreMinimal.h"
#include "LaserEnv.h"
#include "L039Env.generated.h"

class UL039PEnv;
class UObjectPoolActor;

UCLASS(Blueprintable)
class UL039Env : public ULaserEnv {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObjectPoolActor* TailPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL039PEnv* EnvP;
    
    UL039Env();

};

