#pragma once
#include "CoreMinimal.h"
#include "H000DataAsset.h"
#include "H024Form.h"
#include "H024DataAsset.generated.h"

UCLASS(Blueprintable)
class UH024DataAsset : public UH000DataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FH024Form ColForms[8];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float ApRate[8];
    
    UH024DataAsset();

};

