#pragma once
#include "CoreMinimal.h"
#include "ForceActor.h"
#include "F067.generated.h"

class UF067DataAsset;
class UNiagaraComponent;
class UObjectPoolActor;

UCLASS(Blueprintable)
class AF067 : public AForceActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UF067DataAsset* DataAsset;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* NC_Shoot2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObjectPoolActor* GhostPool;
    
public:
    AF067(const FObjectInitializer& ObjectInitializer);

};

