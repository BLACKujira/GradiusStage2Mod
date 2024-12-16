#pragma once
#include "CoreMinimal.h"
#include "LaserEnv.h"
#include "L007Env.generated.h"

class UL007BEnv;

UCLASS(Blueprintable)
class UL007Env : public ULaserEnv {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL007BEnv* EnvB;
    
    UL007Env();

};

