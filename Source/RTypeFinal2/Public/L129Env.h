#pragma once
#include "CoreMinimal.h"
#include "LaserEnv.h"
#include "L129Env.generated.h"

class UL129BEnv;

UCLASS(Blueprintable)
class UL129Env : public ULaserEnv {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL129BEnv* EnvB;
    
    UL129Env();

};

