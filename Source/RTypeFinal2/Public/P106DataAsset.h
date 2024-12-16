#pragma once
#include "CoreMinimal.h"
#include "P001DataAsset.h"
#include "P106DataAsset.generated.h"

UCLASS(Blueprintable)
class UP106DataAsset : public UP001DataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BackFireBias;
    
    UP106DataAsset();

};

