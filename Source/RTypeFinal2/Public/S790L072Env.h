#pragma once
#include "CoreMinimal.h"
#include "LaserEnv.h"
#include "S790L072Env.generated.h"

class US790L072SEnv;

UCLASS(Blueprintable)
class US790L072Env : public ULaserEnv {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    US790L072SEnv* EnvS;
    
    US790L072Env();

};

