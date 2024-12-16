#pragma once
#include "CoreMinimal.h"
#include "LaserEnv.h"
#include "L065Env.generated.h"

class UL065SEnv;

UCLASS(Blueprintable)
class UL065Env : public ULaserEnv {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL065SEnv* EnvS;
    
    UL065Env();

};

