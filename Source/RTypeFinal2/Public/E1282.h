#pragma once
#include "CoreMinimal.h"
#include "E014.h"
#include "WaterlineInterface.h"
#include "E1282.generated.h"

UCLASS(Blueprintable)
class AE1282 : public AE014, public IWaterlineInterface {
    GENERATED_BODY()
public:
    AE1282(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

