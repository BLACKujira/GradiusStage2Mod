#pragma once
#include "CoreMinimal.h"
#include "LaserEnv.h"
#include "L004Env.generated.h"

class UL004BEnv;
class UL004SEnv;

UCLASS(Blueprintable)
class UL004Env : public ULaserEnv {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL004BEnv* EnvB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL004SEnv* EnvS;
    
    UL004Env();

};

