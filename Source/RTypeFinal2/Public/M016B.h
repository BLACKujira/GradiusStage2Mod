#pragma once
#include "CoreMinimal.h"
#include "MBase.h"
#include "M016B.generated.h"

class UM016DataAsset;
class UPointLightComponent;
class USceneComponent;

UCLASS(Blueprintable)
class AM016B : public AMBase {
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
    UM016DataAsset* DataAsset;
    
public:
    AM016B(const FObjectInitializer& ObjectInitializer);

};

