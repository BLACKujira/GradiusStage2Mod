#pragma once
#include "CoreMinimal.h"
#include "EL096PartM.h"
#include "ELXXXX.h"
#include "EL096.generated.h"

class UEL096Env;
class UNiagaraComponent;
class USceneComponent;

UCLASS(Blueprintable)
class AEL096 : public AELXXXX {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* NS_Body;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEL096PartM> PartM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEL096Env* Env;
    
public:
    AEL096(const FObjectInitializer& ObjectInitializer);

};

