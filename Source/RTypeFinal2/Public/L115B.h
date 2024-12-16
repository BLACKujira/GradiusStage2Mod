#pragma once
#include "CoreMinimal.h"
#include "LBase.h"
#include "L115B.generated.h"

class AKariShotEffect;
class UL115BEnv;
class USceneComponent;

UCLASS(Blueprintable)
class AL115B : public ALBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AKariShotEffect* BodyEff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL115BEnv* Env;
    
public:
    AL115B(const FObjectInitializer& ObjectInitializer);

};

