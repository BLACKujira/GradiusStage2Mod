#pragma once
#include "CoreMinimal.h"
#include "LaserEnv.h"
#include "L028Env.generated.h"

class UL028SEnv;

UCLASS(Blueprintable)
class UL028Env : public ULaserEnv {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL028SEnv* EnvS;
    
    UL028Env();

};

