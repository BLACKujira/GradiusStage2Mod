#pragma once
#include "CoreMinimal.h"
#include "MBaseEnv.h"
#include "M014Env.generated.h"

class UCapsuleComponent;
class USphereComponent;

UCLASS(Blueprintable)
class UM014Env : public UMBaseEnv {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* tmpCollisionS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* tmpCollisionC;
    
public:
    UM014Env();

};

