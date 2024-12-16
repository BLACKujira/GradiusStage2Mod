#pragma once
#include "CoreMinimal.h"
#include "LaserEnv.h"
#include "L088Env.generated.h"

class UObjectPoolActor;

UCLASS(Blueprintable)
class UL088Env : public ULaserEnv {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObjectPoolActor* TailPool;
    
    UL088Env();

};

