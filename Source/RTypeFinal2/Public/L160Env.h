#pragma once
#include "CoreMinimal.h"
#include "LaserEnv.h"
#include "L160Env.generated.h"

class UL160SEnv;

UCLASS(Blueprintable)
class UL160Env : public ULaserEnv {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL160SEnv* EnvS;
    
    UL160Env();

};

