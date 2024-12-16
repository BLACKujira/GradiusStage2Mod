#pragma once
#include "CoreMinimal.h"
#include "W001.h"
#include "W011.generated.h"

class UPointLightComponent;

UCLASS(Blueprintable)
class AW011 : public AW001 {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPointLightComponent* LightComponent;
    
public:
    AW011(const FObjectInitializer& ObjectInitializer);

};

