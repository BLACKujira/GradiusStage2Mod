#pragma once
#include "CoreMinimal.h"
#include "MBase.h"
#include "M020B.generated.h"

class UM020DataAsset;
class UPointLightComponent;
class USceneComponent;

UCLASS(Blueprintable)
class AM020B : public AMBase {
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
    UM020DataAsset* DataAsset;
    
public:
    AM020B(const FObjectInitializer& ObjectInitializer);

};

