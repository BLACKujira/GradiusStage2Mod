#pragma once
#include "CoreMinimal.h"
#include "LaserEnv.h"
#include "L138Env.generated.h"

class UL138BEnv;

UCLASS(Blueprintable)
class UL138Env : public ULaserEnv {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL138BEnv* EnvB;
    
    UL138Env();

};

