#pragma once
#include "CoreMinimal.h"
#include "ForceActor.h"
#include "F057.generated.h"

class UNiagaraComponent;
class UObjectPoolActor;
class UP001DataAsset;

UCLASS(Blueprintable)
class AF057 : public AForceActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* NC_Shoot2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObjectPoolActor* GhostPool;
    
public:
    AF057(const FObjectInitializer& ObjectInitializer);

};

