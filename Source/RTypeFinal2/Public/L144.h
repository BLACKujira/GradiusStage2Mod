#pragma once
#include "CoreMinimal.h"
#include "LBase.h"
#include "L144.generated.h"

class UL144Env;
class USceneComponent;

UCLASS(Blueprintable)
class AL144 : public ALBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* LaserRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Head;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL144Env* Env;
    
public:
    AL144(const FObjectInitializer& ObjectInitializer);

};

