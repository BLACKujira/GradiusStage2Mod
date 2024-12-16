#pragma once
#include "CoreMinimal.h"
#include "H000DataAsset.h"
#include "Templates/SubclassOf.h"
#include "H003DataAsset.generated.h"

class AH003Actor;
class UNiagaraSystem;
class UStaticMesh;

UCLASS(Blueprintable)
class UH003DataAsset : public UH000DataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AH003Actor> BpActor;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float EffOffset[7];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float ColorPow[7];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* BODYS[6];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* Tip;
    
    UH003DataAsset();

};

