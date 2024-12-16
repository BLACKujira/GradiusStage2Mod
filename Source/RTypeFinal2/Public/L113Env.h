#pragma once
#include "CoreMinimal.h"
#include "LaserEnv.h"
#include "L113Env.generated.h"

class UL113BEnv;
class UL113SEnv;

UCLASS(Blueprintable)
class UL113Env : public ULaserEnv {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL113SEnv* EnvS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL113BEnv* EnvB;
    
    UL113Env();

};

