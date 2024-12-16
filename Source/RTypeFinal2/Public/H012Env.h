#pragma once
#include "CoreMinimal.h"
#include "HActorEnv.h"
#include "H012Env.generated.h"

class UScopeWidget;

UCLASS(Blueprintable)
class UH012Env : public UHActorEnv {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScopeWidget* ScopeWidget;
    
public:
    UH012Env();

};

