#pragma once
#include "CoreMinimal.h"
#include "LBase.h"
#include "L179S.generated.h"

class UCapsuleComponent;
class UL179DataAsset;
class UL179SEnv;
class UNiagaraComponent;
class USceneComponent;

UCLASS(Blueprintable)
class AL179S : public ALBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* LaserRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* NS_Head;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* Collision_A;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL179SEnv* Env;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL179DataAsset* dAsset;
    
public:
    AL179S(const FObjectInitializer& ObjectInitializer);

};

