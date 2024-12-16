#pragma once
#include "CoreMinimal.h"
#include "LaserEnv.h"
#include "L194Env.generated.h"

class UL194LEnv;
class UL194SEnv;

UCLASS(Blueprintable)
class UL194Env : public ULaserEnv {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL194LEnv* EnvL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL194SEnv* EnvS;
    
    UL194Env();

};

