#pragma once
#include "CoreMinimal.h"
#include "WeaponDataAsset.h"
#include "SWBaseDataAsset.generated.h"

UCLASS(Blueprintable)
class USWBaseDataAsset : public UWeaponDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Dummy;
    
    USWBaseDataAsset();

};

