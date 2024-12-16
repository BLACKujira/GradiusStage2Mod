#pragma once
#include "CoreMinimal.h"
#include "L037PartN.h"
#include "LBase.h"
#include "L037.generated.h"

class UAudioComponent;
class UL037Env;
class UNiagaraComponent;
class USceneComponent;

UCLASS(Blueprintable)
class AL037 : public ALBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* NS_Hit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* lpSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FL037PartN> partN;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL037Env* Env;
    
public:
    AL037(const FObjectInitializer& ObjectInitializer);

};

