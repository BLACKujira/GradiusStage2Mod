#pragma once
#include "CoreMinimal.h"
#include "LaserEnv.h"
#include "L167Env.generated.h"

class UL167BEnv;

UCLASS(Blueprintable)
class UL167Env : public ULaserEnv {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL167BEnv* EnvB;
    
    UL167Env();

};

