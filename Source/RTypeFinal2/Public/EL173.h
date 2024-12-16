#pragma once
#include "CoreMinimal.h"
#include "EL173PartM.h"
#include "ELXXXX.h"
#include "EL173.generated.h"

class UEL173Env;
class UNiagaraComponent;
class USceneComponent;

UCLASS(Blueprintable)
class AEL173 : public AELXXXX {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* NS_Body;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEL173PartM> PartM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEL173Env* Env;
    
public:
    AEL173(const FObjectInitializer& ObjectInitializer);

};

