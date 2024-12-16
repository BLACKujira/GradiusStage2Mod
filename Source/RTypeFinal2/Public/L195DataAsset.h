#pragma once
#include "CoreMinimal.h"
#include "L195SvData.h"
#include "WeaponDataAsset.h"
#include "L195DataAsset.generated.h"

UCLASS(Blueprintable)
class UL195DataAsset : public UWeaponDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FL195SvData SvData;
    
    UL195DataAsset();

};

