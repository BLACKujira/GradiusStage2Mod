#pragma once
#include "CoreMinimal.h"
#include "P001DataAsset.h"
#include "P112DataAsset.generated.h"

UCLASS(Blueprintable)
class UP112DataAsset : public UP001DataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FairingRepairTime;
    
    UP112DataAsset();

};

