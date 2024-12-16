#pragma once
#include "CoreMinimal.h"
#include "LaserEnv.h"
#include "L113SEnv.generated.h"

class UL113Env;

UCLASS(Blueprintable)
class UL113SEnv : public ULaserEnv {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL113Env* Env_;
    
    UL113SEnv();

};

