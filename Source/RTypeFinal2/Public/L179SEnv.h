#pragma once
#include "CoreMinimal.h"
#include "LaserEnv.h"
#include "L179SEnv.generated.h"

class UObjectPoolActor;

UCLASS(Blueprintable)
class UL179SEnv : public ULaserEnv {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObjectPoolActor* TailPool;
    
    UL179SEnv();

};

