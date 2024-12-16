#pragma once
#include "CoreMinimal.h"
#include "L097PartM.h"
#include "LBase.h"
#include "L097.generated.h"

class UL097Env;
class UNiagaraComponent;
class USceneComponent;

UCLASS(Blueprintable)
class AL097 : public ALBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* NS_Body;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FL097PartM> PartM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL097Env* Env;
    
public:
    AL097(const FObjectInitializer& ObjectInitializer);

};

