#pragma once
#include "CoreMinimal.h"
#include "LaserEnv.h"
#include "L097Env.generated.h"

class UL097BEnv;

UCLASS(Blueprintable)
class UL097Env : public ULaserEnv {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL097BEnv* EnvB;
    
    UL097Env();

};

