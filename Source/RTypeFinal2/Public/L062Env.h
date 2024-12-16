#pragma once
#include "CoreMinimal.h"
#include "LaserEnv.h"
#include "L062Env.generated.h"

class UObjectPoolActor;

UCLASS(Blueprintable)
class UL062Env : public ULaserEnv {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObjectPoolActor* TailPool;
    
    UL062Env();

};

