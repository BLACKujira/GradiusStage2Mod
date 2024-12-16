#pragma once
#include "CoreMinimal.h"
#include "Components/CapsuleComponent.h"
#include "ExCollisionAttributeInterface.h"
#include "ExCapsuleComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UExCapsuleComponent : public UCapsuleComponent, public IExCollisionAttributeInterface {
    GENERATED_BODY()
public:
    UExCapsuleComponent(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

