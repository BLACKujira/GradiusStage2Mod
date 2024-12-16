#pragma once
#include "CoreMinimal.h"
#include "WeaponDataAsset.h"
#include "W001DataAsset.generated.h"

UCLASS(Blueprintable)
class UW001DataAsset : public UWeaponDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Dummy;
    
    UW001DataAsset();

};

