#pragma once
#include "CoreMinimal.h"
#include "LaserEnv.h"
#include "L058Env.generated.h"

class UL058BEnv;
class UL058SEnv;

UCLASS(Blueprintable)
class UL058Env : public ULaserEnv {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL058BEnv* EnvB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL058SEnv* EnvS;
    
    UL058Env();

};

