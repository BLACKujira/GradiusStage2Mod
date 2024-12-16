#pragma once
#include "CoreMinimal.h"
#include "LaserEnv.h"
#include "L194LEnv.generated.h"

class UL194Env;

UCLASS(Blueprintable)
class UL194LEnv : public ULaserEnv {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL194Env* Env;
    
    UL194LEnv();

};

