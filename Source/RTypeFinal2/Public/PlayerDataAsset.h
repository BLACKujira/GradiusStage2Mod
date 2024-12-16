#pragma once
#include "CoreMinimal.h"
#include "WeaponDataAsset.h"
#include "PlayerDataAsset.generated.h"

UCLASS(Blueprintable)
class UPlayerDataAsset : public UWeaponDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Dummy;
    
    UPlayerDataAsset();

};

