#pragma once
#include "CoreMinimal.h"
#include "Components/SphereComponent.h"
#include "ExCollisionAttributeInterface.h"
#include "ExSphereComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UExSphereComponent : public USphereComponent, public IExCollisionAttributeInterface {
    GENERATED_BODY()
public:
    UExSphereComponent(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

