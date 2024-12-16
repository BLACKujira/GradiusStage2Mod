#pragma once
#include "CoreMinimal.h"
#include "LBase.h"
#include "L038.generated.h"

class UEnemyPathDataAsset;
class UEnemyPathPlayerComponent;
class UL038Env;
class UNiagaraComponent;
class USceneComponent;

UCLASS(Blueprintable)
class AL038 : public ALBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* NS_Body;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UEnemyPathPlayerComponent* PathPlayerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UEnemyPathDataAsset* PathDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL038Env* Env;
    
public:
    AL038(const FObjectInitializer& ObjectInitializer);

};

