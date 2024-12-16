#pragma once
#include "CoreMinimal.h"
#include "WeaponDataAsset.h"
#include "SW002DataAsset.generated.h"

class ULevelSequence;

UCLASS(Blueprintable)
class USW002DataAsset : public UWeaponDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, ULevelSequence*> LevelSequences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Dummy;
    
    USW002DataAsset();

};

