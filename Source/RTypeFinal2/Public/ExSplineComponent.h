#pragma once
#include "CoreMinimal.h"
#include "Components/SplineComponent.h"
#include "ExSplineComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UExSplineComponent : public USplineComponent {
    GENERATED_BODY()
public:
    UExSplineComponent(const FObjectInitializer& ObjectInitializer);

};

