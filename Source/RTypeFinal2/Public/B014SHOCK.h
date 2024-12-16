#pragma once
#include "CoreMinimal.h"
#include "PoolActor.h"
#include "B014SHOCK.generated.h"

class AActor;
class AB014;
class UNiagaraComponent;
class USceneComponent;

UCLASS(Blueprintable)
class AB014SHOCK : public APoolActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* NS_Body;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AB014* ownerBit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* PreActor;
    
public:
    AB014SHOCK(const FObjectInitializer& ObjectInitializer);

};

