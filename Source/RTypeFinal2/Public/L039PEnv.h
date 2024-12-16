#pragma once
#include "CoreMinimal.h"
#include "LaserEnv.h"
#include "L039PEnv.generated.h"

class UL039SEnv;

UCLASS(Blueprintable)
class UL039PEnv : public ULaserEnv {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL039SEnv* EnvS;
    
    UL039PEnv();

};

