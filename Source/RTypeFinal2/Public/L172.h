#pragma once
#include "CoreMinimal.h"
#include "L172PartM.h"
#include "LBase.h"
#include "L172.generated.h"

class UL172Env;
class UNiagaraComponent;
class USceneComponent;

UCLASS(Blueprintable)
class AL172 : public ALBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* NS_Body;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FL172PartM> PartM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL172Env* Env;
    
public:
    AL172(const FObjectInitializer& ObjectInitializer);

};

