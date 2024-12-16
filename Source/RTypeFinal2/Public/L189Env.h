#pragma once
#include "CoreMinimal.h"
#include "LaserEnv.h"
#include "L189Env.generated.h"

class UL189SEnv;

UCLASS(Blueprintable)
class UL189Env : public ULaserEnv {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL189SEnv* EnvS;
    
    UL189Env();

};

