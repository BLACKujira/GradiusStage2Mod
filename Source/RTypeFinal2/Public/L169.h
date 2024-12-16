#pragma once
#include "CoreMinimal.h"
#include "L169PartM.h"
#include "LBase.h"
#include "L169.generated.h"

class UL169Env;
class UNiagaraComponent;
class USceneComponent;

UCLASS(Blueprintable)
class AL169 : public ALBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* NS_Body;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FL169PartM> PartM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL169Env* Env;
    
public:
    AL169(const FObjectInitializer& ObjectInitializer);

};

