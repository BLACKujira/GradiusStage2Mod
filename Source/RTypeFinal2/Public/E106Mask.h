#pragma once
#include "CoreMinimal.h"
#include "E106Base.h"
#include "E106Mask.generated.h"

class AE106;
class UEnemyMaskDraw;

UCLASS(Blueprintable)
class AE106Mask : public AE106Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AE106* ParentActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UEnemyMaskDraw* MaskDraw;
    
    AE106Mask(const FObjectInitializer& ObjectInitializer);

};

