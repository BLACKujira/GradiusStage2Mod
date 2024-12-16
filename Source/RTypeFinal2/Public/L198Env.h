#pragma once
#include "CoreMinimal.h"
#include "LaserEnv.h"
#include "L198Env.generated.h"

class UObjectPoolActor;

UCLASS(Blueprintable)
class UL198Env : public ULaserEnv {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObjectPoolActor* TailPool;
    
    UL198Env();

};

