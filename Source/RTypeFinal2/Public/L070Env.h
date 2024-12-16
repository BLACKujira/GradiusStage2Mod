#pragma once
#include "CoreMinimal.h"
#include "LaserEnv.h"
#include "L070Env.generated.h"

class UL070BEnv;

UCLASS(Blueprintable)
class UL070Env : public ULaserEnv {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL070BEnv* EnvB;
    
    UL070Env();

};

