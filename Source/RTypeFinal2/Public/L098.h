#pragma once
#include "CoreMinimal.h"
#include "L098PartM.h"
#include "LBase.h"
#include "L098.generated.h"

class UL098Env;
class UNiagaraComponent;
class USceneComponent;

UCLASS(Blueprintable)
class AL098 : public ALBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* NS_Body;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FL098PartM> PartM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FL098PartM> TipM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL098Env* Env;
    
public:
    AL098(const FObjectInitializer& ObjectInitializer);

};

