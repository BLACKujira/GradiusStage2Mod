#pragma once
#include "CoreMinimal.h"
#include "LaserEnv.h"
#include "L141Env.generated.h"

class UAudioComponent;

UCLASS(Blueprintable)
class UL141Env : public ULaserEnv {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* lpSE;
    
    UL141Env();

};

