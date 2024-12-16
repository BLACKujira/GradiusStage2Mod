#pragma once
#include "CoreMinimal.h"
#include "L174PartM.h"
#include "LBase.h"
#include "L174.generated.h"

class UL174Env;
class UNiagaraComponent;
class USceneComponent;

UCLASS(Blueprintable)
class AL174 : public ALBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* NS_Body;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FL174PartM> PartM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FL174PartM> TipM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL174Env* Env;
    
public:
    AL174(const FObjectInitializer& ObjectInitializer);

};

