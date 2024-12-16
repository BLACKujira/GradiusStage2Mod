#pragma once
#include "CoreMinimal.h"
#include "BaseDataAsset.h"
#include "PlayerCmnAsset.generated.h"

class UNiagaraSystem;

UCLASS(Blueprintable)
class UPlayerCmnAsset : public UBaseDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UNiagaraSystem*> Effects;
    
    UPlayerCmnAsset();

};

