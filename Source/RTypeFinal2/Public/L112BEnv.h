#pragma once
#include "CoreMinimal.h"
#include "LaserEnv.h"
#include "L112BEnv.generated.h"

class UL112Env;

UCLASS(Blueprintable)
class UL112BEnv : public ULaserEnv {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL112Env* Env_;
    
    UL112BEnv();

};

