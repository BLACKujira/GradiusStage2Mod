#pragma once
#include "CoreMinimal.h"
#include "MBase.h"
#include "M002B.generated.h"

class UM002DataAsset;
class UPointLightComponent;
class USceneComponent;

UCLASS(Blueprintable)
class AM002B : public AMBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* CurrentRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* XX_Body;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPointLightComponent* LightComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UM002DataAsset* DataAsset;
    
public:
    AM002B(const FObjectInitializer& ObjectInitializer);

};

