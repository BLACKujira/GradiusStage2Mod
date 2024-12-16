#pragma once
#include "CoreMinimal.h"
#include "LBase.h"
#include "L180S.generated.h"

class UL180SEnv;
class USceneComponent;

UCLASS(Blueprintable)
class AL180S : public ALBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* LaserRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL180SEnv* Env;
    
public:
    AL180S(const FObjectInitializer& ObjectInitializer);

};

