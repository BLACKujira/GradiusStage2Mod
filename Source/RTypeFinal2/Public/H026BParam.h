#pragma once
#include "CoreMinimal.h"
#include "HActorParam.h"
#include "H026BParam.generated.h"

class UPrimitiveComponent;

UCLASS(Blueprintable)
class UH026BParam : public UHActorParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* HitComponent;
    
    UH026BParam();

};

