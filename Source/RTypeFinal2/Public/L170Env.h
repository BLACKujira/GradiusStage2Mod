#pragma once
#include "CoreMinimal.h"
#include "LaserEnv.h"
#include "L170Env.generated.h"

class UL170BEnv;

UCLASS(Blueprintable)
class UL170Env : public ULaserEnv {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL170BEnv* EnvB;
    
    UL170Env();

};

