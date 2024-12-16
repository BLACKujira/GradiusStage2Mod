#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "AssetManUtil.generated.h"

class UObject;

UCLASS(Blueprintable, NotPlaceable, Transient)
class UAssetManUtil : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UAssetManUtil();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoadedAsset(FPrimaryAssetId _id);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UObject* GetLoadedAsset(FPrimaryAssetId _id);
    
};

