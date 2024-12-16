#pragma once
#include "CoreMinimal.h"
#include "ELaserEnv.h"
#include "EL170Env.generated.h"

class UEL170BEnv;

UCLASS(Blueprintable)
class UEL170Env : public UELaserEnv {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEL170BEnv* EnvB;
    
    UEL170Env();

};

