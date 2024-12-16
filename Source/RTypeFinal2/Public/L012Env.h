#pragma once
#include "CoreMinimal.h"
#include "LaserEnv.h"
#include "L012Env.generated.h"

class UObjectPoolActor;

UCLASS(Blueprintable)
class UL012Env : public ULaserEnv {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObjectPoolActor* TailPool;
    
    UL012Env();

};

