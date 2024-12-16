#pragma once
#include "CoreMinimal.h"
#include "LaserEnv.h"
#include "L127Env.generated.h"

class UL127SEnv;

UCLASS(Blueprintable)
class UL127Env : public ULaserEnv {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL127SEnv* EnvS;
    
    UL127Env();

};

