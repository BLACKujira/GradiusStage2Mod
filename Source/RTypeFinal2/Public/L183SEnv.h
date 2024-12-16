#pragma once
#include "CoreMinimal.h"
#include "LaserEnv.h"
#include "L183SEnv.generated.h"

class UL183Env;

UCLASS(Blueprintable)
class UL183SEnv : public ULaserEnv {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL183Env* Env_;
    
    UL183SEnv();

};

