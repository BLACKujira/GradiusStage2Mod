#pragma once
#include "CoreMinimal.h"
#include "WeaponDataAsset.h"
#include "SW005DataAsset.generated.h"

class ULevelSequence;

UCLASS(Blueprintable)
class USW005DataAsset : public UWeaponDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, ULevelSequence*> LevelSequences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Dummy;
    
    USW005DataAsset();

};

