#pragma once
#include "CoreMinimal.h"
#include "WeaponDataAsset.h"
#include "SW001DataAsset.generated.h"

class ULevelSequence;

UCLASS(Blueprintable)
class USW001DataAsset : public UWeaponDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, ULevelSequence*> LevelSequences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Dummy;
    
    USW001DataAsset();

};

