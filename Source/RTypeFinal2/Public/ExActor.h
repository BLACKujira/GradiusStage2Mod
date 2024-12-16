#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PauseInterface.h"
#include "ExActor.generated.h"

UCLASS(Abstract, Blueprintable)
class AExActor : public AActor, public IPauseInterface {
    GENERATED_BODY()
public:
    AExActor(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

