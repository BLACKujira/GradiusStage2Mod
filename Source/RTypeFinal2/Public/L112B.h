#pragma once
#include "CoreMinimal.h"
#include "LBase.h"
#include "L112B.generated.h"

class AKariShotEffect;
class UL112BEnv;
class USceneComponent;

UCLASS(Blueprintable)
class AL112B : public ALBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AKariShotEffect* BodyEff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL112BEnv* Env;
    
public:
    AL112B(const FObjectInitializer& ObjectInitializer);

};

