#pragma once
#include "CoreMinimal.h"
#include "LBase.h"
#include "L190P.generated.h"

class UL190Env;
class USceneComponent;

UCLASS(Blueprintable)
class AL190P : public ALBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* LaserRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL190Env* Env;
    
public:
    AL190P(const FObjectInitializer& ObjectInitializer);

};

