#pragma once
#include "CoreMinimal.h"
#include "LBase.h"
#include "L058B.generated.h"

class UL058BEnv;
class USceneComponent;

UCLASS(Blueprintable)
class AL058B : public ALBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* MountRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* LaserRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* nowRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL058BEnv* Env;
    
public:
    AL058B(const FObjectInitializer& ObjectInitializer);

};

