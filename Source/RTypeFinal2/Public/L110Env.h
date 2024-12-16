#pragma once
#include "CoreMinimal.h"
#include "LaserEnv.h"
#include "L110Env.generated.h"

class UObjectPoolActor;

UCLASS(Blueprintable)
class UL110Env : public ULaserEnv {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObjectPoolActor* TailPool;
    
    UL110Env();

};

