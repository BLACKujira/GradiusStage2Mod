#pragma once
#include "CoreMinimal.h"
#include "LaserEnv.h"
#include "L077Env.generated.h"

class UL077SEnv;

UCLASS(Blueprintable)
class UL077Env : public ULaserEnv {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL077SEnv* EnvS;
    
    UL077Env();

};

