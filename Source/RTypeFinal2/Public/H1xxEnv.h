#pragma once
#include "CoreMinimal.h"
#include "HActorEnv.h"
#include "H1xxEnv.generated.h"

UCLASS(Blueprintable)
class UH1xxEnv : public UHActorEnv {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHActorEnv* EnvA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHActorEnv* EnvB;
    
public:
    UH1xxEnv();

};

