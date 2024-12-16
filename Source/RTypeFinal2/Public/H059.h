#pragma once
#include "CoreMinimal.h"
#include "HActor.h"
#include "H059.generated.h"

class UAudioComponent;
class UH059DataAsset;
class UNiagaraComponent;
class USceneComponent;

UCLASS(Blueprintable)
class AH059 : public AHActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* NS_Tip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* SE_Shot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UH059DataAsset* H059Asset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* ShotNode;
    
public:
    AH059(const FObjectInitializer& ObjectInitializer);

};

