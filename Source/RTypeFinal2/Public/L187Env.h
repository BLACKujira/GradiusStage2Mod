#pragma once
#include "CoreMinimal.h"
#include "LaserEnv.h"
#include "L187Env.generated.h"

class UL187SEnv;

UCLASS(Blueprintable)
class UL187Env : public ULaserEnv {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL187SEnv* EnvS;
    
    UL187Env();

};

