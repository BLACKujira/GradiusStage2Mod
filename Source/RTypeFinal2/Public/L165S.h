#pragma once
#include "CoreMinimal.h"
#include "LBase.h"
#include "L165S.generated.h"

class UL165SEnv;
class UNiagaraComponent;
class USceneComponent;

UCLASS(Blueprintable)
class AL165S : public ALBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* NS_Body;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL165SEnv* Env;
    
public:
    AL165S(const FObjectInitializer& ObjectInitializer);

};

