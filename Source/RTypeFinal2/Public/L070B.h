#pragma once
#include "CoreMinimal.h"
#include "LBase.h"
#include "L070B.generated.h"

class AKariShotEffect;
class UL070BEnv;
class USceneComponent;

UCLASS(Blueprintable)
class AL070B : public ALBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AKariShotEffect* BodyEff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL070BEnv* Env;
    
public:
    AL070B(const FObjectInitializer& ObjectInitializer);

};

