#pragma once
#include "CoreMinimal.h"
#include "BaseDataAsset.h"
#include "CockpitDataAsset.generated.h"

class USkeletalMesh;
class UStaticMesh;

UCLASS(Blueprintable)
class UCockpitDataAsset : public UBaseDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* StaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* SkeletalMesh;
    
    UCockpitDataAsset();

};

