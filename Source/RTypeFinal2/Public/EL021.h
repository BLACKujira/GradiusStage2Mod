#pragma once
#include "CoreMinimal.h"
#include "EL021Part.h"
#include "ELXXXX.h"
#include "EL021.generated.h"

class UAudioComponent;
class UEL021Env;
class UNiagaraComponent;
class USceneComponent;

UCLASS(Blueprintable)
class AEL021 : public AELXXXX {
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
    TArray<FEL021Part> PartU;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEL021Part> PartD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEL021Env* Env;
    
public:
    AEL021(const FObjectInitializer& ObjectInitializer);

};

