#pragma once
#include "CoreMinimal.h"
#include "LBase.h"
#include "L167B.generated.h"

class AKariShotEffect;
class UL167BEnv;
class USceneComponent;

UCLASS(Blueprintable)
class AL167B : public ALBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AKariShotEffect* BodyEff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL167BEnv* Env;
    
public:
    AL167B(const FObjectInitializer& ObjectInitializer);

};

