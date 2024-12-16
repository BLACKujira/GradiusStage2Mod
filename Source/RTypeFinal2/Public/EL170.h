#pragma once
#include "CoreMinimal.h"
#include "EL170PartM.h"
#include "ELXXXX.h"
#include "EL170.generated.h"

class UEL170Env;
class UNiagaraComponent;
class USceneComponent;

UCLASS(Blueprintable)
class AEL170 : public AELXXXX {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* NS_Body;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEL170PartM> PartM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEL170Env* Env;
    
public:
    AEL170(const FObjectInitializer& ObjectInitializer);

};

