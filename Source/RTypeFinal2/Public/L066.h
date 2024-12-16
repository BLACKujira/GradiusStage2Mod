#pragma once
#include "CoreMinimal.h"
#include "L066PartM.h"
#include "LBase.h"
#include "L066.generated.h"

class UAudioComponent;
class UL066Env;
class UNiagaraComponent;
class USceneComponent;

UCLASS(Blueprintable)
class AL066 : public ALBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* lpSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* NS_Fire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FL066PartM> PartM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL066Env* Env;
    
public:
    AL066(const FObjectInitializer& ObjectInitializer);

};

