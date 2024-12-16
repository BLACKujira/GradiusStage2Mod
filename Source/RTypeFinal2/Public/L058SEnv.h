#pragma once
#include "CoreMinimal.h"
#include "LaserEnv.h"
#include "L058SEnv.generated.h"

class UL058Env;

UCLASS(Blueprintable)
class UL058SEnv : public ULaserEnv {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL058Env* pEnv;
    
    UL058SEnv();

};

