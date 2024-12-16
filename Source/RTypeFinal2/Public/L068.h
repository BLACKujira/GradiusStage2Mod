#pragma once
#include "CoreMinimal.h"
#include "L068PartM.h"
#include "LBase.h"
#include "L068.generated.h"

class UAudioComponent;
class UL068Env;
class UNiagaraComponent;
class USceneComponent;

UCLASS(Blueprintable)
class AL068 : public ALBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* lpSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* NS_Fire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FL068PartM> PartM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL068Env* Env;
    
public:
    AL068(const FObjectInitializer& ObjectInitializer);

};

