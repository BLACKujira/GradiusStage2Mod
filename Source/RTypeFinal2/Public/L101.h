#pragma once
#include "CoreMinimal.h"
#include "LBase.h"
#include "L101.generated.h"

class UL101Env;
class USceneComponent;

UCLASS(Blueprintable)
class AL101 : public ALBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* LaserRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL101Env* Env;
    
public:
    AL101(const FObjectInitializer& ObjectInitializer);

};

