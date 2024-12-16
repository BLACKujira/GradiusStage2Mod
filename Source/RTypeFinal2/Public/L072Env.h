#pragma once
#include "CoreMinimal.h"
#include "LaserEnv.h"
#include "L072Env.generated.h"

class UL072SEnv;

UCLASS(Blueprintable)
class UL072Env : public ULaserEnv {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL072SEnv* EnvS;
    
    UL072Env();

};

