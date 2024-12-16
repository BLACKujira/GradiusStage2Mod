#pragma once
#include "CoreMinimal.h"
#include "EL169PartM.h"
#include "ELXXXX.h"
#include "EL169.generated.h"

class UEL169Env;
class UNiagaraComponent;
class USceneComponent;

UCLASS(Blueprintable)
class AEL169 : public AELXXXX {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* NS_Body;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEL169PartM> PartM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEL169Env* Env;
    
public:
    AEL169(const FObjectInitializer& ObjectInitializer);

};

