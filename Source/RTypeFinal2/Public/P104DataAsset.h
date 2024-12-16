#pragma once
#include "CoreMinimal.h"
#include "P001DataAsset.h"
#include "P104DataAsset.generated.h"

UCLASS(Blueprintable)
class UP104DataAsset : public UP001DataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RequiemT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RequiemDmgRate;
    
    UP104DataAsset();

};

