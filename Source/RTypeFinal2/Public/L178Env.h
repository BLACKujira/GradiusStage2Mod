#pragma once
#include "CoreMinimal.h"
#include "LaserEnv.h"
#include "L178Env.generated.h"

class UL178BEnv;

UCLASS(Blueprintable)
class UL178Env : public ULaserEnv {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL178BEnv* EnvB;
    
    UL178Env();

};

