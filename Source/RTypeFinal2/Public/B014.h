#pragma once
#include "CoreMinimal.h"
#include "B006.h"
#include "B014.generated.h"

class UMaterialInstanceDynamic;
class UW011Env;

UCLASS(Blueprintable)
class AB014 : public AB006 {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* MiBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* MiBodys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UW011Env* ChargeShotEnv;
    
public:
    AB014(const FObjectInitializer& ObjectInitializer);

};

