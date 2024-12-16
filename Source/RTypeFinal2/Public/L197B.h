#pragma once
#include "CoreMinimal.h"
#include "LBase.h"
#include "L197B.generated.h"

class AKariShotEffect;
class UL197BEnv;
class USceneComponent;

UCLASS(Blueprintable)
class AL197B : public ALBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AKariShotEffect* BodyEff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL197BEnv* Env;
    
public:
    AL197B(const FObjectInitializer& ObjectInitializer);

};

