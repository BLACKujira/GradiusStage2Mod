#pragma once
#include "CoreMinimal.h"
#include "L171PartM.h"
#include "LBase.h"
#include "L171.generated.h"

class UL171Env;
class UNiagaraComponent;
class USceneComponent;

UCLASS(Blueprintable)
class AL171 : public ALBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* NS_Body;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FL171PartM> PartM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FL171PartM> TipM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL171Env* Env;
    
public:
    AL171(const FObjectInitializer& ObjectInitializer);

};

