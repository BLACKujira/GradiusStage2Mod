#pragma once
#include "CoreMinimal.h"
#include "LBase.h"
#include "L129B.generated.h"

class AKariShotEffect;
class UL129BEnv;
class USceneComponent;

UCLASS(Blueprintable)
class AL129B : public ALBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AKariShotEffect* BodyEff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL129BEnv* Env;
    
public:
    AL129B(const FObjectInitializer& ObjectInitializer);

};

