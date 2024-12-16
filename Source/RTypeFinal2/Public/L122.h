#pragma once
#include "CoreMinimal.h"
#include "LBase.h"
#include "L122.generated.h"

class UL122Env;
class UNiagaraComponent;
class USceneComponent;

UCLASS(Blueprintable)
class AL122 : public ALBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* NS_Body;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL122Env* Env;
    
public:
    AL122(const FObjectInitializer& ObjectInitializer);

};

