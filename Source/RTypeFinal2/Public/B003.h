#pragma once
#include "CoreMinimal.h"
#include "BitActor.h"
#include "B003.generated.h"

class AActor;
class UMaterialInstanceDynamic;
class UNiagaraComponent;
class UP001DataAsset;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class AB003 : public ABitActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* NS_Base;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Mi_Body;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* SearchedActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* SearchedComponent;
    
public:
    AB003(const FObjectInitializer& ObjectInitializer);

};

