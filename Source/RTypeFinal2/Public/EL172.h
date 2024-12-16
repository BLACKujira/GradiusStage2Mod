#pragma once
#include "CoreMinimal.h"
#include "EL172PartM.h"
#include "ELXXXX.h"
#include "EL172.generated.h"

class UEL172Env;
class UNiagaraComponent;
class USceneComponent;

UCLASS(Blueprintable)
class AEL172 : public AELXXXX {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* NS_Body;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEL172PartM> PartM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEL172Env* Env;
    
public:
    AEL172(const FObjectInitializer& ObjectInitializer);

};

