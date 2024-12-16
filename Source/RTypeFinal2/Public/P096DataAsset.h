#pragma once
#include "CoreMinimal.h"
#include "P001DataAsset.h"
#include "P096DataAsset.generated.h"

class UMaterialInstance;

UCLASS(Blueprintable)
class UP096DataAsset : public UP001DataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* Lv1_Material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* Lv1_Material2;
    
    UP096DataAsset();

};

