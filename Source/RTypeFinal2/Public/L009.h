#pragma once
#include "CoreMinimal.h"
#include "L009Part.h"
#include "LBase.h"
#include "L009.generated.h"

class UAudioComponent;
class UL009Env;
class UNiagaraComponent;
class USceneComponent;

UCLASS(Blueprintable)
class AL009 : public ALBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* lpSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* NS_Base;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FL009Part> part;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL009Env* Env;
    
public:
    AL009(const FObjectInitializer& ObjectInitializer);

};

