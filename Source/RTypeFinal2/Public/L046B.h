#pragma once
#include "CoreMinimal.h"
#include "LBase.h"
#include "L046B.generated.h"

class UL046BEnv;
class USceneComponent;

UCLASS(Blueprintable)
class AL046B : public ALBase {
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
    UL046BEnv* Env;
    
public:
    AL046B(const FObjectInitializer& ObjectInitializer);

};

