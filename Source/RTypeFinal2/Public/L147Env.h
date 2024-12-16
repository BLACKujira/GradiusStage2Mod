#pragma once
#include "CoreMinimal.h"
#include "LaserEnv.h"
#include "L147Env.generated.h"

class UObjectPoolActor;

UCLASS(Blueprintable)
class UL147Env : public ULaserEnv {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObjectPoolActor* DebriPool;
    
    UL147Env();

};

