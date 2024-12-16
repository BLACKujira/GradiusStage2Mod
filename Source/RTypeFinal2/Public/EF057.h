#pragma once
#include "CoreMinimal.h"
#include "EFXXXX.h"
#include "EF057.generated.h"

class UNiagaraComponent;
class UObjectPoolActor;

UCLASS(Blueprintable)
class AEF057 : public AEFXXXX {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* NC_Shoot2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObjectPoolActor* GhostPool;
    
public:
    AEF057(const FObjectInitializer& ObjectInitializer);

};

