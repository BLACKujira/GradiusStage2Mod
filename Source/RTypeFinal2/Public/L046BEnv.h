#pragma once
#include "CoreMinimal.h"
#include "LaserEnv.h"
#include "L046BEnv.generated.h"

class UL046Env;

UCLASS(Blueprintable)
class UL046BEnv : public ULaserEnv {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL046Env* pEnv;
    
    UL046BEnv();

};

