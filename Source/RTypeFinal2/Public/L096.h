#pragma once
#include "CoreMinimal.h"
#include "L096PartM.h"
#include "LBase.h"
#include "L096.generated.h"

class UL096Env;
class UNiagaraComponent;
class USceneComponent;

UCLASS(Blueprintable)
class AL096 : public ALBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* NS_Body;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FL096PartM> PartM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL096Env* Env;
    
public:
    AL096(const FObjectInitializer& ObjectInitializer);

};

