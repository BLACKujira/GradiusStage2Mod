#pragma once
#include "CoreMinimal.h"
#include "LBase.h"
#include "L145.generated.h"

class UL145Env;
class USceneComponent;

UCLASS(Blueprintable)
class AL145 : public ALBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* LaserRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Head;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL145Env* Env;
    
public:
    AL145(const FObjectInitializer& ObjectInitializer);

};

