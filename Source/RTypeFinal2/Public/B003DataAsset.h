#pragma once
#include "CoreMinimal.h"
#include "B001DataAsset.h"
#include "B003DataAsset.generated.h"

UCLASS(Blueprintable)
class UB003DataAsset : public UB001DataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TurnASpd;
    
    UB003DataAsset();

};

