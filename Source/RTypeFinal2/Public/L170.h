#pragma once
#include "CoreMinimal.h"
#include "L170PartM.h"
#include "LBase.h"
#include "L170.generated.h"

class UL170Env;
class UNiagaraComponent;
class USceneComponent;

UCLASS(Blueprintable)
class AL170 : public ALBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* NS_Body;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FL170PartM> PartM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL170Env* Env;
    
public:
    AL170(const FObjectInitializer& ObjectInitializer);

};

