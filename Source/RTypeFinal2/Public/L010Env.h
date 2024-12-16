#pragma once
#include "CoreMinimal.h"
#include "LaserEnv.h"
#include "L010Env.generated.h"

class UL010BEnv;

UCLASS(Blueprintable)
class UL010Env : public ULaserEnv {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL010BEnv* EnvB;
    
    UL010Env();

};

