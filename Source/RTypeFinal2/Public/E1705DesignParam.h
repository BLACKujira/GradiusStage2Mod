#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Templates/SubclassOf.h"
#include "E1705DesignParam.generated.h"

class UE1705PointLightComponent;

UCLASS(Blueprintable)
class UE1705DesignParam : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UE1705PointLightComponent> PointLightClass;
    
    UE1705DesignParam();

};

