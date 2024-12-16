#pragma once
#include "CoreMinimal.h"
#include "H000DataAsset.h"
#include "Templates/SubclassOf.h"
#include "H021DataAsset.generated.h"

class AH021CActor;

UCLASS(Blueprintable)
class UH021DataAsset : public UH000DataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AH021CActor> BpCActor;
    
    UH021DataAsset();

};

