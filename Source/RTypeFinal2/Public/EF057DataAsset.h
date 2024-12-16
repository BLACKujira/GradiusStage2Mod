#pragma once
#include "CoreMinimal.h"
#include "F001DataAsset.h"
#include "EF057DataAsset.generated.h"

class UCurveFloat;

UCLASS(Blueprintable)
class UEF057DataAsset : public UF001DataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UCurveFloat*> DeathAnimCurve;
    
    UEF057DataAsset();

};

