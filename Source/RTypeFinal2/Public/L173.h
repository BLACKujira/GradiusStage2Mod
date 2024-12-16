#pragma once
#include "CoreMinimal.h"
#include "L173PartM.h"
#include "LBase.h"
#include "L173.generated.h"

class UL173Env;
class UNiagaraComponent;
class USceneComponent;

UCLASS(Blueprintable)
class AL173 : public ALBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* NS_Body;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FL173PartM> PartM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL173Env* Env;
    
public:
    AL173(const FObjectInitializer& ObjectInitializer);

};

