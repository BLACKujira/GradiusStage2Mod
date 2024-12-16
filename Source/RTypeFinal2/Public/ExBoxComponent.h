#pragma once
#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "ExCollisionAttributeInterface.h"
#include "ExBoxComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UExBoxComponent : public UBoxComponent, public IExCollisionAttributeInterface {
    GENERATED_BODY()
public:
    UExBoxComponent(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

