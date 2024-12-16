#pragma once
#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "BS006JointComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBS006JointComponent : public UStaticMeshComponent {
    GENERATED_BODY()
public:
    UBS006JointComponent(const FObjectInitializer& ObjectInitializer);

};

